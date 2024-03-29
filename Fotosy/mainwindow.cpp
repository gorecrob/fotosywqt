#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    prepareDriveView();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}


void MainWindow::prepareDriveView()
{
    QFileInfoList driveList =  QDir::drives();
    DriveButton *tempToolDriveButt;
    QVBoxLayout *tempLayout = new QVBoxLayout();
    tempLayout->setMargin(1);
    tempLayout->setSpacing(1);
    QWidget *tempWidget = new QWidget();
    tempWidget->setLayout(tempLayout);

    ui->label_image->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
    for (int i=0; i< driveList.count(); i++)
    {
        if (driveList.at(i).isWritable())
        {
            tempToolDriveButt = new DriveButton(driveList.at(i).absolutePath());
            tempToolDriveButt->setMaximumSize(61,61);
            tempToolDriveButt->setMinimumSize(61,61);
            tempToolDriveButt->setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);
            tempLayout->addWidget(tempToolDriveButt);
            connect(tempToolDriveButt, SIGNAL(Clicked(QString)), this, SLOT(setRootPath(QString)));
        }
    }
    ui->scrollArea->setWidget(tempWidget);
    ui->scrollArea->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    prepareDirView(driveList.at(0).absolutePath());
}
void MainWindow::prepareDirView(QString aDrive)
{
    model = new QFileSystemModel;
    model->setRootPath(aDrive);
    model->setFilter(QDir::Dirs | QDir::Drives | QDir::NoDotAndDotDot);
    ui->treeView->setModel(model);
    ui->treeView->hideColumn(1);
    ui->treeView->hideColumn(2);
    ui->treeView->hideColumn(3);
    ui->treeView->resizeColumnToContents(0);
    ui->treeView->setAnimated(true);
    ui->treeView->setRootIndex(model->index(aDrive));
    QString labelDriveDir = "Wybierz folder z dysku: ";
    labelDriveDir.append(aDrive);
    ui->label->setText(labelDriveDir);
    preparePhotoNameTable(aDrive);


}

void MainWindow::getDirPath()
{
    iDirPath = model->filePath(ui->treeView->currentIndex());
    //ui->lineEdit->setText(iDirPath);
    preparePhotoNameTable(iDirPath);
}

void MainWindow::preparePhotoNameTable(QString aParam)
{
    QStringList filterExtensionsList;
    filterExtensionsList.append("*.jpg");
    filterExtensionsList.append("*.jpeg");
    photosNameModel = new QFileSystemModel;
    photosNameModel->setRootPath(aParam);
    photosNameModel->setFilter(QDir::Files);
    photosNameModel->setNameFilters(filterExtensionsList);
    photosNameModel->setNameFilterDisables(false);
    //bool test = removeColumn(1,photosNameModel);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setValue(0);
    ui->listView->setViewMode(QListView::IconMode);
    ui->listView->setModel(photosNameModel);
    ui->listView->setModelColumn(0);
    ui->listView->setSelectionMode(QAbstractItemView::MultiSelection);
    ui->listView->setWordWrap(true);
    ui->listView->setWrapping(true);
    ui->listView->setResizeMode(QListView::Fixed);
    ui->listView->setRootIndex(photosNameModel->index(aParam));
}

void MainWindow::getSelectedIDListView()
{
    QItemSelectionModel* ism = ui->listView->selectionModel();
    QModelIndexList mil = ism->selectedIndexes();
    int numSelected = mil.count();
    QDir dir;
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(numSelected);
    for (int i=0; i<numSelected; i++ )
    {
        QVariant photoName = mil.at(i).data();
        QString fPath = iDirPath;
        QString photoNameString = photoName.toString();
        fPath.append("/").append(photoNameString);
        QFile testFile(fPath);

        if (testFile.exists() && testFile.size()!=0 )
        {
            QString fPath_ren = fPath;
            fPath_ren.chop(photoNameString.count());
            int dotPos = photoNameString.lastIndexOf(".");
            int cutExtension = photoNameString.count() - dotPos;

            if (ui->comboBox->currentIndex() == 0)
            {
                QString toNum;
                toNum = toNum.setNum(i+1);
                fPath_ren += ui->lineEdit->text().append("_").append(toNum).append(photoNameString.right(cutExtension));
                dir.rename(fPath, fPath_ren);
            }
            else
            {
                QString photoDate = "";
                Cexif exif;
                QFile *file = new QFile(fPath);
                file->open(QIODevice::ReadOnly);
                FILE* hFile=fdopen(file->handle(),"rb");
                exif.DecodeExif(hFile);
                    for (int z=0; z<19; z++)
                        photoDate  += exif.m_exifinfo->DateTime[z];
                fclose(hFile);

                if (!photoDate.isEmpty())
                {
                    photoDate.replace(4,1,QString("_"));
                    photoDate.replace(QString(":"),QString(""));
                    photoDate.replace(QString(" "),QString("_"));
                }
                else
                {
                photoDate = photoDate.setNum(i+1);
                }
                fPath_ren += ui->lineEdit->text().append("_").append(photoDate).append(photoNameString.right(cutExtension));
                dir.rename(fPath, fPath_ren);
                file->close();
                delete file;
            }
        }
        ui->progressBar->setValue(i+1);
    }
}

