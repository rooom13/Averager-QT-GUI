/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *lyInput;
    QLabel *lblAddPinchazo;
    QSplitter *splitter;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblDate;
    QLineEdit *txtDate;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *lblErrorMsg;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lblDescrpiption;
    QTextEdit *textDescription;
    QPushButton *btnAdd;
    QVBoxLayout *lyOutput;
    QFrame *line;
    QLabel *lblAverage;
    QVBoxLayout *verticalLayout_3;
    QFrame *line_2;
    QSpacerItem *verticalSpacer;
    QLabel *lblRemaining;
    QFrame *line_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(396, 522);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 371, 321));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lyInput = new QVBoxLayout();
        lyInput->setSpacing(6);
        lyInput->setObjectName(QString::fromUtf8("lyInput"));
        lblAddPinchazo = new QLabel(layoutWidget);
        lblAddPinchazo->setObjectName(QString::fromUtf8("lblAddPinchazo"));
        QFont font;
        font.setPointSize(14);
        font.setItalic(true);
        lblAddPinchazo->setFont(font);

        lyInput->addWidget(lblAddPinchazo);

        splitter = new QSplitter(layoutWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lblDate = new QLabel(layoutWidget1);
        lblDate->setObjectName(QString::fromUtf8("lblDate"));

        horizontalLayout_4->addWidget(lblDate);

        txtDate = new QLineEdit(layoutWidget1);
        txtDate->setObjectName(QString::fromUtf8("txtDate"));

        horizontalLayout_4->addWidget(txtDate);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lblErrorMsg = new QLabel(layoutWidget1);
        lblErrorMsg->setObjectName(QString::fromUtf8("lblErrorMsg"));
        QFont font1;
        font1.setPointSize(9);
        font1.setItalic(true);
        lblErrorMsg->setFont(font1);

        horizontalLayout->addWidget(lblErrorMsg);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lblDescrpiption = new QLabel(layoutWidget1);
        lblDescrpiption->setObjectName(QString::fromUtf8("lblDescrpiption"));

        horizontalLayout_5->addWidget(lblDescrpiption);

        textDescription = new QTextEdit(layoutWidget1);
        textDescription->setObjectName(QString::fromUtf8("textDescription"));

        horizontalLayout_5->addWidget(textDescription);


        verticalLayout->addLayout(horizontalLayout_5);

        splitter->addWidget(layoutWidget1);
        btnAdd = new QPushButton(splitter);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        splitter->addWidget(btnAdd);

        lyInput->addWidget(splitter);


        verticalLayout_2->addLayout(lyInput);

        lyOutput = new QVBoxLayout();
        lyOutput->setSpacing(6);
        lyOutput->setObjectName(QString::fromUtf8("lyOutput"));
        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        lyOutput->addWidget(line);

        lblAverage = new QLabel(layoutWidget);
        lblAverage->setObjectName(QString::fromUtf8("lblAverage"));
        lblAverage->setFont(font);

        lyOutput->addWidget(lblAverage);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        lblRemaining = new QLabel(layoutWidget);
        lblRemaining->setObjectName(QString::fromUtf8("lblRemaining"));
        lblRemaining->setFont(font);

        verticalLayout_3->addWidget(lblRemaining);


        lyOutput->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(lyOutput);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        lblAddPinchazo->setText(QApplication::translate("MainWindow", "Add Pinchazo ", 0, QApplication::UnicodeUTF8));
        lblDate->setText(QApplication::translate("MainWindow", "Fecha (dd/mm/yyyy):", 0, QApplication::UnicodeUTF8));
        lblErrorMsg->setText(QString());
        lblDescrpiption->setText(QApplication::translate("MainWindow", "Descripcion:", 0, QApplication::UnicodeUTF8));
        btnAdd->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
        lblAverage->setText(QApplication::translate("MainWindow", "Media:", 0, QApplication::UnicodeUTF8));
        lblRemaining->setText(QApplication::translate("MainWindow", "Faltan X d\303\255as", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
