/********************************************************************************
** Form generated from reading UI file 'employeelogin.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEELOGIN_H
#define UI_EMPLOYEELOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeeLogin
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLabel *timer_label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *username;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn;
    QPushButton *backtowelcome;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EmployeeLogin)
    {
        if (EmployeeLogin->objectName().isEmpty())
            EmployeeLogin->setObjectName("EmployeeLogin");
        EmployeeLogin->resize(742, 580);
        centralwidget = new QWidget(EmployeeLogin);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(160, 70, 431, 304));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(100, 50));
        label->setMaximumSize(QSize(400, 200));
        QFont font;
        font.setPointSize(20);
        font.setUnderline(true);
        label->setFont(font);
        label->setTextFormat(Qt::TextFormat::RichText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label->setMargin(0);

        horizontalLayout_3->addWidget(label);

        timer_label = new QLabel(widget);
        timer_label->setObjectName("timer_label");
        timer_label->setMaximumSize(QSize(200, 50));
        timer_label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_3->addWidget(timer_label);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        username = new QLineEdit(widget);
        username->setObjectName("username");

        horizontalLayout_2->addWidget(username);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_4->addWidget(label_3);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_4->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn = new QPushButton(widget);
        btn->setObjectName("btn");
        QFont font2;
        font2.setPointSize(9);
        btn->setFont(font2);

        horizontalLayout->addWidget(btn);

        backtowelcome = new QPushButton(widget);
        backtowelcome->setObjectName("backtowelcome");

        horizontalLayout->addWidget(backtowelcome);


        verticalLayout->addLayout(horizontalLayout);

        EmployeeLogin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EmployeeLogin);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 742, 22));
        EmployeeLogin->setMenuBar(menubar);
        statusbar = new QStatusBar(EmployeeLogin);
        statusbar->setObjectName("statusbar");
        EmployeeLogin->setStatusBar(statusbar);

        retranslateUi(EmployeeLogin);

        QMetaObject::connectSlotsByName(EmployeeLogin);
    } // setupUi

    void retranslateUi(QMainWindow *EmployeeLogin)
    {
        EmployeeLogin->setWindowTitle(QCoreApplication::translate("EmployeeLogin", "EmployeeLogin", nullptr));
        label->setText(QCoreApplication::translate("EmployeeLogin", "LOGIN", nullptr));
        timer_label->setText(QString());
        label_2->setText(QCoreApplication::translate("EmployeeLogin", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("EmployeeLogin", "Password", nullptr));
        btn->setText(QCoreApplication::translate("EmployeeLogin", "Login", nullptr));
        backtowelcome->setText(QCoreApplication::translate("EmployeeLogin", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmployeeLogin: public Ui_EmployeeLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEELOGIN_H
