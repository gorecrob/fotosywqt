/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Jun 29 13:17:14 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTreeView *treeView;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QListView *listView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_camera_make;
    QLabel *label_iso;
    QLabel *label_camera_model;
    QLabel *label_date;
    QLabel *label_exif;
    QLabel *label_width_height;
    QLabel *label_X_reso;
    QLabel *label_Y_reso;
    QLabel *label_flash;
    QLabel *label_focal;
    QLabel *label_ccd;
    QLabel *label_exposure_time;
    QLabel *label_brightness;
    QLabel *label_aperture;
    QLabel *label_metering;
    QLabel *label_exposure;
    QLabel *label_encoding;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QLabel *label_image;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(823, 761);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(823, 761));
        MainWindow->setMaximumSize(QSize(823, 761));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 801, 181));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 781, 162));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        treeView = new QTreeView(gridLayoutWidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setMinimumSize(QSize(400, 0));
        treeView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        treeView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        treeView->setAutoScroll(true);
        treeView->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        treeView->setWordWrap(false);
        treeView->header()->setVisible(false);

        gridLayout->addWidget(treeView, 1, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout->addWidget(comboBox);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMaximumSize(QSize(100, 30));
        pushButton->setLayoutDirection(Qt::RightToLeft);

        verticalLayout->addWidget(pushButton);

        progressBar = new QProgressBar(gridLayoutWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);


        gridLayout->addLayout(verticalLayout, 1, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        scrollArea = new QScrollArea(gridLayoutWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setMinimumSize(QSize(85, 0));
        scrollArea->setMaximumSize(QSize(85, 16777215));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 81, 137));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 1);

        listView = new QListView(centralWidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(15, 200, 681, 261));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(700, 200, 101, 262));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(pushButton_3);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 460, 791, 251));
        gridLayoutWidget_2 = new QWidget(groupBox_2);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 20, 771, 221));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setMinimumSize(QSize(10, 0));
        label_5->setMaximumSize(QSize(200, 200));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setMinimumSize(QSize(10, 0));
        label_6->setMaximumSize(QSize(200, 200));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setMinimumSize(QSize(10, 0));
        label_7->setMaximumSize(QSize(200, 200));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setMinimumSize(QSize(10, 0));
        label_8->setMaximumSize(QSize(200, 200));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setMinimumSize(QSize(10, 0));
        label_9->setMaximumSize(QSize(200, 200));

        gridLayout_2->addWidget(label_9, 8, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setMinimumSize(QSize(10, 0));
        label_10->setMaximumSize(QSize(200, 200));

        gridLayout_2->addWidget(label_10, 7, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setMinimumSize(QSize(10, 0));
        label_11->setMaximumSize(QSize(200, 200));

        gridLayout_2->addWidget(label_11, 4, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);
        label_12->setMinimumSize(QSize(10, 0));
        label_12->setMaximumSize(QSize(200, 200));

        gridLayout_2->addWidget(label_12, 5, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy2.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy2);
        label_13->setMinimumSize(QSize(10, 0));
        label_13->setMaximumSize(QSize(200, 200));

        gridLayout_2->addWidget(label_13, 6, 0, 1, 1);

        label_14 = new QLabel(gridLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 3, 2, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 0, 2, 1, 1);

        label_16 = new QLabel(gridLayoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_2->addWidget(label_16, 1, 2, 1, 1);

        label_17 = new QLabel(gridLayoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_2->addWidget(label_17, 2, 2, 1, 1);

        label_18 = new QLabel(gridLayoutWidget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_2->addWidget(label_18, 4, 2, 1, 1);

        label_19 = new QLabel(gridLayoutWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_2->addWidget(label_19, 5, 2, 1, 1);

        label_20 = new QLabel(gridLayoutWidget_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_2->addWidget(label_20, 6, 2, 1, 1);

        label_21 = new QLabel(gridLayoutWidget_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_2->addWidget(label_21, 7, 2, 1, 1);

        label_camera_make = new QLabel(gridLayoutWidget_2);
        label_camera_make->setObjectName(QString::fromUtf8("label_camera_make"));

        gridLayout_2->addWidget(label_camera_make, 0, 1, 1, 1);

        label_iso = new QLabel(gridLayoutWidget_2);
        label_iso->setObjectName(QString::fromUtf8("label_iso"));

        gridLayout_2->addWidget(label_iso, 4, 3, 1, 1);

        label_camera_model = new QLabel(gridLayoutWidget_2);
        label_camera_model->setObjectName(QString::fromUtf8("label_camera_model"));

        gridLayout_2->addWidget(label_camera_model, 1, 1, 1, 1);

        label_date = new QLabel(gridLayoutWidget_2);
        label_date->setObjectName(QString::fromUtf8("label_date"));

        gridLayout_2->addWidget(label_date, 2, 1, 1, 1);

        label_exif = new QLabel(gridLayoutWidget_2);
        label_exif->setObjectName(QString::fromUtf8("label_exif"));

        gridLayout_2->addWidget(label_exif, 3, 1, 1, 1);

        label_width_height = new QLabel(gridLayoutWidget_2);
        label_width_height->setObjectName(QString::fromUtf8("label_width_height"));

        gridLayout_2->addWidget(label_width_height, 4, 1, 1, 1);

        label_X_reso = new QLabel(gridLayoutWidget_2);
        label_X_reso->setObjectName(QString::fromUtf8("label_X_reso"));

        gridLayout_2->addWidget(label_X_reso, 5, 1, 1, 1);

        label_Y_reso = new QLabel(gridLayoutWidget_2);
        label_Y_reso->setObjectName(QString::fromUtf8("label_Y_reso"));

        gridLayout_2->addWidget(label_Y_reso, 6, 1, 1, 1);

        label_flash = new QLabel(gridLayoutWidget_2);
        label_flash->setObjectName(QString::fromUtf8("label_flash"));

        gridLayout_2->addWidget(label_flash, 7, 1, 1, 1);

        label_focal = new QLabel(gridLayoutWidget_2);
        label_focal->setObjectName(QString::fromUtf8("label_focal"));

        gridLayout_2->addWidget(label_focal, 8, 1, 1, 1);

        label_ccd = new QLabel(gridLayoutWidget_2);
        label_ccd->setObjectName(QString::fromUtf8("label_ccd"));

        gridLayout_2->addWidget(label_ccd, 0, 3, 1, 1);

        label_exposure_time = new QLabel(gridLayoutWidget_2);
        label_exposure_time->setObjectName(QString::fromUtf8("label_exposure_time"));

        gridLayout_2->addWidget(label_exposure_time, 1, 3, 1, 1);

        label_brightness = new QLabel(gridLayoutWidget_2);
        label_brightness->setObjectName(QString::fromUtf8("label_brightness"));

        gridLayout_2->addWidget(label_brightness, 2, 3, 1, 1);

        label_aperture = new QLabel(gridLayoutWidget_2);
        label_aperture->setObjectName(QString::fromUtf8("label_aperture"));

        gridLayout_2->addWidget(label_aperture, 3, 3, 1, 1);

        label_metering = new QLabel(gridLayoutWidget_2);
        label_metering->setObjectName(QString::fromUtf8("label_metering"));

        gridLayout_2->addWidget(label_metering, 5, 3, 1, 1);

        label_exposure = new QLabel(gridLayoutWidget_2);
        label_exposure->setObjectName(QString::fromUtf8("label_exposure"));

        gridLayout_2->addWidget(label_exposure, 6, 3, 1, 1);

        label_encoding = new QLabel(gridLayoutWidget_2);
        label_encoding->setObjectName(QString::fromUtf8("label_encoding"));

        gridLayout_2->addWidget(label_encoding, 7, 3, 1, 1);

        scrollArea_2 = new QScrollArea(gridLayoutWidget_2);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(scrollArea_2->sizePolicy().hasHeightForWidth());
        scrollArea_2->setSizePolicy(sizePolicy3);
        scrollArea_2->setMinimumSize(QSize(250, 0));
        scrollArea_2->setMaximumSize(QSize(250, 150));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 246, 146));
        label_image = new QLabel(scrollAreaWidgetContents_3);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setGeometry(QRect(0, 0, 250, 150));
        sizePolicy3.setHeightForWidth(label_image->sizePolicy().hasHeightForWidth());
        label_image->setSizePolicy(sizePolicy3);
        label_image->setMinimumSize(QSize(250, 150));
        label_image->setMaximumSize(QSize(250, 150));
        scrollArea_2->setWidget(scrollAreaWidgetContents_3);

        gridLayout_2->addWidget(scrollArea_2, 1, 4, 7, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 823, 18));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(treeView, SIGNAL(clicked(QModelIndex)), MainWindow, SLOT(getDirPath()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), listView, SLOT(selectAll()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), listView, SLOT(clearSelection()));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(getSelectedIDListView()));
        QObject::connect(listView, SIGNAL(clicked(QModelIndex)), MainWindow, SLOT(getSelectedItem()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "_NumerZdj\304\231cia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "_RRRR_MMDD_GodzinaMinutaSekunda", 0, QApplication::UnicodeUTF8)
        );
        pushButton->setText(QApplication::translate("MainWindow", "OK", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Wybierz folder z dysku: ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Nazwa pliku:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Dysk:", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Zaznacz \n"
"wszystko", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "Odznacz \n"
"wszystko", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Foto info", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Camera make:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Camera model:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Date/Time:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Exif version:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Focal length:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Flash used:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Width x Height:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "X resolution (dpi):", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Y resolution (dpi):", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "Aperture:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "CCD width:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "Exposure time:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "Brightness:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "ISO eqiuv:", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Metering mode:", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "Exposure:", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "Encoding:", 0, QApplication::UnicodeUTF8));
        label_camera_make->setText(QString());
        label_iso->setText(QString());
        label_camera_model->setText(QString());
        label_date->setText(QString());
        label_exif->setText(QString());
        label_width_height->setText(QString());
        label_X_reso->setText(QString());
        label_Y_reso->setText(QString());
        label_flash->setText(QString());
        label_focal->setText(QString());
        label_ccd->setText(QString());
        label_exposure_time->setText(QString());
        label_brightness->setText(QString());
        label_aperture->setText(QString());
        label_metering->setText(QString());
        label_exposure->setText(QString());
        label_encoding->setText(QString());
        label_image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
