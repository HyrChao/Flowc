/********************************************************************************
** Form generated from reading UI file 'Test_Cpp_01.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_CPP_01_H
#define UI_TEST_CPP_01_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test_Cpp_01
{
public:

    void setupUi(QWidget *Test_Cpp_01)
    {
        if (Test_Cpp_01->objectName().isEmpty())
            Test_Cpp_01->setObjectName(QStringLiteral("Test_Cpp_01"));
        Test_Cpp_01->resize(400, 300);

        retranslateUi(Test_Cpp_01);

        QMetaObject::connectSlotsByName(Test_Cpp_01);
    } // setupUi

    void retranslateUi(QWidget *Test_Cpp_01)
    {
        Test_Cpp_01->setWindowTitle(QApplication::translate("Test_Cpp_01", "Test_Cpp_01", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Test_Cpp_01: public Ui_Test_Cpp_01 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_CPP_01_H
