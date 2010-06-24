#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    prepareDirView();
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

void MainWindow::prepareDirView()
{
    model = new QFileSystemModel;
    model->setRootPath(QDir::currentPath());
    model->setFilter(QDir::Dirs | QDir::Drives | QDir::NoDotAndDotDot);
    ui->treeView->setModel(model);
    ui->treeView->hideColumn(1);
    ui->treeView->hideColumn(2);
    ui->treeView->hideColumn(3);
    ui->treeView->resizeColumnToContents(0);
    ui->treeView->setAnimated(true);
    ui->tableView->sortByColumn(0,Qt::DescendingOrder);
    preparePhotoNameTable("/");
    //ui->treeView->setRootIndex(model->index("/"));


}

void MainWindow::getDirPath()
{
iDirPath = "";
iDirPath = model->filePath(ui->treeView->currentIndex());
ui->lineEdit->setText(iDirPath);
preparePhotoNameTable(iDirPath);
}

void MainWindow::preparePhotoNameTable(QString aParam)
{
    QStringList filterExtensionsList;
    filterExtensionsList.append("*.jpg");
    filterExtensionsList.append("*.jpeg");
    QFileSystemModel *photosNameModel = new QFileSystemModel;
    photosNameModel->setRootPath(aParam);
    photosNameModel->setFilter(QDir::Files);
    photosNameModel->setNameFilters(filterExtensionsList);
    photosNameModel->setNameFilterDisables(false);
    ui->tableView->setModel(photosNameModel);
    ui->tableView->sortByColumn(0,Qt::AscendingOrder);
    ui->tableView->hideColumn(1);
    ui->tableView->hideColumn(2);
    ui->tableView->hideColumn(3);
    ui->tableView->setRootIndex(photosNameModel->index(aParam));
    //int counter = photosNameModel->rowCount(photosNameModel->setRootPath(aParam));
    //QVariant var = photosNameModel->data(photosNameModel->index(aParam),Qt::DisplayRole);
    //counter = counter+0;



}
