/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave_as;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionUndo;
    QAction *actionRedo;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(392, 220);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/New.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Open.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOpen->setIcon(icon1);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName("actionSave_as");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/Save.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave_as->setIcon(icon2);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName("actionPrint");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/Print_Icon_16.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPrint->setIcon(icon3);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/Copy.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCopy->setIcon(icon4);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/Paste.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPaste->setIcon(icon5);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/Cut.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCut->setIcon(icon6);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/Undo_Icon_16.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionUndo->setIcon(icon7);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/Redo_Icon_16.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRedo->setIcon(icon8);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 0, 351, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 392, 17));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave_as);
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
