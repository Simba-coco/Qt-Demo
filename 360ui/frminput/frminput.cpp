﻿#include "frminput.h"
#include "ui_frminput.h"
//#include "myhelper.h"
//#include "iconhelper.h"
//#include "app.h"
#include <QMouseEvent>

frmInput *frmInput::_instance = 0;
frmInput::frmInput(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frmInput)
{
    ui->setupUi(this);
    this->InitStyle();
    this->InitProperty();
    this->InitForm();
//    myHelper::FormInCenter(this);
}

frmInput::~frmInput()
{
    delete ui;
}

void frmInput::mouseMoveEvent(QMouseEvent *e)
{
    if (mousePressed && (e->buttons() && Qt::LeftButton)) {
        this->move(e->globalPos() - mousePoint);
        e->accept();
    }
}

void frmInput::mousePressEvent(QMouseEvent *e)
{
    if (e->button() == Qt::LeftButton) {
        mousePressed = true;
        mousePoint = e->globalPos() - this->pos();
        e->accept();
    }
}

void frmInput::mouseReleaseEvent(QMouseEvent *)
{
    mousePressed = false;
}

void frmInput::InitStyle()
{
    this->setProperty("Form", true);
    this->mousePressed = false;
    this->setWindowFlags(Qt::Tool | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint);
//    IconHelper::Instance()->SetIcon(ui->btnPre, QChar(0xf060));
//    IconHelper::Instance()->SetIcon(ui->btnNext, QChar(0xf061));

    QStringList qss;
    qss.append(".QPushButton{padding:3px;}");
    qss.append(".QPushButton:hover{border:1px solid #FFFF00;}");
    qss.append(".QLabel,.QPushButton{border-width:0px;");
    qss.append("background-color:rgba(0,0,0,0);}");
    this->setStyleSheet(qss.join(""));

    qss.clear();
    qss.append(QString(".QPushButton{font: 75 13pt \"%1\";}").arg(App::AppFontName));
    ui->widgetMain->setStyleSheet(qss.join(""));
}

