#include "_myTabWidgetContextMenu.h"

_myTabWidgetContextMenu::_myTabWidgetContextMenu(QWidget *parent)
    : QWidget{parent}
{


    mytabwidgetcontextmenu_add = new QAction("添加");
    mytabwidgetcontextmenu_editor = new QAction("修改");

}
