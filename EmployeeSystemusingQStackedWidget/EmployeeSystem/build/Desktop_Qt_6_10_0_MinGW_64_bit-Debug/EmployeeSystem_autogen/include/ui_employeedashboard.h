/********************************************************************************
** Form generated from reading UI file 'employeedashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEDASHBOARD_H
#define UI_EMPLOYEEDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeeDashboard
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *EmpId;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_empid;
    QHBoxLayout *horizontalLayout_2;
    QLabel *EmpName;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_2Cname;
    QHBoxLayout *horizontalLayout_3;
    QLabel *CompanyName;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_3EName;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Designation;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit_5Designation;
    QHBoxLayout *horizontalLayout_5;
    QLabel *JoiningDate;
    QSpacerItem *horizontalSpacer_6;
    QDateEdit *dateEdit;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *BtnEmployee;
    QPushButton *logout;
    QPushButton *login;
    QLabel *TimerLabel;
    QTableWidget *tableWidget;
    QLabel *labelcurrentemp;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EmployeeDashboard)
    {
        if (EmployeeDashboard->objectName().isEmpty())
            EmployeeDashboard->setObjectName("EmployeeDashboard");
        EmployeeDashboard->resize(800, 600);
        centralwidget = new QWidget(EmployeeDashboard);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        EmpId = new QLabel(centralwidget);
        EmpId->setObjectName("EmpId");
        QFont font;
        font.setPointSize(10);
        EmpId->setFont(font);

        horizontalLayout->addWidget(EmpId);

        horizontalSpacer_2 = new QSpacerItem(65, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        lineEdit_empid = new QLineEdit(centralwidget);
        lineEdit_empid->setObjectName("lineEdit_empid");

        horizontalLayout->addWidget(lineEdit_empid);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        EmpName = new QLabel(centralwidget);
        EmpName->setObjectName("EmpName");
        EmpName->setFont(font);

        horizontalLayout_2->addWidget(EmpName);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        lineEdit_2Cname = new QLineEdit(centralwidget);
        lineEdit_2Cname->setObjectName("lineEdit_2Cname");

        horizontalLayout_2->addWidget(lineEdit_2Cname);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        CompanyName = new QLabel(centralwidget);
        CompanyName->setObjectName("CompanyName");
        CompanyName->setFont(font);

        horizontalLayout_3->addWidget(CompanyName);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        lineEdit_3EName = new QLineEdit(centralwidget);
        lineEdit_3EName->setObjectName("lineEdit_3EName");

        horizontalLayout_3->addWidget(lineEdit_3EName);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        Designation = new QLabel(centralwidget);
        Designation->setObjectName("Designation");
        Designation->setFont(font);

        horizontalLayout_4->addWidget(Designation);

        horizontalSpacer_5 = new QSpacerItem(65, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        lineEdit_5Designation = new QLineEdit(centralwidget);
        lineEdit_5Designation->setObjectName("lineEdit_5Designation");

        horizontalLayout_4->addWidget(lineEdit_5Designation);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        JoiningDate = new QLabel(centralwidget);
        JoiningDate->setObjectName("JoiningDate");
        JoiningDate->setFont(font);

        horizontalLayout_5->addWidget(JoiningDate);

        horizontalSpacer_6 = new QSpacerItem(70, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_5->addWidget(dateEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        BtnEmployee = new QPushButton(centralwidget);
        BtnEmployee->setObjectName("BtnEmployee");
        BtnEmployee->setFont(font);

        horizontalLayout_6->addWidget(BtnEmployee);

        logout = new QPushButton(centralwidget);
        logout->setObjectName("logout");

        horizontalLayout_6->addWidget(logout);

        login = new QPushButton(centralwidget);
        login->setObjectName("login");

        horizontalLayout_6->addWidget(login);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_2->addLayout(verticalLayout);

        TimerLabel = new QLabel(centralwidget);
        TimerLabel->setObjectName("TimerLabel");

        verticalLayout_2->addWidget(TimerLabel);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidget->setTabKeyNavigation(true);
        tableWidget->setDragEnabled(true);
        tableWidget->setDragDropMode(QAbstractItemView::DragDropMode::NoDragDrop);
        tableWidget->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        tableWidget->setTextElideMode(Qt::TextElideMode::ElideNone);

        verticalLayout_2->addWidget(tableWidget);

        labelcurrentemp = new QLabel(centralwidget);
        labelcurrentemp->setObjectName("labelcurrentemp");

        verticalLayout_2->addWidget(labelcurrentemp);

        EmployeeDashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EmployeeDashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        EmployeeDashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(EmployeeDashboard);
        statusbar->setObjectName("statusbar");
        EmployeeDashboard->setStatusBar(statusbar);

        retranslateUi(EmployeeDashboard);

        QMetaObject::connectSlotsByName(EmployeeDashboard);
    } // setupUi

    void retranslateUi(QMainWindow *EmployeeDashboard)
    {
        EmployeeDashboard->setWindowTitle(QCoreApplication::translate("EmployeeDashboard", "EmployeeDashboard", nullptr));
        EmpId->setText(QCoreApplication::translate("EmployeeDashboard", "Employee Id", nullptr));
        EmpName->setText(QCoreApplication::translate("EmployeeDashboard", "Employee Name", nullptr));
        CompanyName->setText(QCoreApplication::translate("EmployeeDashboard", "Company Name", nullptr));
        Designation->setText(QCoreApplication::translate("EmployeeDashboard", "Designation", nullptr));
        JoiningDate->setText(QCoreApplication::translate("EmployeeDashboard", "Joining Date", nullptr));
        BtnEmployee->setText(QCoreApplication::translate("EmployeeDashboard", "Add", nullptr));
        logout->setText(QCoreApplication::translate("EmployeeDashboard", "LogOut", nullptr));
        login->setText(QCoreApplication::translate("EmployeeDashboard", "BacktoLogin", nullptr));
        TimerLabel->setText(QString());
        labelcurrentemp->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EmployeeDashboard: public Ui_EmployeeDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEDASHBOARD_H
