/********************************************************************************
** Form generated from reading UI file 'frminput.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMINPUT_H
#define UI_FRMINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmInput
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widgetTop;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labInfo;
    QLabel *labPY;
    QPushButton *btnPre;
    QPushButton *btnNext;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labCh0;
    QLabel *labCh1;
    QLabel *labCh2;
    QLabel *labCh3;
    QLabel *labCh4;
    QLabel *labCh5;
    QLabel *labCh6;
    QLabel *labCh7;
    QLabel *labCh8;
    QLabel *labCh9;
    QWidget *widgetMain;
    QPushButton *btnDeleteMin;
    QPushButton *btns;
    QPushButton *btnr;
    QPushButton *btnd;
    QPushButton *btn0;
    QPushButton *btn2;
    QPushButton *btnOther12;
    QPushButton *btnOther18;
    QPushButton *btnOther13;
    QPushButton *btnOther2;
    QPushButton *btn4;
    QPushButton *btnu;
    QPushButton *btnDelete;
    QPushButton *btne;
    QPushButton *btnOther17;
    QPushButton *btnOther7;
    QPushButton *btnOther6;
    QPushButton *btnv;
    QPushButton *btnOther3;
    QPushButton *btn6;
    QPushButton *btnOther9;
    QPushButton *btnz;
    QPushButton *btnOther4;
    QPushButton *btnp;
    QPushButton *btnt;
    QPushButton *btnOther19;
    QPushButton *btn8;
    QPushButton *btnn;
    QPushButton *btnOther5;
    QPushButton *btnh;
    QPushButton *btnOther10;
    QPushButton *btnOther8;
    QPushButton *btni;
    QPushButton *btnOther16;
    QPushButton *btna;
    QPushButton *btnType;
    QPushButton *btn9;
    QPushButton *btnOther11;
    QPushButton *btng;
    QPushButton *btnj;
    QPushButton *btnm;
    QPushButton *btnOther15;
    QPushButton *btnc;
    QPushButton *btnOther14;
    QPushButton *btn7;
    QPushButton *btno;
    QPushButton *btnf;
    QPushButton *btn5;
    QPushButton *btnx;
    QPushButton *btnk;
    QPushButton *btn3;
    QPushButton *btnl;
    QPushButton *btnq;
    QPushButton *btnw;
    QPushButton *btnOther1;
    QPushButton *btn1;
    QPushButton *btnb;
    QPushButton *btny;

    void setupUi(QWidget *frmInput)
    {
        if (frmInput->objectName().isEmpty())
            frmInput->setObjectName(QStringLiteral("frmInput"));
        frmInput->resize(550, 215);
        frmInput->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(frmInput);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widgetTop = new QWidget(frmInput);
        widgetTop->setObjectName(QStringLiteral("widgetTop"));
        verticalLayout = new QVBoxLayout(widgetTop);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 0, 5, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(9);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labInfo = new QLabel(widgetTop);
        labInfo->setObjectName(QStringLiteral("labInfo"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labInfo->sizePolicy().hasHeightForWidth());
        labInfo->setSizePolicy(sizePolicy);
        labInfo->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(labInfo);

        labPY = new QLabel(widgetTop);
        labPY->setObjectName(QStringLiteral("labPY"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labPY->sizePolicy().hasHeightForWidth());
        labPY->setSizePolicy(sizePolicy1);
        labPY->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(labPY);

        btnPre = new QPushButton(widgetTop);
        btnPre->setObjectName(QStringLiteral("btnPre"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnPre->sizePolicy().hasHeightForWidth());
        btnPre->setSizePolicy(sizePolicy2);
        btnPre->setMinimumSize(QSize(45, 25));
        btnPre->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnPre);

        btnNext = new QPushButton(widgetTop);
        btnNext->setObjectName(QStringLiteral("btnNext"));
        sizePolicy2.setHeightForWidth(btnNext->sizePolicy().hasHeightForWidth());
        btnNext->setSizePolicy(sizePolicy2);
        btnNext->setMinimumSize(QSize(45, 25));
        btnNext->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnNext);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labCh0 = new QLabel(widgetTop);
        labCh0->setObjectName(QStringLiteral("labCh0"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labCh0->sizePolicy().hasHeightForWidth());
        labCh0->setSizePolicy(sizePolicy3);
        labCh0->setMinimumSize(QSize(0, 25));
        labCh0->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labCh0);

        labCh1 = new QLabel(widgetTop);
        labCh1->setObjectName(QStringLiteral("labCh1"));
        sizePolicy3.setHeightForWidth(labCh1->sizePolicy().hasHeightForWidth());
        labCh1->setSizePolicy(sizePolicy3);
        labCh1->setMinimumSize(QSize(0, 25));
        labCh1->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labCh1);

        labCh2 = new QLabel(widgetTop);
        labCh2->setObjectName(QStringLiteral("labCh2"));
        sizePolicy3.setHeightForWidth(labCh2->sizePolicy().hasHeightForWidth());
        labCh2->setSizePolicy(sizePolicy3);
        labCh2->setMinimumSize(QSize(0, 25));
        labCh2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labCh2);

        labCh3 = new QLabel(widgetTop);
        labCh3->setObjectName(QStringLiteral("labCh3"));
        sizePolicy3.setHeightForWidth(labCh3->sizePolicy().hasHeightForWidth());
        labCh3->setSizePolicy(sizePolicy3);
        labCh3->setMinimumSize(QSize(0, 25));
        labCh3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labCh3);

        labCh4 = new QLabel(widgetTop);
        labCh4->setObjectName(QStringLiteral("labCh4"));
        sizePolicy3.setHeightForWidth(labCh4->sizePolicy().hasHeightForWidth());
        labCh4->setSizePolicy(sizePolicy3);
        labCh4->setMinimumSize(QSize(0, 25));
        labCh4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labCh4);

        labCh5 = new QLabel(widgetTop);
        labCh5->setObjectName(QStringLiteral("labCh5"));
        sizePolicy3.setHeightForWidth(labCh5->sizePolicy().hasHeightForWidth());
        labCh5->setSizePolicy(sizePolicy3);
        labCh5->setMinimumSize(QSize(0, 25));
        labCh5->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labCh5);

        labCh6 = new QLabel(widgetTop);
        labCh6->setObjectName(QStringLiteral("labCh6"));
        sizePolicy3.setHeightForWidth(labCh6->sizePolicy().hasHeightForWidth());
        labCh6->setSizePolicy(sizePolicy3);
        labCh6->setMinimumSize(QSize(0, 25));
        labCh6->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labCh6);

        labCh7 = new QLabel(widgetTop);
        labCh7->setObjectName(QStringLiteral("labCh7"));
        sizePolicy3.setHeightForWidth(labCh7->sizePolicy().hasHeightForWidth());
        labCh7->setSizePolicy(sizePolicy3);
        labCh7->setMinimumSize(QSize(0, 25));
        labCh7->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labCh7);

        labCh8 = new QLabel(widgetTop);
        labCh8->setObjectName(QStringLiteral("labCh8"));
        sizePolicy3.setHeightForWidth(labCh8->sizePolicy().hasHeightForWidth());
        labCh8->setSizePolicy(sizePolicy3);
        labCh8->setMinimumSize(QSize(0, 25));
        labCh8->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labCh8);

        labCh9 = new QLabel(widgetTop);
        labCh9->setObjectName(QStringLiteral("labCh9"));
        sizePolicy3.setHeightForWidth(labCh9->sizePolicy().hasHeightForWidth());
        labCh9->setSizePolicy(sizePolicy3);
        labCh9->setMinimumSize(QSize(0, 25));
        labCh9->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labCh9);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(widgetTop);

        widgetMain = new QWidget(frmInput);
        widgetMain->setObjectName(QStringLiteral("widgetMain"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(widgetMain->sizePolicy().hasHeightForWidth());
        widgetMain->setSizePolicy(sizePolicy4);
        widgetMain->setStyleSheet(QStringLiteral(""));
        btnDeleteMin = new QPushButton(widgetMain);
        btnDeleteMin->setObjectName(QStringLiteral("btnDeleteMin"));
        btnDeleteMin->setGeometry(QRect(492, 100, 31, 31));
        btnDeleteMin->setFocusPolicy(Qt::NoFocus);
        btns = new QPushButton(widgetMain);
        btns->setObjectName(QStringLiteral("btns"));
        btns->setGeometry(QRect(60, 69, 31, 31));
        btns->setFocusPolicy(Qt::NoFocus);
        btnr = new QPushButton(widgetMain);
        btnr->setObjectName(QStringLiteral("btnr"));
        btnr->setGeometry(QRect(112, 38, 31, 31));
        btnr->setFocusPolicy(Qt::NoFocus);
        btnd = new QPushButton(widgetMain);
        btnd->setObjectName(QStringLiteral("btnd"));
        btnd->setGeometry(QRect(91, 69, 31, 31));
        btnd->setFocusPolicy(Qt::NoFocus);
        btn0 = new QPushButton(widgetMain);
        btn0->setObjectName(QStringLiteral("btn0"));
        btn0->setGeometry(QRect(430, 100, 31, 31));
        btn0->setFocusPolicy(Qt::NoFocus);
        btn2 = new QPushButton(widgetMain);
        btn2->setObjectName(QStringLiteral("btn2"));
        btn2->setGeometry(QRect(461, 7, 31, 31));
        btn2->setFocusPolicy(Qt::NoFocus);
        btnOther12 = new QPushButton(widgetMain);
        btnOther12->setObjectName(QStringLiteral("btnOther12"));
        btnOther12->setGeometry(QRect(329, 38, 31, 31));
        btnOther12->setFocusPolicy(Qt::NoFocus);
        btnOther18 = new QPushButton(widgetMain);
        btnOther18->setObjectName(QStringLiteral("btnOther18"));
        btnOther18->setGeometry(QRect(289, 100, 31, 31));
        btnOther18->setFocusPolicy(Qt::NoFocus);
        btnOther13 = new QPushButton(widgetMain);
        btnOther13->setObjectName(QStringLiteral("btnOther13"));
        btnOther13->setGeometry(QRect(360, 38, 31, 31));
        btnOther13->setFocusPolicy(Qt::NoFocus);
        btnOther2 = new QPushButton(widgetMain);
        btnOther2->setObjectName(QStringLiteral("btnOther2"));
        btnOther2->setGeometry(QRect(40, 7, 31, 31));
        btnOther2->setFocusPolicy(Qt::NoFocus);
        btn4 = new QPushButton(widgetMain);
        btn4->setObjectName(QStringLiteral("btn4"));
        btn4->setGeometry(QRect(430, 38, 31, 31));
        btn4->setFocusPolicy(Qt::NoFocus);
        btnu = new QPushButton(widgetMain);
        btnu->setObjectName(QStringLiteral("btnu"));
        btnu->setGeometry(QRect(205, 38, 31, 31));
        btnu->setFocusPolicy(Qt::NoFocus);
        btnDelete = new QPushButton(widgetMain);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        btnDelete->setGeometry(QRect(350, 7, 61, 31));
        btnDelete->setFocusPolicy(Qt::NoFocus);
        btne = new QPushButton(widgetMain);
        btne->setObjectName(QStringLiteral("btne"));
        btne->setGeometry(QRect(81, 38, 31, 31));
        btne->setFocusPolicy(Qt::NoFocus);
        btnOther17 = new QPushButton(widgetMain);
        btnOther17->setObjectName(QStringLiteral("btnOther17"));
        btnOther17->setGeometry(QRect(258, 100, 31, 31));
        btnOther17->setFocusPolicy(Qt::NoFocus);
        btnOther7 = new QPushButton(widgetMain);
        btnOther7->setObjectName(QStringLiteral("btnOther7"));
        btnOther7->setGeometry(QRect(195, 7, 31, 31));
        btnOther7->setFocusPolicy(Qt::NoFocus);
        btnOther6 = new QPushButton(widgetMain);
        btnOther6->setObjectName(QStringLiteral("btnOther6"));
        btnOther6->setGeometry(QRect(164, 7, 31, 31));
        btnOther6->setFocusPolicy(Qt::NoFocus);
        btnv = new QPushButton(widgetMain);
        btnv->setObjectName(QStringLiteral("btnv"));
        btnv->setGeometry(QRect(134, 100, 31, 31));
        btnv->setFocusPolicy(Qt::NoFocus);
        btnOther3 = new QPushButton(widgetMain);
        btnOther3->setObjectName(QStringLiteral("btnOther3"));
        btnOther3->setGeometry(QRect(71, 7, 31, 31));
        btnOther3->setFocusPolicy(Qt::NoFocus);
        btn6 = new QPushButton(widgetMain);
        btn6->setObjectName(QStringLiteral("btn6"));
        btn6->setGeometry(QRect(492, 38, 31, 31));
        btn6->setFocusPolicy(Qt::NoFocus);
        btnOther9 = new QPushButton(widgetMain);
        btnOther9->setObjectName(QStringLiteral("btnOther9"));
        btnOther9->setGeometry(QRect(257, 7, 31, 31));
        btnOther9->setFocusPolicy(Qt::NoFocus);
        btnz = new QPushButton(widgetMain);
        btnz->setObjectName(QStringLiteral("btnz"));
        btnz->setGeometry(QRect(41, 100, 31, 31));
        btnz->setFocusPolicy(Qt::NoFocus);
        btnOther4 = new QPushButton(widgetMain);
        btnOther4->setObjectName(QStringLiteral("btnOther4"));
        btnOther4->setGeometry(QRect(102, 7, 31, 31));
        btnOther4->setFocusPolicy(Qt::NoFocus);
        btnp = new QPushButton(widgetMain);
        btnp->setObjectName(QStringLiteral("btnp"));
        btnp->setGeometry(QRect(298, 38, 31, 31));
        btnp->setFocusPolicy(Qt::NoFocus);
        btnt = new QPushButton(widgetMain);
        btnt->setObjectName(QStringLiteral("btnt"));
        btnt->setGeometry(QRect(143, 38, 31, 31));
        btnt->setFocusPolicy(Qt::NoFocus);
        btnOther19 = new QPushButton(widgetMain);
        btnOther19->setObjectName(QStringLiteral("btnOther19"));
        btnOther19->setGeometry(QRect(461, 100, 31, 31));
        btnOther19->setFocusPolicy(Qt::NoFocus);
        btn8 = new QPushButton(widgetMain);
        btn8->setObjectName(QStringLiteral("btn8"));
        btn8->setGeometry(QRect(461, 69, 31, 31));
        btn8->setFocusPolicy(Qt::NoFocus);
        btnn = new QPushButton(widgetMain);
        btnn->setObjectName(QStringLiteral("btnn"));
        btnn->setGeometry(QRect(196, 100, 31, 31));
        btnn->setFocusPolicy(Qt::NoFocus);
        btnOther5 = new QPushButton(widgetMain);
        btnOther5->setObjectName(QStringLiteral("btnOther5"));
        btnOther5->setGeometry(QRect(133, 7, 31, 31));
        btnOther5->setFocusPolicy(Qt::NoFocus);
        btnh = new QPushButton(widgetMain);
        btnh->setObjectName(QStringLiteral("btnh"));
        btnh->setGeometry(QRect(184, 69, 31, 31));
        btnh->setFocusPolicy(Qt::NoFocus);
        btnOther10 = new QPushButton(widgetMain);
        btnOther10->setObjectName(QStringLiteral("btnOther10"));
        btnOther10->setGeometry(QRect(288, 7, 31, 31));
        btnOther10->setFocusPolicy(Qt::NoFocus);
        btnOther8 = new QPushButton(widgetMain);
        btnOther8->setObjectName(QStringLiteral("btnOther8"));
        btnOther8->setGeometry(QRect(226, 7, 31, 31));
        btnOther8->setFocusPolicy(Qt::NoFocus);
        btni = new QPushButton(widgetMain);
        btni->setObjectName(QStringLiteral("btni"));
        btni->setGeometry(QRect(236, 38, 31, 31));
        btni->setFocusPolicy(Qt::NoFocus);
        btnOther16 = new QPushButton(widgetMain);
        btnOther16->setObjectName(QStringLiteral("btnOther16"));
        btnOther16->setGeometry(QRect(370, 69, 31, 31));
        btnOther16->setFocusPolicy(Qt::NoFocus);
        btna = new QPushButton(widgetMain);
        btna->setObjectName(QStringLiteral("btna"));
        btna->setGeometry(QRect(29, 69, 31, 31));
        btna->setFocusPolicy(Qt::NoFocus);
        btnType = new QPushButton(widgetMain);
        btnType->setObjectName(QStringLiteral("btnType"));
        btnType->setGeometry(QRect(320, 100, 81, 31));
        btnType->setFocusPolicy(Qt::NoFocus);
        btn9 = new QPushButton(widgetMain);
        btn9->setObjectName(QStringLiteral("btn9"));
        btn9->setGeometry(QRect(492, 69, 31, 31));
        btn9->setFocusPolicy(Qt::NoFocus);
        btnOther11 = new QPushButton(widgetMain);
        btnOther11->setObjectName(QStringLiteral("btnOther11"));
        btnOther11->setGeometry(QRect(319, 7, 31, 31));
        btnOther11->setFocusPolicy(Qt::NoFocus);
        btng = new QPushButton(widgetMain);
        btng->setObjectName(QStringLiteral("btng"));
        btng->setGeometry(QRect(153, 69, 31, 31));
        btng->setFocusPolicy(Qt::NoFocus);
        btnj = new QPushButton(widgetMain);
        btnj->setObjectName(QStringLiteral("btnj"));
        btnj->setGeometry(QRect(215, 69, 31, 31));
        btnj->setFocusPolicy(Qt::NoFocus);
        btnm = new QPushButton(widgetMain);
        btnm->setObjectName(QStringLiteral("btnm"));
        btnm->setGeometry(QRect(227, 100, 31, 31));
        btnm->setFocusPolicy(Qt::NoFocus);
        btnOther15 = new QPushButton(widgetMain);
        btnOther15->setObjectName(QStringLiteral("btnOther15"));
        btnOther15->setGeometry(QRect(339, 69, 31, 31));
        btnOther15->setFocusPolicy(Qt::NoFocus);
        btnc = new QPushButton(widgetMain);
        btnc->setObjectName(QStringLiteral("btnc"));
        btnc->setGeometry(QRect(103, 100, 31, 31));
        btnc->setFocusPolicy(Qt::NoFocus);
        btnOther14 = new QPushButton(widgetMain);
        btnOther14->setObjectName(QStringLiteral("btnOther14"));
        btnOther14->setGeometry(QRect(308, 69, 31, 31));
        btnOther14->setFocusPolicy(Qt::NoFocus);
        btn7 = new QPushButton(widgetMain);
        btn7->setObjectName(QStringLiteral("btn7"));
        btn7->setGeometry(QRect(430, 69, 31, 31));
        btn7->setFocusPolicy(Qt::NoFocus);
        btno = new QPushButton(widgetMain);
        btno->setObjectName(QStringLiteral("btno"));
        btno->setGeometry(QRect(267, 38, 31, 31));
        btno->setFocusPolicy(Qt::NoFocus);
        btnf = new QPushButton(widgetMain);
        btnf->setObjectName(QStringLiteral("btnf"));
        btnf->setGeometry(QRect(122, 69, 31, 31));
        btnf->setFocusPolicy(Qt::NoFocus);
        btn5 = new QPushButton(widgetMain);
        btn5->setObjectName(QStringLiteral("btn5"));
        btn5->setGeometry(QRect(461, 38, 31, 31));
        btn5->setFocusPolicy(Qt::NoFocus);
        btnx = new QPushButton(widgetMain);
        btnx->setObjectName(QStringLiteral("btnx"));
        btnx->setGeometry(QRect(72, 100, 31, 31));
        btnx->setFocusPolicy(Qt::NoFocus);
        btnk = new QPushButton(widgetMain);
        btnk->setObjectName(QStringLiteral("btnk"));
        btnk->setGeometry(QRect(246, 69, 31, 31));
        btnk->setFocusPolicy(Qt::NoFocus);
        btn3 = new QPushButton(widgetMain);
        btn3->setObjectName(QStringLiteral("btn3"));
        btn3->setGeometry(QRect(492, 7, 31, 31));
        btn3->setFocusPolicy(Qt::NoFocus);
        btnl = new QPushButton(widgetMain);
        btnl->setObjectName(QStringLiteral("btnl"));
        btnl->setGeometry(QRect(277, 69, 31, 31));
        btnl->setFocusPolicy(Qt::NoFocus);
        btnq = new QPushButton(widgetMain);
        btnq->setObjectName(QStringLiteral("btnq"));
        btnq->setGeometry(QRect(19, 38, 31, 31));
        btnq->setFocusPolicy(Qt::NoFocus);
        btnw = new QPushButton(widgetMain);
        btnw->setObjectName(QStringLiteral("btnw"));
        btnw->setGeometry(QRect(50, 38, 31, 31));
        btnw->setFocusPolicy(Qt::NoFocus);
        btnOther1 = new QPushButton(widgetMain);
        btnOther1->setObjectName(QStringLiteral("btnOther1"));
        btnOther1->setGeometry(QRect(9, 7, 31, 31));
        btnOther1->setFocusPolicy(Qt::NoFocus);
        btn1 = new QPushButton(widgetMain);
        btn1->setObjectName(QStringLiteral("btn1"));
        btn1->setGeometry(QRect(430, 7, 31, 31));
        btn1->setFocusPolicy(Qt::NoFocus);
        btnb = new QPushButton(widgetMain);
        btnb->setObjectName(QStringLiteral("btnb"));
        btnb->setGeometry(QRect(165, 100, 31, 31));
        btnb->setFocusPolicy(Qt::NoFocus);
        btny = new QPushButton(widgetMain);
        btny->setObjectName(QStringLiteral("btny"));
        btny->setGeometry(QRect(174, 38, 31, 31));
        btny->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(widgetMain);


        retranslateUi(frmInput);

        QMetaObject::connectSlotsByName(frmInput);
    } // setupUi

    void retranslateUi(QWidget *frmInput)
    {
        frmInput->setWindowTitle(QApplication::translate("frmInput", "\350\276\223\345\205\245\346\263\225", Q_NULLPTR));
        labInfo->setText(QApplication::translate("frmInput", "\344\270\255\346\226\207\350\276\223\345\205\245\346\263\225", Q_NULLPTR));
        labPY->setText(QApplication::translate("frmInput", "zhongwen", Q_NULLPTR));
        btnPre->setText(QString());
        btnNext->setText(QString());
        labCh0->setText(QString());
        labCh1->setText(QString());
        labCh2->setText(QString());
        labCh3->setText(QString());
        labCh4->setText(QString());
        labCh5->setText(QString());
        labCh6->setText(QString());
        labCh7->setText(QString());
        labCh8->setText(QString());
        labCh9->setText(QString());
        btnDeleteMin->setText(QApplication::translate("frmInput", "\342\206\220", Q_NULLPTR));
        btns->setText(QApplication::translate("frmInput", "s", Q_NULLPTR));
        btnr->setText(QApplication::translate("frmInput", "r", Q_NULLPTR));
        btnd->setText(QApplication::translate("frmInput", "d", Q_NULLPTR));
        btn0->setText(QApplication::translate("frmInput", "0", Q_NULLPTR));
        btn2->setText(QApplication::translate("frmInput", "2", Q_NULLPTR));
        btnOther12->setText(QApplication::translate("frmInput", "/", Q_NULLPTR));
        btnOther18->setText(QApplication::translate("frmInput", "\\", Q_NULLPTR));
        btnOther13->setText(QApplication::translate("frmInput", "|", Q_NULLPTR));
        btnOther2->setText(QApplication::translate("frmInput", "@", Q_NULLPTR));
        btn4->setText(QApplication::translate("frmInput", "4", Q_NULLPTR));
        btnu->setText(QApplication::translate("frmInput", "u", Q_NULLPTR));
        btnDelete->setText(QApplication::translate("frmInput", "\342\206\220", Q_NULLPTR));
        btne->setText(QApplication::translate("frmInput", "e", Q_NULLPTR));
        btnOther17->setText(QApplication::translate("frmInput", ",", Q_NULLPTR));
        btnOther7->setText(QApplication::translate("frmInput", "&&", Q_NULLPTR));
        btnOther6->setText(QApplication::translate("frmInput", "^", Q_NULLPTR));
        btnv->setText(QApplication::translate("frmInput", "v", Q_NULLPTR));
        btnOther3->setText(QApplication::translate("frmInput", "#", Q_NULLPTR));
        btn6->setText(QApplication::translate("frmInput", "6", Q_NULLPTR));
        btnOther9->setText(QApplication::translate("frmInput", "-", Q_NULLPTR));
        btnz->setText(QApplication::translate("frmInput", "z", Q_NULLPTR));
        btnOther4->setText(QApplication::translate("frmInput", "$", Q_NULLPTR));
        btnp->setText(QApplication::translate("frmInput", "p", Q_NULLPTR));
        btnt->setText(QApplication::translate("frmInput", "t", Q_NULLPTR));
        btnOther19->setText(QApplication::translate("frmInput", ".", Q_NULLPTR));
        btn8->setText(QApplication::translate("frmInput", "8", Q_NULLPTR));
        btnn->setText(QApplication::translate("frmInput", "n", Q_NULLPTR));
        btnOther5->setText(QApplication::translate("frmInput", "%", Q_NULLPTR));
        btnh->setText(QApplication::translate("frmInput", "h", Q_NULLPTR));
        btnOther10->setText(QApplication::translate("frmInput", "_", Q_NULLPTR));
        btnOther8->setText(QApplication::translate("frmInput", "*", Q_NULLPTR));
        btni->setText(QApplication::translate("frmInput", "i", Q_NULLPTR));
        btnOther16->setText(QApplication::translate("frmInput", "=", Q_NULLPTR));
        btna->setText(QApplication::translate("frmInput", "a", Q_NULLPTR));
        btnType->setText(QApplication::translate("frmInput", "\345\260\217\345\206\231", Q_NULLPTR));
        btn9->setText(QApplication::translate("frmInput", "9", Q_NULLPTR));
        btnOther11->setText(QApplication::translate("frmInput", "+", Q_NULLPTR));
        btng->setText(QApplication::translate("frmInput", "g", Q_NULLPTR));
        btnj->setText(QApplication::translate("frmInput", "j", Q_NULLPTR));
        btnm->setText(QApplication::translate("frmInput", "m", Q_NULLPTR));
        btnOther15->setText(QApplication::translate("frmInput", "?", Q_NULLPTR));
        btnc->setText(QApplication::translate("frmInput", "c", Q_NULLPTR));
        btnOther14->setText(QApplication::translate("frmInput", ":", Q_NULLPTR));
        btn7->setText(QApplication::translate("frmInput", "7", Q_NULLPTR));
        btno->setText(QApplication::translate("frmInput", "o", Q_NULLPTR));
        btnf->setText(QApplication::translate("frmInput", "f", Q_NULLPTR));
        btn5->setText(QApplication::translate("frmInput", "5", Q_NULLPTR));
        btnx->setText(QApplication::translate("frmInput", "x", Q_NULLPTR));
        btnk->setText(QApplication::translate("frmInput", "k", Q_NULLPTR));
        btn3->setText(QApplication::translate("frmInput", "3", Q_NULLPTR));
        btnl->setText(QApplication::translate("frmInput", "l", Q_NULLPTR));
        btnq->setText(QApplication::translate("frmInput", "q", Q_NULLPTR));
        btnw->setText(QApplication::translate("frmInput", "w", Q_NULLPTR));
        btnOther1->setText(QApplication::translate("frmInput", "!", Q_NULLPTR));
        btn1->setText(QApplication::translate("frmInput", "1", Q_NULLPTR));
        btnb->setText(QApplication::translate("frmInput", "b", Q_NULLPTR));
        btny->setText(QApplication::translate("frmInput", "y", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class frmInput: public Ui_frmInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMINPUT_H
