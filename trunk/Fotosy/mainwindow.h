#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileSystemModel>
#include <QTreeView>
#include <QWidget>
#include <QCheckBox>
#include <dirent.h>

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
    void prepareDirView();
    void preparePhotoNameTable(QString aParam);

private:
    Ui::MainWindow *ui;
    //QTreeView *treeView;
    QString iDirPath;
    QFileSystemModel *model;
    //QString *photosNameTable;

public slots:
   void getDirPath();
};

#endif // MAINWINDOW_H
