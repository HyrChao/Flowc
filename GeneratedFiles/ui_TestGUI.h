/********************************************************************************
** Form generated from reading UI file 'TestGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTGUI_H
#define UI_TESTGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestGUI
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *test1;
    QPushButton *test2;
    QPushButton *test3;

    void setupUi(QWidget *TestGUI)
    {
        if (TestGUI->objectName().isEmpty())
            TestGUI->setObjectName(QStringLiteral("TestGUI"));
        TestGUI->resize(144, 99);
        verticalLayout = new QVBoxLayout(TestGUI);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        test1 = new QPushButton(TestGUI);
        test1->setObjectName(QStringLiteral("test1"));

        verticalLayout->addWidget(test1);

        test2 = new QPushButton(TestGUI);
        test2->setObjectName(QStringLiteral("test2"));

        verticalLayout->addWidget(test2);

        test3 = new QPushButton(TestGUI);
        test3->setObjectName(QStringLiteral("test3"));

        verticalLayout->addWidget(test3);


        retranslateUi(TestGUI);

        QMetaObject::connectSlotsByName(TestGUI);
    } // setupUi

    void retranslateUi(QWidget *TestGUI)
    {
        TestGUI->setWindowTitle(QApplication::translate("TestGUI", "TestGUI", nullptr));
        test1->setText(QApplication::translate("TestGUI", "Splitter", nullptr));
        test2->setText(QApplication::translate("TestGUI", "Dialog", nullptr));
        test3->setText(QApplication::translate("TestGUI", "Test3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestGUI: public Ui_TestGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTGUI_H
