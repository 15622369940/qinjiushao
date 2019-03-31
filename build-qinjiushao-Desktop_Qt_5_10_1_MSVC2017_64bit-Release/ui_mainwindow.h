/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btn_do;
    QPushButton *btn_clear;
    QPushButton *btn_help;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *le_mostN;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *le_string;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *le_x;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *lbl_real_x_str;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLabel *lbl_new_str;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *lbl_ans;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLabel *lbl_realTime;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLabel *lbl_newTime;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLabel *lbl_effiTime;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(878, 548);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btn_do = new QPushButton(centralWidget);
        btn_do->setObjectName(QStringLiteral("btn_do"));
        btn_do->setGeometry(QRect(490, 40, 75, 23));
        btn_clear = new QPushButton(centralWidget);
        btn_clear->setObjectName(QStringLiteral("btn_clear"));
        btn_clear->setGeometry(QRect(580, 40, 75, 23));
        btn_help = new QPushButton(centralWidget);
        btn_help->setObjectName(QStringLiteral("btn_help"));
        btn_help->setGeometry(QRect(680, 40, 75, 23));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 10, 301, 121));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        le_mostN = new QLineEdit(widget);
        le_mostN->setObjectName(QStringLiteral("le_mostN"));

        horizontalLayout_4->addWidget(le_mostN);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_5->addWidget(label_2);

        le_string = new QLineEdit(widget);
        le_string->setObjectName(QStringLiteral("le_string"));
        le_string->setMaxLength(90000000);

        horizontalLayout_5->addWidget(le_string);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_6->addWidget(label_7);

        le_x = new QLineEdit(widget);
        le_x->setObjectName(QStringLiteral("le_x"));

        horizontalLayout_6->addWidget(le_x);


        verticalLayout_2->addLayout(horizontalLayout_6);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(40, 150, 761, 211));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lbl_real_x_str = new QLabel(widget1);
        lbl_real_x_str->setObjectName(QStringLiteral("lbl_real_x_str"));
        QFont font;
        font.setPointSize(18);
        lbl_real_x_str->setFont(font);
        lbl_real_x_str->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbl_real_x_str->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lbl_real_x_str);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 6);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_8 = new QLabel(widget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_3->addWidget(label_8);

        lbl_new_str = new QLabel(widget1);
        lbl_new_str->setObjectName(QStringLiteral("lbl_new_str"));
        lbl_new_str->setFont(font);
        lbl_new_str->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbl_new_str->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lbl_new_str);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 6);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lbl_ans = new QLabel(widget1);
        lbl_ans->setObjectName(QStringLiteral("lbl_ans"));
        lbl_ans->setFont(font);
        lbl_ans->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbl_ans->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lbl_ans);


        verticalLayout->addLayout(horizontalLayout);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(40, 390, 341, 121));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(widget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_7->addWidget(label_5);

        lbl_realTime = new QLabel(widget2);
        lbl_realTime->setObjectName(QStringLiteral("lbl_realTime"));
        lbl_realTime->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbl_realTime->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lbl_realTime);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_9 = new QLabel(widget2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_8->addWidget(label_9);

        lbl_newTime = new QLabel(widget2);
        lbl_newTime->setObjectName(QStringLiteral("lbl_newTime"));
        lbl_newTime->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbl_newTime->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(lbl_newTime);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_10 = new QLabel(widget2);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_9->addWidget(label_10);

        lbl_effiTime = new QLabel(widget2);
        lbl_effiTime->setObjectName(QStringLiteral("lbl_effiTime"));
        lbl_effiTime->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbl_effiTime->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(lbl_effiTime);


        verticalLayout_3->addLayout(horizontalLayout_9);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 878, 23));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_do->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227", nullptr));
        btn_clear->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        btn_help->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        label->setText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245x\347\232\204\346\234\200\351\253\230\346\254\241\345\271\202\357\274\232", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\350\257\267\344\276\235\346\254\241\350\276\223\345\205\245x\347\232\204\347\263\273\346\225\260\357\274\232", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245x\347\232\204\345\200\274\357\274\232", nullptr));
        le_x->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "x\347\232\204\345\244\232\351\241\271\345\274\217\357\274\232", nullptr));
        lbl_real_x_str->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "\345\244\204\347\220\206\345\220\216\347\232\204\345\244\232\351\241\271\345\274\217:", nullptr));
        lbl_new_str->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "\347\273\223\346\236\234\357\274\232", nullptr));
        lbl_ans->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "\345\210\235\345\247\213\347\256\227\346\263\225\350\277\220\350\241\214\346\227\266\351\227\264(s):", nullptr));
        lbl_realTime->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "\347\247\246\344\271\235\351\237\266\347\256\227\346\263\225\350\277\220\350\241\214\346\227\266\351\227\264(s):", nullptr));
        lbl_newTime->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "\346\225\210\347\216\207\346\257\224\350\276\203:", nullptr));
        lbl_effiTime->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
