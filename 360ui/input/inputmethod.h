#ifndef INPUTMETHOD_H
#define INPUTMETHOD_H

#include <QDialog>
#include <QFile>
#include <QButtonGroup>
#include <QMultiMap>

namespace Ui {
class InputMethod;
}

class InputMethod : public QDialog
{
    Q_OBJECT

public:
    explicit InputMethod(QWidget *parent = 0);
    ~InputMethod();
    void setcurrentString(QString);

private:
    Ui::InputMethod *ui;

    void changePage(int index);
    void matching(QString gemfield);
    void initGb();
    void selectHanziPre();
    void selectHanziNext();
    void changeInputMethod();
    void changeLowerUpper();
    void clearString();
    void affirmString();
    void deleteString();

public slots:
    void buttonClickResponse(int gemfield);
signals:
    void sendPinyin(QString gemfield);

private:
    QFile pinyin_file;
    QKeyEvent *event;
    QRegExp regExp;
    QButtonGroup *button_group;
    QMultiMap<QString,QString> pinyin_map;
    QStringList pinyin_list;
    QVector<QPushButton*> button_vector;
    int input_method,lower_upper,page_count;
};

#endif // INPUTMETHOD_H