void frmInput::InitForm()
{
    menuStyle = new QMenu(this);
    menuStyle->addAction("淡蓝色", this, SLOT(change_style()));
    menuStyle->addAction("蓝色", this, SLOT(change_style()));
    menuStyle->addAction("灰色", this, SLOT(change_style()));
    menuStyle->addAction("黑色", this, SLOT(change_style()));
    menuStyle->addAction("灰黑色", this, SLOT(change_style()));
    menuStyle->addAction("白色", this, SLOT(change_style()));
    menuStyle->addAction("银色", this, SLOT(change_style()));

    QSqlDatabase DbConn;
    DbConn = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = QString("%1/%2.db").arg(App::AppPath).arg(App::PYType);
    DbConn.setDatabaseName(dbName);
    //创建数据库连接并打开(如果数据库打开失败则终止应用程序)
    if (!DbConn.open()) {
        myHelper::ShowMessageBoxError("打开汉字数据库失败,程序将自动关闭!");
        exit(0);
    }

    currentType = "min";
    currentLineEdit = 0;
    changeType("min");

    QList<QPushButton *> btn = this->findChildren<QPushButton *>();
    foreach (QPushButton * b, btn) {
        connect(b, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    }

    //绑定全局改变焦点信号槽
    connect(qApp, SIGNAL(focusChanged(QWidget *, QWidget *)),
            this, SLOT(focusChanged(QWidget *, QWidget *)));
    //绑定按键事件过滤器
    qApp->installEventFilter(this);
}

void frmInput::InitProperty()
{
    ui->btnOther1->setProperty("btnOther", true);
    ui->btnOther2->setProperty("btnOther", true);
    ui->btnOther3->setProperty("btnOther", true);
    ui->btnOther4->setProperty("btnOther", true);
    ui->btnOther5->setProperty("btnOther", true);
    ui->btnOther6->setProperty("btnOther", true);
    ui->btnOther7->setProperty("btnOther", true);
    ui->btnOther8->setProperty("btnOther", true);
    ui->btnOther9->setProperty("btnOther", true);
    ui->btnOther10->setProperty("btnOther", true);
    ui->btnOther11->setProperty("btnOther", true);
    ui->btnOther12->setProperty("btnOther", true);
    ui->btnOther13->setProperty("btnOther", true);
    ui->btnOther14->setProperty("btnOther", true);
    ui->btnOther15->setProperty("btnOther", true);
    ui->btnOther16->setProperty("btnOther", true);
    ui->btnOther17->setProperty("btnOther", true);
    ui->btnOther18->setProperty("btnOther", true);
    ui->btnOther19->setProperty("btnOther", true);

    ui->btn0->setProperty("btnNum", true);
    ui->btn1->setProperty("btnNum", true);
    ui->btn2->setProperty("btnNum", true);
    ui->btn3->setProperty("btnNum", true);
    ui->btn4->setProperty("btnNum", true);
    ui->btn5->setProperty("btnNum", true);
    ui->btn6->setProperty("btnNum", true);
    ui->btn7->setProperty("btnNum", true);
    ui->btn8->setProperty("btnNum", true);
    ui->btn9->setProperty("btnNum", true);

    ui->btna->setProperty("btnLetter", true);
    ui->btnb->setProperty("btnLetter", true);
    ui->btnc->setProperty("btnLetter", true);
    ui->btnd->setProperty("btnLetter", true);
    ui->btne->setProperty("btnLetter", true);
    ui->btnf->setProperty("btnLetter", true);
    ui->btng->setProperty("btnLetter", true);
    ui->btnh->setProperty("btnLetter", true);
    ui->btni->setProperty("btnLetter", true);
    ui->btnj->setProperty("btnLetter", true);
    ui->btnk->setProperty("btnLetter", true);
    ui->btnl->setProperty("btnLetter", true);
    ui->btnm->setProperty("btnLetter", true);
    ui->btnn->setProperty("btnLetter", true);
    ui->btno->setProperty("btnLetter", true);
    ui->btnp->setProperty("btnLetter", true);
    ui->btnq->setProperty("btnLetter", true);
    ui->btnr->setProperty("btnLetter", true);
    ui->btns->setProperty("btnLetter", true);
    ui->btnt->setProperty("btnLetter", true);
    ui->btnu->setProperty("btnLetter", true);
    ui->btnv->setProperty("btnLetter", true);
    ui->btnw->setProperty("btnLetter", true);
    ui->btnx->setProperty("btnLetter", true);
    ui->btny->setProperty("btnLetter", true);
    ui->btnz->setProperty("btnLetter", true);

    ui->labPY->setProperty("labVideo", true);
    ui->labInfo->setProperty("labVideo", true);
    labCh.append(ui->labCh0);
    labCh.append(ui->labCh1);
    labCh.append(ui->labCh2);
    labCh.append(ui->labCh3);
    labCh.append(ui->labCh4);
    labCh.append(ui->labCh5);
    labCh.append(ui->labCh6);
    labCh.append(ui->labCh7);
    labCh.append(ui->labCh8);
    labCh.append(ui->labCh9);
    for (int i = 0; i < 10; i++) {
        labCh[i]->setProperty("labVideo", true);
        labCh[i]->installEventFilter(this);
    }
}

//事件过滤器,用于识别鼠标单击汉字标签处获取对应汉字
bool frmInput::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonPress) {
        if (obj == ui->labCh0) {
            setChinese(0);
        } else if (obj == ui->labCh1) {
            setChinese(1);
        } else if (obj == ui->labCh2) {
            setChinese(2);
        } else if (obj == ui->labCh3) {
            setChinese(3);
        } else if (obj == ui->labCh4) {
            setChinese(4);
        } else if (obj == ui->labCh5) {
            setChinese(5);
        } else if (obj == ui->labCh6) {
            setChinese(6);
        } else if (obj == ui->labCh7) {
            setChinese(7);
        } else if (obj == ui->labCh8) {
            setChinese(8);
        } else if (obj == ui->labCh9) {
            setChinese(9);
        }
        return false;
    } else if (event->type() == QEvent::KeyPress) {
        //如果处于中文模式,需要将当前按键对应反应到输入法界面上
        if (currentType == "chinese") {
            QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
            if (keyEvent->key() == Qt::Key_Backspace) {
                ui->btnDelete->click();
            } else {
                QString key = keyEvent->text();
                QList<QPushButton *> btn = this->findChildren<QPushButton *>();
                foreach (QPushButton * b, btn) {
                    if (b->text() == key) {
                        b->click();
                        break;
                    }
                }
            }
            return true;
        }
        return false;
    }
    return QObject::eventFilter(obj, event);
}

