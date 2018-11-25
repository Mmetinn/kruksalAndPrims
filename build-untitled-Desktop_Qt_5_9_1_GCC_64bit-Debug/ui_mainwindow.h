/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *nodeEkle;
    QPushButton *kruksal;
    QLineEdit *kacNode;
    QPushButton *prims;
    QPushButton *ekrani_temizle;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(661, 392);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        nodeEkle = new QPushButton(centralWidget);
        nodeEkle->setObjectName(QStringLiteral("nodeEkle"));
        nodeEkle->setGeometry(QRect(10, 0, 81, 31));
        kruksal = new QPushButton(centralWidget);
        kruksal->setObjectName(QStringLiteral("kruksal"));
        kruksal->setGeometry(QRect(100, 0, 71, 31));
        kacNode = new QLineEdit(centralWidget);
        kacNode->setObjectName(QStringLiteral("kacNode"));
        kacNode->setGeometry(QRect(10, 40, 113, 22));
        prims = new QPushButton(centralWidget);
        prims->setObjectName(QStringLiteral("prims"));
        prims->setGeometry(QRect(180, 0, 51, 31));
        ekrani_temizle = new QPushButton(centralWidget);
        ekrani_temizle->setObjectName(QStringLiteral("ekrani_temizle"));
        ekrani_temizle->setGeometry(QRect(240, 0, 111, 31));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(410, 0, 251, 341));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 40, 61, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 661, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        nodeEkle->setText(QApplication::translate("MainWindow", "NODE EKLE", Q_NULLPTR));
        kruksal->setText(QApplication::translate("MainWindow", "KRUKSAL", Q_NULLPTR));
        prims->setText(QApplication::translate("MainWindow", "PR\304\260MS", Q_NULLPTR));
        ekrani_temizle->setText(QApplication::translate("MainWindow", "EKRANI TEM\304\260ZLE", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">ALGOR\304\260TMALAR:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Node Ekle </span>butonu ile ekrana node eklenmektedir.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0p"
                        "x; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Ekran\304\261 Temizle</span> butonu ile de uygulma yeniden ba\305\237lat\304\261larak ekran\304\261n temizlenmesini sa\304\237lamaktad\304\261r.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Line edit</span> ile de uygun formatta girilen nodelar aras\304\261nda \303\247izgi ile ba\304\237lant\304\261 sa\304\237lanmaktad\304\261r.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin"
                        "-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Kruksal </span>butonu ile olu\305\237turulan graf\304\261n kruksal algoritmas\304\261 ile en k\304\261sa yolun hesaplanmas\304\261 sa\304\237lanmaktad\304\261r ve ekrana \303\266nceki ve sonraki a\304\237\304\261rl\304\261klar yaz\304\261lmaktad\304\261r.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Prims</span> butonu ile de olu\305\237turulan graf\304\261n prims algoritmas\304\261 ile en k\304\261sa yollar hesaplanmakta ve ekrana \303\266nceki ve sonraki a\304\237\304\261rl\304\261k yaz\304\261lmaktad\304\261r.</p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "BA\304\236LA", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
