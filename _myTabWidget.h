#ifndef _MYTABWIDGET_H
#define _MYTABWIDGET_H


#include "QTabWidget"
#include "QVBoxLayout"

class _myTabWidget : public QWidget
{
    Q_OBJECT
public:
    explicit _myTabWidget(QWidget *parent = nullptr);
    //设置主面tab, 目前两个
    QTabWidget *index;
    QWidget *mytabwindowindex;//用于首而
    QWidget *mytabwindowfofa;//用于fofa页
    //定义vbox用于后面设置layout
    QVBoxLayout *mytabwindowfofa_qvboxlayout;
    QVBoxLayout *mytabwindowindex_qvboxlayout;
    QVBoxLayout * vhbox;



signals:

};

#endif // _MYTABWIDGET_H
