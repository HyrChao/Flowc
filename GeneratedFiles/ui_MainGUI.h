/********************************************************************************
** Form generated from reading UI file 'MainGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINGUI_H
#define UI_MAINGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainGUIClass
{
public:
    QAction *actionQuit;
    QAction *actionTest;
    QAction *actionAbout;
    QAction *actionDebug;
    QAction *actionTestDialog;
    QWidget *centralWidget;
    QWidget *mainWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menuHelp;
    QMenu *menuTools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainGUIClass)
    {
        if (MainGUIClass->objectName().isEmpty())
            MainGUIClass->setObjectName(QStringLiteral("MainGUIClass"));
        MainGUIClass->resize(674, 573);
        MainGUIClass->setCursor(QCursor(Qt::ArrowCursor));
        actionQuit = new QAction(MainGUIClass);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionTest = new QAction(MainGUIClass);
        actionTest->setObjectName(QStringLiteral("actionTest"));
        actionAbout = new QAction(MainGUIClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionDebug = new QAction(MainGUIClass);
        actionDebug->setObjectName(QStringLiteral("actionDebug"));
        actionTestDialog = new QAction(MainGUIClass);
        actionTestDialog->setObjectName(QStringLiteral("actionTestDialog"));
        centralWidget = new QWidget(MainGUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        mainWidget = new QWidget(centralWidget);
        mainWidget->setObjectName(QStringLiteral("mainWidget"));
        mainWidget->setGeometry(QRect(90, 90, 401, 331));
        mainWidget->setCursor(QCursor(Qt::ArrowCursor));
        MainGUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainGUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 674, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        MainGUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainGUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainGUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainGUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainGUIClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menu->addSeparator();
        menu->addAction(actionQuit);
        menuHelp->addAction(actionTest);
        menuHelp->addAction(actionTestDialog);
        menuHelp->addAction(actionDebug);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);

        retranslateUi(MainGUIClass);

        QMetaObject::connectSlotsByName(MainGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainGUIClass)
    {
        MainGUIClass->setWindowTitle(QApplication::translate("MainGUIClass", "MainGUI", nullptr));
        actionQuit->setText(QApplication::translate("MainGUIClass", "Quit", nullptr));
        actionTest->setText(QApplication::translate("MainGUIClass", "Test", nullptr));
        actionAbout->setText(QApplication::translate("MainGUIClass", "About", nullptr));
        actionDebug->setText(QApplication::translate("MainGUIClass", "Debug", nullptr));
        actionTestDialog->setText(QApplication::translate("MainGUIClass", "Test Dialog", nullptr));
        menu->setTitle(QApplication::translate("MainGUIClass", "FIle", nullptr));
        menuHelp->setTitle(QApplication::translate("MainGUIClass", "Help", nullptr));
        menuTools->setTitle(QApplication::translate("MainGUIClass", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainGUIClass: public Ui_MainGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINGUI_H
