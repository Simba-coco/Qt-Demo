/********************************************************************************
** Form generated from reading UI file 'inputmethod.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTMETHOD_H
#define UI_INPUTMETHOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InputMethod
{
public:
    QPushButton *pushButton_c;
    QPushButton *pushButton_hanzi_2;
    QPushButton *pushButton_hanzi_7;
    QPushButton *pushButton_k;
    QLineEdit *lineEdit_window;
    QPushButton *pushButton_splash;
    QPushButton *pushButton_d;
    QPushButton *pushButton_hanzi_6;
    QPushButton *pushButton_zuokuo;
    QPushButton *pushButton_shift;
    QPushButton *pushButton_n4;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_o;
    QPushButton *pushButton_g;
    QPushButton *pushButton_j;
    QPushButton *pushButton_r;
    QPushButton *pushButton_y;
    QPushButton *pushButton_n7;
    QPushButton *pushButton_hanzi_8;
    QPushButton *pushButton_n;
    QPushButton *pushButton_z;
    QPushButton *pushButton_n1;
    QPushButton *pushButton_i;
    QPushButton *pushButton_quote;
    QPushButton *pushButton_comma;
    QPushButton *pushButton_f;
    QPushButton *pushButton_right;
    QPushButton *pushButton_n8;
    QPushButton *pushButton_l;
    QPushButton *pushButton_left;
    QLineEdit *lineEdit_pinyin;
    QPushButton *pushButton_q;
    QPushButton *pushButton_s;
    QPushButton *pushButton_hanzi_left;
    QPushButton *pushButton_whitespace;
    QPushButton *pushButton_n5;
    QPushButton *pushButton_down;
    QPushButton *pushButton_n2;
    QPushButton *pushButton_up;
    QPushButton *pushButton_period;
    QPushButton *pushButton_deng;
    QPushButton *pushButton_gang;
    QPushButton *pushButton_youkuo;
    QPushButton *pushButton_enter;
    QPushButton *pushButton_n0;
    QPushButton *pushButton_n3;
    QPushButton *pushButton_backsplash;
    QPushButton *pushButton_w;
    QPushButton *pushButton_hanzi_1;
    QPushButton *pushButton_hanzi_right;
    QPushButton *pushButton_u;
    QPushButton *pushButton_x;
    QPushButton *pushButton_is_hanzi;
    QPushButton *pushButton_a;
    QPushButton *pushButton_e;
    QPushButton *pushButton_hanzi_5;
    QPushButton *pushButton_hanzi_4;
    QPushButton *pushButton_backspace;
    QPushButton *pushButton_semicolon;
    QPushButton *pushButton_p;
    QPushButton *pushButton_n6;
    QPushButton *pushButton_m;
    QPushButton *pushButton_h;
    QPushButton *pushButton_v;
    QPushButton *pushButton_b;
    QPushButton *pushButton_n9;
    QPushButton *pushButton_t;
    QPushButton *pushButton_hanzi_3;

    void setupUi(QDialog *InputMethod)
    {
        if (InputMethod->objectName().isEmpty())
            InputMethod->setObjectName(QStringLiteral("InputMethod"));
        InputMethod->resize(800, 480);
        InputMethod->setStyleSheet(QStringLiteral("background-color: rgb(140, 148, 191);"));
        pushButton_c = new QPushButton(InputMethod);
        pushButton_c->setObjectName(QStringLiteral("pushButton_c"));
        pushButton_c->setGeometry(QRect(205, 350, 45, 45));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        pushButton_c->setFont(font);
        pushButton_hanzi_2 = new QPushButton(InputMethod);
        pushButton_hanzi_2->setObjectName(QStringLiteral("pushButton_hanzi_2"));
        pushButton_hanzi_2->setGeometry(QRect(250, 120, 45, 35));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_hanzi_2->setFont(font1);
        pushButton_hanzi_7 = new QPushButton(InputMethod);
        pushButton_hanzi_7->setObjectName(QStringLiteral("pushButton_hanzi_7"));
        pushButton_hanzi_7->setGeometry(QRect(502, 120, 45, 35));
        pushButton_hanzi_7->setFont(font1);
        pushButton_k = new QPushButton(InputMethod);
        pushButton_k->setObjectName(QStringLiteral("pushButton_k"));
        pushButton_k->setGeometry(QRect(438, 290, 45, 45));
        pushButton_k->setFont(font);
        lineEdit_window = new QLineEdit(InputMethod);
        lineEdit_window->setObjectName(QStringLiteral("lineEdit_window"));
        lineEdit_window->setGeometry(QRect(5, 79, 631, 35));
        QFont font2;
        font2.setPointSize(26);
        font2.setBold(true);
        font2.setWeight(75);
        lineEdit_window->setFont(font2);
        lineEdit_window->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_window->setFrame(false);
        pushButton_splash = new QPushButton(InputMethod);
        pushButton_splash->setObjectName(QStringLiteral("pushButton_splash"));
        pushButton_splash->setGeometry(QRect(558, 350, 45, 45));
        pushButton_splash->setFont(font);
        pushButton_d = new QPushButton(InputMethod);
        pushButton_d->setObjectName(QStringLiteral("pushButton_d"));
        pushButton_d->setGeometry(QRect(186, 290, 45, 45));
        pushButton_d->setFont(font);
        pushButton_hanzi_6 = new QPushButton(InputMethod);
        pushButton_hanzi_6->setObjectName(QStringLiteral("pushButton_hanzi_6"));
        pushButton_hanzi_6->setGeometry(QRect(451, 120, 45, 35));
        pushButton_hanzi_6->setFont(font1);
        pushButton_zuokuo = new QPushButton(InputMethod);
        pushButton_zuokuo->setObjectName(QStringLiteral("pushButton_zuokuo"));
        pushButton_zuokuo->setGeometry(QRect(580, 230, 45, 45));
        pushButton_zuokuo->setFont(font);
        pushButton_shift = new QPushButton(InputMethod);
        pushButton_shift->setObjectName(QStringLiteral("pushButton_shift"));
        pushButton_shift->setGeometry(QRect(85, 409, 100, 45));
        pushButton_shift->setFont(font);
        pushButton_n4 = new QPushButton(InputMethod);
        pushButton_n4->setObjectName(QStringLiteral("pushButton_n4"));
        pushButton_n4->setGeometry(QRect(202, 171, 45, 45));
        pushButton_n4->setFont(font);
        pushButton_ok = new QPushButton(InputMethod);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(459, 410, 100, 45));
        QPalette palette;
        QBrush brush(QColor(140, 148, 191, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(0, 255, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush2(QColor(118, 116, 108, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_ok->setPalette(palette);
        QFont font3;
        font3.setPointSize(36);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton_ok->setFont(font3);
        pushButton_o = new QPushButton(InputMethod);
        pushButton_o->setObjectName(QStringLiteral("pushButton_o"));
        pushButton_o->setGeometry(QRect(480, 230, 45, 45));
        pushButton_o->setFont(font);
        pushButton_g = new QPushButton(InputMethod);
        pushButton_g->setObjectName(QStringLiteral("pushButton_g"));
        pushButton_g->setGeometry(QRect(287, 290, 45, 45));
        pushButton_g->setFont(font);
        pushButton_j = new QPushButton(InputMethod);
        pushButton_j->setObjectName(QStringLiteral("pushButton_j"));
        pushButton_j->setGeometry(QRect(388, 290, 45, 45));
        pushButton_j->setFont(font);
        pushButton_r = new QPushButton(InputMethod);
        pushButton_r->setObjectName(QStringLiteral("pushButton_r"));
        pushButton_r->setGeometry(QRect(228, 230, 45, 45));
        pushButton_r->setFont(font);
        pushButton_y = new QPushButton(InputMethod);
        pushButton_y->setObjectName(QStringLiteral("pushButton_y"));
        pushButton_y->setGeometry(QRect(328, 230, 45, 45));
        pushButton_y->setFont(font);
        pushButton_n7 = new QPushButton(InputMethod);
        pushButton_n7->setObjectName(QStringLiteral("pushButton_n7"));
        pushButton_n7->setGeometry(QRect(353, 171, 45, 45));
        pushButton_n7->setFont(font);
        pushButton_hanzi_8 = new QPushButton(InputMethod);
        pushButton_hanzi_8->setObjectName(QStringLiteral("pushButton_hanzi_8"));
        pushButton_hanzi_8->setGeometry(QRect(552, 120, 45, 35));
        pushButton_hanzi_8->setFont(font1);
        pushButton_n = new QPushButton(InputMethod);
        pushButton_n->setObjectName(QStringLiteral("pushButton_n"));
        pushButton_n->setGeometry(QRect(356, 350, 45, 45));
        pushButton_n->setFont(font);
        pushButton_z = new QPushButton(InputMethod);
        pushButton_z->setObjectName(QStringLiteral("pushButton_z"));
        pushButton_z->setGeometry(QRect(104, 350, 45, 45));
        pushButton_z->setFont(font);
        pushButton_n1 = new QPushButton(InputMethod);
        pushButton_n1->setObjectName(QStringLiteral("pushButton_n1"));
        pushButton_n1->setGeometry(QRect(50, 171, 45, 45));
        pushButton_n1->setFont(font);
        pushButton_n1->setFocusPolicy(Qt::StrongFocus);
        pushButton_i = new QPushButton(InputMethod);
        pushButton_i->setObjectName(QStringLiteral("pushButton_i"));
        pushButton_i->setGeometry(QRect(429, 230, 45, 45));
        pushButton_i->setFont(font);
        pushButton_quote = new QPushButton(InputMethod);
        pushButton_quote->setObjectName(QStringLiteral("pushButton_quote"));
        pushButton_quote->setGeometry(QRect(589, 290, 45, 45));
        pushButton_quote->setFont(font);
        pushButton_comma = new QPushButton(InputMethod);
        pushButton_comma->setObjectName(QStringLiteral("pushButton_comma"));
        pushButton_comma->setGeometry(QRect(457, 350, 45, 45));
        pushButton_comma->setFont(font);
        pushButton_f = new QPushButton(InputMethod);
        pushButton_f->setObjectName(QStringLiteral("pushButton_f"));
        pushButton_f->setGeometry(QRect(237, 290, 45, 45));
        pushButton_f->setFont(font);
        pushButton_right = new QPushButton(InputMethod);
        pushButton_right->setObjectName(QStringLiteral("pushButton_right"));
        pushButton_right->setGeometry(QRect(685, 409, 60, 45));
        pushButton_right->setFont(font);
        pushButton_n8 = new QPushButton(InputMethod);
        pushButton_n8->setObjectName(QStringLiteral("pushButton_n8"));
        pushButton_n8->setGeometry(QRect(403, 171, 45, 45));
        pushButton_n8->setFont(font);
        pushButton_l = new QPushButton(InputMethod);
        pushButton_l->setObjectName(QStringLiteral("pushButton_l"));
        pushButton_l->setGeometry(QRect(489, 290, 45, 45));
        pushButton_l->setFont(font);
        pushButton_left = new QPushButton(InputMethod);
        pushButton_left->setObjectName(QStringLiteral("pushButton_left"));
        pushButton_left->setGeometry(QRect(565, 409, 60, 45));
        pushButton_left->setFont(font);
        lineEdit_pinyin = new QLineEdit(InputMethod);
        lineEdit_pinyin->setObjectName(QStringLiteral("lineEdit_pinyin"));
        lineEdit_pinyin->setGeometry(QRect(630, 79, 163, 35));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(26);
        font4.setBold(true);
        font4.setWeight(75);
        lineEdit_pinyin->setFont(font4);
        lineEdit_pinyin->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_pinyin->setFrame(false);
        pushButton_q = new QPushButton(InputMethod);
        pushButton_q->setObjectName(QStringLiteral("pushButton_q"));
        pushButton_q->setGeometry(QRect(76, 230, 45, 45));
        pushButton_q->setFont(font);
        pushButton_s = new QPushButton(InputMethod);
        pushButton_s->setObjectName(QStringLiteral("pushButton_s"));
        pushButton_s->setGeometry(QRect(136, 290, 45, 45));
        pushButton_s->setFont(font);
        pushButton_hanzi_left = new QPushButton(InputMethod);
        pushButton_hanzi_left->setObjectName(QStringLiteral("pushButton_hanzi_left"));
        pushButton_hanzi_left->setGeometry(QRect(127, 120, 70, 35));
        pushButton_hanzi_left->setFont(font);
        pushButton_whitespace = new QPushButton(InputMethod);
        pushButton_whitespace->setObjectName(QStringLiteral("pushButton_whitespace"));
        pushButton_whitespace->setGeometry(QRect(192, 409, 210, 45));
        pushButton_whitespace->setFont(font);
        pushButton_n5 = new QPushButton(InputMethod);
        pushButton_n5->setObjectName(QStringLiteral("pushButton_n5"));
        pushButton_n5->setGeometry(QRect(252, 171, 45, 45));
        pushButton_n5->setFont(font);
        pushButton_down = new QPushButton(InputMethod);
        pushButton_down->setObjectName(QStringLiteral("pushButton_down"));
        pushButton_down->setGeometry(QRect(625, 409, 60, 45));
        pushButton_down->setFont(font);
        pushButton_n2 = new QPushButton(InputMethod);
        pushButton_n2->setObjectName(QStringLiteral("pushButton_n2"));
        pushButton_n2->setGeometry(QRect(101, 171, 45, 45));
        pushButton_n2->setFont(font);
        pushButton_n2->setFocusPolicy(Qt::StrongFocus);
        pushButton_up = new QPushButton(InputMethod);
        pushButton_up->setObjectName(QStringLiteral("pushButton_up"));
        pushButton_up->setGeometry(QRect(625, 364, 60, 45));
        pushButton_up->setFont(font);
        pushButton_period = new QPushButton(InputMethod);
        pushButton_period->setObjectName(QStringLiteral("pushButton_period"));
        pushButton_period->setGeometry(QRect(508, 350, 45, 45));
        pushButton_period->setFont(font);
        pushButton_deng = new QPushButton(InputMethod);
        pushButton_deng->setObjectName(QStringLiteral("pushButton_deng"));
        pushButton_deng->setGeometry(QRect(605, 171, 45, 45));
        pushButton_deng->setFont(font);
        pushButton_gang = new QPushButton(InputMethod);
        pushButton_gang->setObjectName(QStringLiteral("pushButton_gang"));
        pushButton_gang->setGeometry(QRect(554, 171, 45, 45));
        pushButton_gang->setFont(font);
        pushButton_youkuo = new QPushButton(InputMethod);
        pushButton_youkuo->setObjectName(QStringLiteral("pushButton_youkuo"));
        pushButton_youkuo->setGeometry(QRect(631, 230, 45, 45));
        pushButton_youkuo->setFont(font);
        pushButton_enter = new QPushButton(InputMethod);
        pushButton_enter->setObjectName(QStringLiteral("pushButton_enter"));
        pushButton_enter->setGeometry(QRect(638, 290, 100, 45));
        pushButton_enter->setFont(font);
        pushButton_n0 = new QPushButton(InputMethod);
        pushButton_n0->setObjectName(QStringLiteral("pushButton_n0"));
        pushButton_n0->setGeometry(QRect(504, 171, 45, 45));
        pushButton_n0->setFont(font);
        pushButton_n3 = new QPushButton(InputMethod);
        pushButton_n3->setObjectName(QStringLiteral("pushButton_n3"));
        pushButton_n3->setGeometry(QRect(151, 171, 45, 45));
        pushButton_n3->setFont(font);
        pushButton_backsplash = new QPushButton(InputMethod);
        pushButton_backsplash->setObjectName(QStringLiteral("pushButton_backsplash"));
        pushButton_backsplash->setGeometry(QRect(685, 230, 45, 45));
        pushButton_backsplash->setFont(font);
        pushButton_w = new QPushButton(InputMethod);
        pushButton_w->setObjectName(QStringLiteral("pushButton_w"));
        pushButton_w->setGeometry(QRect(127, 230, 45, 45));
        pushButton_w->setFont(font);
        pushButton_hanzi_1 = new QPushButton(InputMethod);
        pushButton_hanzi_1->setObjectName(QStringLiteral("pushButton_hanzi_1"));
        pushButton_hanzi_1->setGeometry(QRect(200, 120, 45, 35));
        pushButton_hanzi_1->setFont(font1);
        pushButton_hanzi_right = new QPushButton(InputMethod);
        pushButton_hanzi_right->setObjectName(QStringLiteral("pushButton_hanzi_right"));
        pushButton_hanzi_right->setGeometry(QRect(600, 120, 70, 35));
        pushButton_hanzi_right->setFont(font);
        pushButton_u = new QPushButton(InputMethod);
        pushButton_u->setObjectName(QStringLiteral("pushButton_u"));
        pushButton_u->setGeometry(QRect(379, 230, 45, 45));
        pushButton_u->setFont(font);
        pushButton_x = new QPushButton(InputMethod);
        pushButton_x->setObjectName(QStringLiteral("pushButton_x"));
        pushButton_x->setGeometry(QRect(155, 350, 45, 45));
        pushButton_x->setFont(font);
        pushButton_is_hanzi = new QPushButton(InputMethod);
        pushButton_is_hanzi->setObjectName(QStringLiteral("pushButton_is_hanzi"));
        pushButton_is_hanzi->setGeometry(QRect(408, 410, 45, 45));
        pushButton_is_hanzi->setFont(font1);
        pushButton_a = new QPushButton(InputMethod);
        pushButton_a->setObjectName(QStringLiteral("pushButton_a"));
        pushButton_a->setGeometry(QRect(85, 290, 45, 45));
        pushButton_a->setFont(font);
        pushButton_e = new QPushButton(InputMethod);
        pushButton_e->setObjectName(QStringLiteral("pushButton_e"));
        pushButton_e->setGeometry(QRect(177, 230, 45, 45));
        pushButton_e->setFont(font);
        pushButton_hanzi_5 = new QPushButton(InputMethod);
        pushButton_hanzi_5->setObjectName(QStringLiteral("pushButton_hanzi_5"));
        pushButton_hanzi_5->setGeometry(QRect(401, 120, 45, 35));
        pushButton_hanzi_5->setFont(font1);
        pushButton_hanzi_4 = new QPushButton(InputMethod);
        pushButton_hanzi_4->setObjectName(QStringLiteral("pushButton_hanzi_4"));
        pushButton_hanzi_4->setGeometry(QRect(351, 120, 45, 35));
        pushButton_hanzi_4->setFont(font1);
        pushButton_backspace = new QPushButton(InputMethod);
        pushButton_backspace->setObjectName(QStringLiteral("pushButton_backspace"));
        pushButton_backspace->setGeometry(QRect(655, 171, 80, 45));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setWeight(75);
        pushButton_backspace->setFont(font5);
        pushButton_semicolon = new QPushButton(InputMethod);
        pushButton_semicolon->setObjectName(QStringLiteral("pushButton_semicolon"));
        pushButton_semicolon->setGeometry(QRect(539, 290, 45, 45));
        pushButton_semicolon->setFont(font);
        pushButton_p = new QPushButton(InputMethod);
        pushButton_p->setObjectName(QStringLiteral("pushButton_p"));
        pushButton_p->setGeometry(QRect(530, 230, 45, 45));
        pushButton_p->setFont(font);
        pushButton_n6 = new QPushButton(InputMethod);
        pushButton_n6->setObjectName(QStringLiteral("pushButton_n6"));
        pushButton_n6->setGeometry(QRect(302, 171, 45, 45));
        pushButton_n6->setFont(font);
        pushButton_m = new QPushButton(InputMethod);
        pushButton_m->setObjectName(QStringLiteral("pushButton_m"));
        pushButton_m->setGeometry(QRect(407, 350, 45, 45));
        pushButton_m->setFont(font);
        pushButton_h = new QPushButton(InputMethod);
        pushButton_h->setObjectName(QStringLiteral("pushButton_h"));
        pushButton_h->setGeometry(QRect(337, 290, 45, 45));
        pushButton_h->setFont(font);
        pushButton_v = new QPushButton(InputMethod);
        pushButton_v->setObjectName(QStringLiteral("pushButton_v"));
        pushButton_v->setGeometry(QRect(256, 350, 45, 45));
        pushButton_v->setFont(font);
        pushButton_b = new QPushButton(InputMethod);
        pushButton_b->setObjectName(QStringLiteral("pushButton_b"));
        pushButton_b->setGeometry(QRect(306, 350, 45, 45));
        pushButton_b->setFont(font);
        pushButton_n9 = new QPushButton(InputMethod);
        pushButton_n9->setObjectName(QStringLiteral("pushButton_n9"));
        pushButton_n9->setGeometry(QRect(454, 171, 45, 45));
        pushButton_n9->setFont(font);
        pushButton_t = new QPushButton(InputMethod);
        pushButton_t->setObjectName(QStringLiteral("pushButton_t"));
        pushButton_t->setGeometry(QRect(278, 230, 45, 45));
        pushButton_t->setFont(font);
        pushButton_hanzi_3 = new QPushButton(InputMethod);
        pushButton_hanzi_3->setObjectName(QStringLiteral("pushButton_hanzi_3"));
        pushButton_hanzi_3->setGeometry(QRect(300, 120, 45, 35));
        pushButton_hanzi_3->setFont(font1);
        QWidget::setTabOrder(pushButton_hanzi_left, pushButton_hanzi_1);
        QWidget::setTabOrder(pushButton_hanzi_1, pushButton_hanzi_2);
        QWidget::setTabOrder(pushButton_hanzi_2, pushButton_hanzi_3);
        QWidget::setTabOrder(pushButton_hanzi_3, pushButton_hanzi_4);
        QWidget::setTabOrder(pushButton_hanzi_4, pushButton_hanzi_5);
        QWidget::setTabOrder(pushButton_hanzi_5, pushButton_hanzi_6);
        QWidget::setTabOrder(pushButton_hanzi_6, pushButton_hanzi_7);
        QWidget::setTabOrder(pushButton_hanzi_7, pushButton_hanzi_8);
        QWidget::setTabOrder(pushButton_hanzi_8, pushButton_hanzi_right);
        QWidget::setTabOrder(pushButton_hanzi_right, pushButton_n1);
        QWidget::setTabOrder(pushButton_n1, pushButton_n2);
        QWidget::setTabOrder(pushButton_n2, pushButton_n3);
        QWidget::setTabOrder(pushButton_n3, pushButton_n4);
        QWidget::setTabOrder(pushButton_n4, pushButton_n5);
        QWidget::setTabOrder(pushButton_n5, pushButton_n6);
        QWidget::setTabOrder(pushButton_n6, pushButton_n7);
        QWidget::setTabOrder(pushButton_n7, pushButton_n8);
        QWidget::setTabOrder(pushButton_n8, pushButton_n9);
        QWidget::setTabOrder(pushButton_n9, pushButton_n0);
        QWidget::setTabOrder(pushButton_n0, pushButton_gang);
        QWidget::setTabOrder(pushButton_gang, pushButton_deng);
        QWidget::setTabOrder(pushButton_deng, pushButton_backspace);
        QWidget::setTabOrder(pushButton_backspace, pushButton_q);
        QWidget::setTabOrder(pushButton_q, pushButton_w);
        QWidget::setTabOrder(pushButton_w, pushButton_e);
        QWidget::setTabOrder(pushButton_e, pushButton_r);
        QWidget::setTabOrder(pushButton_r, pushButton_t);
        QWidget::setTabOrder(pushButton_t, pushButton_y);
        QWidget::setTabOrder(pushButton_y, pushButton_u);
        QWidget::setTabOrder(pushButton_u, pushButton_i);
        QWidget::setTabOrder(pushButton_i, pushButton_o);
        QWidget::setTabOrder(pushButton_o, pushButton_p);
        QWidget::setTabOrder(pushButton_p, pushButton_zuokuo);
        QWidget::setTabOrder(pushButton_zuokuo, pushButton_youkuo);
        QWidget::setTabOrder(pushButton_youkuo, pushButton_backsplash);
        QWidget::setTabOrder(pushButton_backsplash, pushButton_a);
        QWidget::setTabOrder(pushButton_a, pushButton_s);
        QWidget::setTabOrder(pushButton_s, pushButton_d);
        QWidget::setTabOrder(pushButton_d, pushButton_f);
        QWidget::setTabOrder(pushButton_f, pushButton_g);
        QWidget::setTabOrder(pushButton_g, pushButton_h);
        QWidget::setTabOrder(pushButton_h, pushButton_j);
        QWidget::setTabOrder(pushButton_j, pushButton_k);
        QWidget::setTabOrder(pushButton_k, pushButton_l);
        QWidget::setTabOrder(pushButton_l, pushButton_semicolon);
        QWidget::setTabOrder(pushButton_semicolon, pushButton_quote);
        QWidget::setTabOrder(pushButton_quote, pushButton_enter);
        QWidget::setTabOrder(pushButton_enter, pushButton_z);
        QWidget::setTabOrder(pushButton_z, pushButton_x);
        QWidget::setTabOrder(pushButton_x, pushButton_c);
        QWidget::setTabOrder(pushButton_c, pushButton_v);
        QWidget::setTabOrder(pushButton_v, pushButton_b);
        QWidget::setTabOrder(pushButton_b, pushButton_n);
        QWidget::setTabOrder(pushButton_n, pushButton_m);
        QWidget::setTabOrder(pushButton_m, pushButton_comma);
        QWidget::setTabOrder(pushButton_comma, pushButton_period);
        QWidget::setTabOrder(pushButton_period, pushButton_splash);
        QWidget::setTabOrder(pushButton_splash, pushButton_shift);
        QWidget::setTabOrder(pushButton_shift, pushButton_whitespace);
        QWidget::setTabOrder(pushButton_whitespace, pushButton_is_hanzi);
        QWidget::setTabOrder(pushButton_is_hanzi, pushButton_ok);
        QWidget::setTabOrder(pushButton_ok, pushButton_left);
        QWidget::setTabOrder(pushButton_left, pushButton_down);
        QWidget::setTabOrder(pushButton_down, pushButton_right);
        QWidget::setTabOrder(pushButton_right, pushButton_up);
        QWidget::setTabOrder(pushButton_up, lineEdit_pinyin);
        QWidget::setTabOrder(lineEdit_pinyin, lineEdit_window);

        retranslateUi(InputMethod);

        QMetaObject::connectSlotsByName(InputMethod);
    } // setupUi

    void retranslateUi(QDialog *InputMethod)
    {
        InputMethod->setWindowTitle(QApplication::translate("InputMethod", "Dialog", Q_NULLPTR));
        pushButton_c->setText(QApplication::translate("InputMethod", "c", Q_NULLPTR));
        pushButton_hanzi_2->setText(QString());
        pushButton_hanzi_7->setText(QString());
        pushButton_k->setText(QApplication::translate("InputMethod", "k", Q_NULLPTR));
        lineEdit_window->setText(QString());
        pushButton_splash->setText(QApplication::translate("InputMethod", "/", Q_NULLPTR));
        pushButton_d->setText(QApplication::translate("InputMethod", "d", Q_NULLPTR));
        pushButton_hanzi_6->setText(QString());
        pushButton_zuokuo->setText(QApplication::translate("InputMethod", "[", Q_NULLPTR));
        pushButton_shift->setText(QApplication::translate("InputMethod", "shift", Q_NULLPTR));
        pushButton_n4->setText(QApplication::translate("InputMethod", "4", Q_NULLPTR));
        pushButton_ok->setText(QApplication::translate("InputMethod", "\342\210\232", Q_NULLPTR));
        pushButton_o->setText(QApplication::translate("InputMethod", "o", Q_NULLPTR));
        pushButton_g->setText(QApplication::translate("InputMethod", "g", Q_NULLPTR));
        pushButton_j->setText(QApplication::translate("InputMethod", "j", Q_NULLPTR));
        pushButton_r->setText(QApplication::translate("InputMethod", "r", Q_NULLPTR));
        pushButton_y->setText(QApplication::translate("InputMethod", "y", Q_NULLPTR));
        pushButton_n7->setText(QApplication::translate("InputMethod", "7", Q_NULLPTR));
        pushButton_hanzi_8->setText(QString());
        pushButton_n->setText(QApplication::translate("InputMethod", "n", Q_NULLPTR));
        pushButton_z->setText(QApplication::translate("InputMethod", "z", Q_NULLPTR));
        pushButton_n1->setText(QApplication::translate("InputMethod", "1", Q_NULLPTR));
        pushButton_i->setText(QApplication::translate("InputMethod", "i", Q_NULLPTR));
        pushButton_quote->setText(QApplication::translate("InputMethod", "'", Q_NULLPTR));
        pushButton_comma->setText(QApplication::translate("InputMethod", ",", Q_NULLPTR));
        pushButton_f->setText(QApplication::translate("InputMethod", "f", Q_NULLPTR));
        pushButton_right->setText(QApplication::translate("InputMethod", "\342\206\222", Q_NULLPTR));
        pushButton_n8->setText(QApplication::translate("InputMethod", "8", Q_NULLPTR));
        pushButton_l->setText(QApplication::translate("InputMethod", "l", Q_NULLPTR));
        pushButton_left->setText(QApplication::translate("InputMethod", "\342\206\220", Q_NULLPTR));
        lineEdit_pinyin->setText(QString());
        pushButton_q->setText(QApplication::translate("InputMethod", "q", Q_NULLPTR));
        pushButton_s->setText(QApplication::translate("InputMethod", "s", Q_NULLPTR));
        pushButton_hanzi_left->setText(QApplication::translate("InputMethod", "\342\206\220", Q_NULLPTR));
        pushButton_whitespace->setText(QApplication::translate("InputMethod", "whitespace", Q_NULLPTR));
        pushButton_n5->setText(QApplication::translate("InputMethod", "5", Q_NULLPTR));
        pushButton_down->setText(QApplication::translate("InputMethod", "\342\206\223", Q_NULLPTR));
        pushButton_n2->setText(QApplication::translate("InputMethod", "2", Q_NULLPTR));
        pushButton_up->setText(QApplication::translate("InputMethod", "\342\206\221", Q_NULLPTR));
        pushButton_period->setText(QApplication::translate("InputMethod", ".", Q_NULLPTR));
        pushButton_deng->setText(QApplication::translate("InputMethod", "=", Q_NULLPTR));
        pushButton_gang->setText(QApplication::translate("InputMethod", "-", Q_NULLPTR));
        pushButton_youkuo->setText(QApplication::translate("InputMethod", "]", Q_NULLPTR));
        pushButton_enter->setText(QApplication::translate("InputMethod", "enter", Q_NULLPTR));
        pushButton_n0->setText(QApplication::translate("InputMethod", "0", Q_NULLPTR));
        pushButton_n3->setText(QApplication::translate("InputMethod", "3", Q_NULLPTR));
        pushButton_backsplash->setText(QApplication::translate("InputMethod", "\\", Q_NULLPTR));
        pushButton_w->setText(QApplication::translate("InputMethod", "w", Q_NULLPTR));
        pushButton_hanzi_1->setText(QString());
        pushButton_hanzi_right->setText(QApplication::translate("InputMethod", "\342\206\222", Q_NULLPTR));
        pushButton_u->setText(QApplication::translate("InputMethod", "u", Q_NULLPTR));
        pushButton_x->setText(QApplication::translate("InputMethod", "x", Q_NULLPTR));
        pushButton_is_hanzi->setText(QApplication::translate("InputMethod", "Eng", Q_NULLPTR));
        pushButton_a->setText(QApplication::translate("InputMethod", "a", Q_NULLPTR));
        pushButton_e->setText(QApplication::translate("InputMethod", "e", Q_NULLPTR));
        pushButton_hanzi_5->setText(QString());
        pushButton_hanzi_4->setText(QString());
        pushButton_backspace->setText(QApplication::translate("InputMethod", "backspace", Q_NULLPTR));
        pushButton_semicolon->setText(QApplication::translate("InputMethod", ";", Q_NULLPTR));
        pushButton_p->setText(QApplication::translate("InputMethod", "p", Q_NULLPTR));
        pushButton_n6->setText(QApplication::translate("InputMethod", "6", Q_NULLPTR));
        pushButton_m->setText(QApplication::translate("InputMethod", "m", Q_NULLPTR));
        pushButton_h->setText(QApplication::translate("InputMethod", "h", Q_NULLPTR));
        pushButton_v->setText(QApplication::translate("InputMethod", "v", Q_NULLPTR));
        pushButton_b->setText(QApplication::translate("InputMethod", "b", Q_NULLPTR));
        pushButton_n9->setText(QApplication::translate("InputMethod", "9", Q_NULLPTR));
        pushButton_t->setText(QApplication::translate("InputMethod", "t", Q_NULLPTR));
        pushButton_hanzi_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InputMethod: public Ui_InputMethod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTMETHOD_H
