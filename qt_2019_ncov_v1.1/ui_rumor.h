/********************************************************************************
** Form generated from reading UI file 'rumor.ui'
**
** Created: Mon Feb 17 16:09:24 2020
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUMOR_H
#define UI_RUMOR_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QDialog>
#include <QHeaderView>
#include <QTextBrowser>
#include <QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_rumor
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *tb_rumor;

    void setupUi(QDialog *rumor)
    {
        if (rumor->objectName().isEmpty())
            rumor->setObjectName(QString::fromUtf8("rumor"));
        rumor->resize(664, 433);
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        rumor->setFont(font);
        verticalLayout = new QVBoxLayout(rumor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tb_rumor = new QTextBrowser(rumor);
        tb_rumor->setObjectName(QString::fromUtf8("tb_rumor"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        tb_rumor->setFont(font1);

        verticalLayout->addWidget(tb_rumor);


        retranslateUi(rumor);

        QMetaObject::connectSlotsByName(rumor);
    } // setupUi

    void retranslateUi(QDialog *rumor)
    {
        rumor->setWindowTitle(QApplication::translate("rumor", "Dialog", 0));
        tb_rumor->setHtml(QApplication::translate("rumor", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class rumor: public Ui_rumor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUMOR_H
