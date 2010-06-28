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

    for (int i=0; i<numSelected; i++ )
    {
        QVariant photoName = mil.at(i).data();
        QString fPath = iDirPath;
        QString photoNameString = photoName.toString();
        fPath.append("/").append(photoNameString);
        QFile file (fPath);
        QString fPath_ren = fPath;
        fPath_ren.chop(photoNameString.count());
        int dotPos = photoNameString.lastIndexOf(".");
        int cutExtension = photoNameString.count() - dotPos;
        ui->progressBar->setMinimum(0);
        ui->progressBar->setMaximum(numSelected);
        if (ui->comboBox->currentIndex() == 0)
        {
            QString toNum;
            toNum = toNum.setNum(i+1);
            fPath_ren += ui->lineEdit->text().append("_").append(toNum).append(photoNameString.right(cutExtension));
            ui->progressBar->setValue(i);
        }
        else
        {
            //TODO exif file from
            Cexif exif;
            exif.DecodeExif(hFile);

        }
        dir.rename(fPath, fPath_ren);


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