void MainWindow::getSelectedItem()
{
    QItemSelectionModel* ism = ui->listView->selectionModel();
    QModelIndexList mil = ism->selectedIndexes();
    int numSelected = mil.count();

    if (numSelected == 0)
    {
        ui->label_aperture->setText("");
        ui->label_brightness->setText("");
        ui->label_camera_make->setText("");
        ui->label_camera_model->setText("");
        ui->label_ccd->setText("");
        ui->label_date->setText("");
        ui->label_compression->setText("");
        ui->label_exif->setText("");
        ui->label_exposure->setText("");
        ui->label_exposure_time->setText("");
        ui->label_flash->setText("");
        ui->label_focal->setText("");
        ui->label_iso->setText("");
        ui->label_metering->setText("");
        ui->label_width_height->setText("");
        ui->label_X_reso->setText("");
        ui->label_Y_reso->setText("");
        ui->groupBox_2->setTitle("Foto info:");
        ui->label_image->clear();
    }
    else
    {
        //QDir dir;
        QVariant photoName = mil.at(numSelected-1).data();
        QString fPath = iDirPath;
        QString photoNameString = photoName.toString();
        fPath.append("/").append(photoNameString);
        QFile testFile(fPath);

        if (testFile.exists() && testFile.size()!=0 )
        {
            ui->groupBox_2->setTitle("Foto info: " + photoName.toString());
            Cexif exif;
            QFile *file = new QFile(fPath);
            file->open(QIODevice::ReadOnly);
            FILE* hFile=fdopen(file->handle(),"rb");
            exif.DecodeExif(hFile);
            //Date/time
            QString photoDate = "";
            for (int z=0; z<19; z++)
                photoDate  += exif.m_exifinfo->DateTime[z];
            ui->label_date->setText(photoDate);

            //char  Version      [5];
            QString exifVersion = "";
            for (int z=0; z<4; z++)
                exifVersion += exif.m_exifinfo->Version[z];
            ui->label_exif->setText(exifVersion);

            //char  CameraMake   [32];
            QString camera = "";
            for (int z=0; z<31; z++)
                if (exif.m_exifinfo->CameraMake[z] != NULL)
                    camera += exif.m_exifinfo->CameraMake[z];
            ui->label_camera_make->setText(camera);

            //char  CameraModel  [40];
            QString camModel = "";
            for (int z=0; z<39; z++)
                if (exif.m_exifinfo->CameraModel[z] != NULL)
                    camModel += exif.m_exifinfo->CameraModel[z];
            ui->label_camera_model->setText(camModel);

            //int   Height, Width;
            QString HW ="";
            int hSize = exif.m_exifinfo->Height;
            int wSize = exif.m_exifinfo->Width;
            QString toNumH, toNumW;
            HW.append(toNumW.setNum(wSize)).append(" x ").append(toNumH.setNum(hSize));
            ui->label_width_height->setText(HW);

            //int   FlashUsed;
            if (exif.m_exifinfo->FlashUsed == 0)
                ui->label_flash->setText("No");
            else
                ui->label_flash->setText("Yes");

            //float FocalLength;
            QString focalLen;
            focalLen = focalLen.setNum(exif.m_exifinfo->FocalLength);
            ui->label_focal->setText(focalLen + " mm");

            //float ExposureTime;
            QString exposureTim;
            exposureTim = exposureTim.setNum(exif.m_exifinfo->ExposureTime);
            ui->label_exposure_time->setText(exposureTim + " sec.");
            //float ApertureFNumber;
            QString aperture;
            aperture = aperture.setNum(exif.m_exifinfo->ApertureFNumber);
            ui->label_aperture->setText("F/" + aperture);

            //float CCDWidth;
            QString ccd;
            ccd = ccd.setNum(exif.m_exifinfo->CCDWidth);
            ui->label_ccd->setText(ccd + " mm");

            //int   ExposureProgram;
            switch ( exif.m_exifinfo->ExposureProgram)
            {
            case 2:
                ui->label_exposure->setText("program (auto)");
                break;
            default:
                ui->label_exposure->setText("program (semi-auto)");
                break;
            }
            //int   MeteringMode;
            switch(exif.m_exifinfo->MeteringMode)
            {
            case 2:
                ui->label_metering->setText("center weight");
                break;
            case 3:
                ui->label_metering->setText("spot");
                break;
            case 5:
                ui->label_metering->setText("matrix");
                break;
            default:
                ui->label_metering->setText("No data");
                break;
            }

            //int   ISOequivalent;
            QString isoEq;
            isoEq = isoEq.setNum(exif.m_exifinfo->ISOequivalent);
            ui->label_iso->setText(isoEq);

            //float Xresolution;
            QString xReso;
            xReso = xReso.setNum(exif.m_exifinfo->Xresolution);
            ui->label_X_reso->setText(xReso);
            //float Yresolution;
            QString yReso;
            yReso = yReso.setNum(exif.m_exifinfo->Yresolution);
            ui->label_Y_reso->setText(yReso);

            //float Brightness;
            QString brightness;
            brightness = brightness.setNum(exif.m_exifinfo->Brightness);
            ui->label_brightness->setText(brightness);

            //Image insert
            QImage image(fPath);
            QSize imgSize(250,150);
            QImage newImage = image.scaled(imgSize, Qt::KeepAspectRatio, Qt::FastTransformation);
            ui->label_image->setAlignment(Qt::AlignCenter);
            ui->label_image->setPixmap(QPixmap::fromImage(newImage));

            //int CompressionLevel
            switch(exif.m_exifinfo->CompressionLevel)
            {
            case 1:
                ui->label_compression->setText("Jpeg Quality: basic");
                break;
            case 2:
                ui->label_compression->setText("Jpeg Quality: normal");
                break;
            case 4:
                ui->label_compression->setText("Jpeg Quality: fine");
                break;
            default:
                ui->label_compression->setText("No Data");
                break;
           }

            fclose(hFile);
            file->close();
            delete file;
        }
    }

}
void MainWindow::setRootPath(QString iPath)
{
    if (model->rootPath() != iPath)
    {
        delete model;
        prepareDirView(iPath);
    }
    qDebug() << iPath;
}