void frmInput::contextMenuEvent(QContextMenuEvent *)
{
    menuStyle->exec(QCursor::pos());
}

void frmInput::focusChanged(QWidget *oldWidget, QWidget *nowWidget)
{
    //qDebug() << "oldWidget:" << oldWidget << "nowWidget:" << nowWidget;
    if (nowWidget != 0 && !this->isAncestorOf(nowWidget)) {
        if (nowWidget->inherits("QLineEdit")) {
            currentLineEdit = (QLineEdit *)nowWidget;
            this->setVisible(true);
        } else {
            currentLineEdit = 0;
            this->setVisible(false);
            //需要将输入法切换到最初的原始状态--小写
            currentType="min";
            changeType(currentType);
        }
    }
}

void frmInput::changeType(QString type)
{
    if (type == "max") {
        changeLetter(true);
        ui->btnType->setText("大写");
        ui->widgetTop->setVisible(false);
        this->setGeometry(this->geometry().x(), this->geometry().y(), 550, 160);
    } else if (type == "min") {
        changeLetter(false);
        ui->btnType->setText("小写");
        ui->widgetTop->setVisible(false);
        this->setGeometry(this->geometry().x(), this->geometry().y(), 550, 160);
    } else {
        changeLetter(false);
        ui->btnType->setText("中文");
        ui->widgetTop->setVisible(true);
        this->setGeometry(this->geometry().x(), this->geometry().y(), 550, 215);
        //每次切换到中文显示,都要执行清空之前中文模式下的信息
        clearChinese();
        ui->labPY->setText("");
    }
}

void frmInput::changeLetter(bool isUpper)
{
    QList<QPushButton *> btn = this->findChildren<QPushButton *>();
    foreach (QPushButton * b, btn) {
        if (b->property("btnLetter").toBool()) {
            if (isUpper) {
                b->setText(b->text().toUpper());
            } else {
                b->setText(b->text().toLower());
            }
        }
    }
}

void frmInput::selectChinese()
{
    clearChinese();
    QSqlQuery query;
    QString currentPY = ui->labPY->text();
    QString sql = "select [word] from [pinyin] where [pinyin]='" + currentPY + "';";
    query.exec(sql);
    //逐个将查询到的字词加入汉字队列
    while(query.next()) {
        QString result = query.value(0).toString();
        if (App::PYType == "danpin") {
            allPY.append(result);
            currentPY_count++;
        } else {
            QStringList text = result.split(" ");
            foreach (QString txt, text) {
                if (txt.length() > 0) {
                    allPY.append(txt);
                    currentPY_count++;
                }
            }
        }
    }
    showChinese();
}

void frmInput::showChinese()
{
    //每个版面最多显示10个汉字
    int count = 0;
    currentPY.clear();
    for (int i = 0; i < 10; i++) {
        labCh[i]->setText("");
    }

    for (int i = currentPY_index; i < currentPY_count; i++) {
        if (count == 10) {
            break;
        }
        QString txt = QString("%1.%2").arg(count).arg(allPY[currentPY_index]);
        currentPY.append(allPY[currentPY_index]);
        labCh[count]->setText(txt);
        count++;
        currentPY_index++;
    }
    //qDebug() << "currentPY_index:" << currentPY_index << "currentPY_count:" << currentPY_count;
}

