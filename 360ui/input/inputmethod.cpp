#include "inputmethod.h"
#include "ui_inputmethod.h"

#include <QDebug>
#include <QKeyEvent>

QString syszux_lower_letter[52]={"1","2","3","4","5","6","7","8","9","0","-","=","backspace","q","w","e","r","t","y","u","i",
                                 "o","p","[","]","\\","a","s","d","f","g","h","j","k","l",";","\'","enter","z","x","c","v",
                                 "b","n","m",",",".","/","shift"," "};
QString syszux_upper_letter[52]={"!","@","#","$","%","^","&&","*","(",")","_","+","backspace","Q","W","E","R","T","Y","U","I",
                                 "O","P","{","}","|","A","S","D","F","G","H","J","K","L",":","\"","enter","Z","X","C","V",
                                 "B","N","M","<",">","?","SHIFT"," "};

InputMethod::InputMethod(QWidget *parent) :button_group(new QButtonGroup(this)),input_method(0),lower_upper(0),page_count(0),
    QDialog(parent),
    ui(new Ui::InputMethod)
{
    ui->setupUi(this);
    int ret=0;
    resize(800,480);
    initGb();
    this->setStyleSheet("background-color: rgb(140, 148, 191);background-image: url()");
    pinyin_file.setFileName(":/input/input/pinyin/pinyin");
    if( !pinyin_file.open(QIODevice::ReadOnly) )
        qDebug()<<"syszuxpinyin can't load";
    //   QMessageBox::warning(0,tr("syszuxpinyin"),tr("can't load"));

    regExp.setCaseSensitivity(Qt::CaseSensitive);
    regExp.setPattern(QString("([a-z]+)"));

    while(!pinyin_file.atEnd())
    {
        QByteArray data = pinyin_file.readLine();
        ret = regExp.indexIn(QString(data.data()),0,QRegExp::CaretAtZero);
        QString zhongwen =  QString::fromUtf8(data);//******
        pinyin_map.insert(regExp.cap(1),zhongwen.left(ret));
    }

    connect(this,SIGNAL(sendPinyin(QString)),parent,SLOT(confirmString(QString)));
}

InputMethod::~InputMethod()
{
    delete ui;
}

void InputMethod::initGb()
{
    QPushButton *pushButton = ui->pushButton_hanzi_left;
    button_group = new QButtonGroup;
    for(int i=1;i<65;i++)
    {
        button_vector.push_back(pushButton);
        button_group->addButton(pushButton,i);
        pushButton=qobject_cast<QPushButton *>(pushButton->nextInFocusChain());
    }
    connect(button_group,SIGNAL(buttonClicked(int)),SLOT(buttonClickResponse(int)));
}
void InputMethod::buttonClickResponse(int gemfield)
{
    if(gemfield==1)
    {
        selectHanziPre();
        return;
    }
    else if(gemfield==10)
    {
        selectHanziNext();
        return;
    }
    else if(gemfield<10)
    {
        ui->lineEdit_window->insert(button_vector.at(gemfield-1)->text());
        ui->lineEdit_pinyin->clear();
        clearString();
        return;
    }
    else if(gemfield==23)
    {
        deleteString();
        return;
    }
    else if(gemfield==59)
    {
        changeLowerUpper();
        return;
    }

    else if(gemfield>10 && gemfield<=60)
    {
        if(lower_upper)
            event=new QKeyEvent(QEvent::KeyPress, 0, Qt::NoModifier,syszux_upper_letter[gemfield-11]);
        else
            event=new QKeyEvent(QEvent::KeyPress, 0, Qt::NoModifier,syszux_lower_letter[gemfield-11]);
    }
    else if(gemfield==61)
    {
        changeInputMethod();
        return;
    }
    else if(gemfield==62)
    {
        affirmString();
        return;
    }
    else if(gemfield>62)
    {
        switch(gemfield)
        {
        case 63:
            event=new QKeyEvent(QEvent::KeyPress, Qt::Key_Left, Qt::NoModifier);
            break;
        case 64:
            event=new QKeyEvent(QEvent::KeyPress, Qt::Key_Down, Qt::NoModifier);
            break;
        case 65:
            event=new QKeyEvent(QEvent::KeyPress, Qt::Key_Right, Qt::NoModifier);
            break;
        case 66:
            event=new QKeyEvent(QEvent::KeyPress, Qt::Key_Up, Qt::NoModifier);
            break;
        }
    }
    if(input_method)
    {
        ui->lineEdit_pinyin->setFocus();
        QApplication::sendEvent(focusWidget(),event);
        matching(ui->lineEdit_pinyin->text());
    }
    else
    {
        ui->lineEdit_window->setFocus();
        QApplication::sendEvent(focusWidget(),event);
    }
}
void InputMethod::matching(QString gemfield)
{
    pinyin_list = pinyin_map.values(gemfield);
    changePage(0);
    page_count=0;
}

void InputMethod::changePage(int index)
{
    int count = pinyin_list.size();
    int i=index*8,j=0;
    while(++j != 9 )
        //button_vector.at(j)->setText(tr(pinyin_list.value(count-(++i)).toLatin1()));
        button_vector.at(j)->setText(pinyin_list.value(count-(++i)));
    if(index==0)
        ui->pushButton_hanzi_left->setEnabled(false);
    else
        ui->pushButton_hanzi_left->setEnabled(true);
    if(pinyin_list.size()>(index*8+8))
        ui->pushButton_hanzi_right->setEnabled(true);
    else
        ui->pushButton_hanzi_right->setEnabled(false);
}

void InputMethod::selectHanziPre()
{
    changePage(--page_count);
}

void InputMethod::selectHanziNext()
{
    changePage(++page_count);
}
void InputMethod::clearString()
{
    int i=0;
    while(++i!=9)
        button_vector.at(i)->setText("");
}
void InputMethod::changeInputMethod()
{
    if(ui->pushButton_shift->text()=="SHIFT")
        return;
    ui->lineEdit_pinyin->clear();
    if(ui->pushButton_is_hanzi->text()=="Eng")
        input_method=1,ui->pushButton_is_hanzi->setText("CH");
    else
        input_method=0,ui->pushButton_is_hanzi->setText("Eng");
}
void InputMethod::changeLowerUpper()
{
    if(ui->pushButton_shift->text()=="shift")
    {
        lower_upper=1,ui->pushButton_shift->setText("SHIFT");
        input_method=0,ui->pushButton_is_hanzi->setText("Eng");
        int i=9;
        while(++i!=59)
            button_vector.at(i)->setText(syszux_upper_letter[i-10]);
    }
    else
    {
        lower_upper=0,ui->pushButton_shift->setText("shift");
        int i=9;
        while(++i!=59)
            button_vector.at(i)->setText(syszux_lower_letter[i-10]);
    }
}
void InputMethod::deleteString()
{
    event=new QKeyEvent(QEvent::KeyPress, Qt::Key_Backspace, Qt::NoModifier);
    if(input_method)
    {
        ui->lineEdit_pinyin->text().isEmpty()?ui->lineEdit_window->setFocus():ui->lineEdit_pinyin->setFocus();
        QApplication::sendEvent(focusWidget(),event);
        matching(ui->lineEdit_pinyin->text());
    }
    else
    {
        ui->lineEdit_window->setFocus();
        QApplication::sendEvent(focusWidget(),event);
    }
}

void InputMethod::setcurrentString(QString currentstr)
{
    ui->lineEdit_window->setText(currentstr);
}

void InputMethod::affirmString()
{
    emit sendPinyin(ui->lineEdit_window->text());
    qDebug()<<ui->lineEdit_window->text();
    this->hide();
}




