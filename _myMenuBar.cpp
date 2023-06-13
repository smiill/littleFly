#include "_myMenuBar.h"

//这里用于定义主界面的菜单栏

_myMenuBar::_myMenuBar(QWidget *parent)
    : QWidget{parent}
{
    //定例化两个变量，一个用于菜单栏， 一个用于菜单中的代理设置
    menubar = new QMenuBar();
    menu_proxy = new QMenu("代理");
    menu_proxy->addAction("设置");
    menubar->addMenu(menu_proxy);


}