void frmInput::btn_clicked()
{
    QPushButton *btn = (QPushButton *)sender();
    QString objectName = btn->objectName();
    if (objectName == "btnType") {
        if (currentType == "min") {
            currentType = "max";
        } else if (currentType == "max") {
            currentType = "chinese";
        } else if (currentType == "chinese") {
            currentType = "min";
        }
        changeType(currentType);
    } else if (objectName == "btnDelete" || objectName == "btnDeleteMin") {
        //如果当前是中文模式,则删除对应拼音,删除完拼音之后再删除对应文本输入框的内容
        if (currentType == "chinese") {
            QString txt = ui->labPY->text();
            int len = txt.length();
            if (len > 0) {
                ui->labPY->setText(txt.left(len - 1));
                selectChinese();
            } else {
                if (currentLineEdit != 0) {
                    currentLineEdit->backspace();
                }
            }
        } else {
            if (currentLineEdit != 0) {
                currentLineEdit->backspace();
            }
        }
    } else if (objectName == "btnPre") {
        if (currentPY_index >= 20) {
            if (currentPY_index % 10 == 0) {
                currentPY_index -= 20;
            } else {
                currentPY_index = currentPY_count - (currentPY_count % 10) - 10;
            }
        } else {
            currentPY_index = 0;
        }
        showChinese();
    } else if (objectName == "btnNext") {
        if (currentPY_index < currentPY_count - 1) {
            showChinese();
        }
    } else {
        QString value = btn->text();
        //如果是&按钮，因为对应&被过滤,所以真实的text为去除前面一个&字符
        if (objectName == "btnOther7") {
            value = value.right(1);
        }
        //当前不是中文模式,则单击按钮对应text为传递参数
        if (currentType != "chinese") {
            if (currentLineEdit != 0) {
                currentLineEdit->insert(value);
            }
        } else {
            if (currentLineEdit != 0) {
                //中文模式下,不允许输入特殊字符,单击对应数字按键取得当前索引的汉字
                if (btn->property("btnOther").toBool()) {
                    if (ui->labPY->text().length() == 0) {
                        currentLineEdit->insert(value);
                    }
                } else if (btn->property("btnNum").toBool()) {
                    if (ui->labPY->text().length() == 0) {
                        currentLineEdit->insert(value);
                    } else if (objectName == "btn0") {
                        setChinese(0);
                    } else if (objectName == "btn1") {
                        setChinese(1);
                    } else if (objectName == "btn2") {
                        setChinese(2);
                    } else if (objectName == "btn3") {
                        setChinese(3);
                    } else if (objectName == "btn4") {
                        setChinese(4);
                    } else if (objectName == "btn5") {
                        setChinese(5);
                    } else if (objectName == "btn6") {
                        setChinese(6);
                    } else if (objectName == "btn7") {
                        setChinese(7);
                    } else if (objectName == "btn8") {
                        setChinese(8);
                    } else if (objectName == "btn9") {
                        setChinese(9);
                    }
                } else if (btn->property("btnLetter").toBool()) {
                    ui->labPY->setText(ui->labPY->text() + value);
                    selectChinese();
                }
            }
        }
    }
}

void frmInput::setChinese(int index)
{
    int count = currentPY.count();
    if (count > index) {
        currentLineEdit->insert(currentPY[index]);
        //添加完一个汉字后,清空当前汉字信息,等待重新输入
        clearChinese();
        ui->labPY->setText("");
    }
}

void frmInput::clearChinese()
{
    for (int i = 0; i < 10; i++) {
        labCh[i]->setText("");
    }
    allPY.clear();
    currentPY.clear();
    currentPY_index = 0;
    currentPY_count = 0;
}

void frmInput::change_style()
{
    QAction *action = (QAction *)sender();
    QString style = action->text();
    if (style == "淡蓝色") {
        App::AppStyle = ":/image/blue.css";
    } else if (style == "蓝色") {
        App::AppStyle = ":/image/dev.css";
    } else if (style == "灰色") {
        App::AppStyle = ":/image/gray.css";
    } else if (style == "黑色") {
        App::AppStyle = ":/image/black.css";
    } else if (style == "灰黑色") {
        App::AppStyle = ":/image/brown.css";
    } else if (style == "白色") {
        App::AppStyle = ":/image/white.css";
    } else if (style == "银色") {
        App::AppStyle = ":/image/silvery.css";
    }

    myHelper::SetStyle(App::AppStyle);
    App::WriteConfig();
}
