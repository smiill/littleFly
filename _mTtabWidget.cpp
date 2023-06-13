#include "_myTabWidget.h"
#include "QPushButton"

_myTabWidget::_myTabWidget(QWidget *parent)
    : QWidget{parent}
{
    //构造一个新的widget, 并设置布局， 最后放入tabwidget
    index = new QTabWidget();
    mytabwindowindex = new QWidget();
    mytabwindowfofa = new QWidget();//这两个widget要设置vhbox布局， 到时添加qtablewidget时才能自动扩张
    index->addTab(mytabwindowindex, "WEB");
    index->addTab(mytabwindowfofa, "FOFA");
    //定义vbox用于后面设置layout
    vhbox = new QVBoxLayout();
    //把tabwidget添加进vbox
    mytabwindowfofa_qvboxlayout = new QVBoxLayout();
    mytabwindowfofa->setLayout(mytabwindowfofa_qvboxlayout);
    mytabwindowindex_qvboxlayout = new QVBoxLayout();
    mytabwindowindex->setLayout(mytabwindowindex_qvboxlayout);
    vhbox->addWidget(index);
    //QPushButton *t = new QPushButton("btn", mytabwindowindex);
    //上面代码设置好tabwidget后并添加进一个vhbox里了， 把这一整个放到一个新的widget里去


}
