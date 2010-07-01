#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileSystemModel>
#include <QTreeView>
#include <QWidget>
#include <QCheckBox>
#include <dirent.h>
#include <drivebutton.h>
#include <QDebug>
#include <EXIF.H>
#include <QLabel>
#include <QImage>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);
    void prepareDirView(QString);
    void prepareDriveView();
    void preparePhotoNameTable(QString aParam);

private:
    Ui::MainWindow *ui;
    QString iDirPath;
    QFileSystemModel *model;
    QFileSystemModel *photosNameModel;


public slots:
   void getDirPath();
   void setRootPath(QString );
   void getSelectedIDListView();
   void getSelectedItem();

};

#endif // MAINWINDOW_H
