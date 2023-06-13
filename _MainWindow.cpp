#include "_MainWindow.h"
#include "_myIncludeAll.h"



_MainWindow::_MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    //添加菜单--------------------------------------------------------
    _myMenuBar *mymenubar = new _myMenuBar();
    this->setMenuBar(mymenubar->menubar);
    //--------------------------------------------------------


    //添加主页面--------------------------------------------------------
    _myTabWidget *mytabwidget = new _myTabWidget();
    //先生成一个widget再把tabwidget放上去
    QWidget *mainwidget = new QWidget();
    mainwidget->setLayout(mytabwidget->vhbox);//放到新生成的qwidget上
    this->setCentralWidget(mainwidget); //重新设置layout中心为这个新的widget
    //--------------------------------------------------------


    //-添加主页面中的indextable------------------------------------
    _myTabWindowIndex *mytabwindowindex_index = new _myTabWindowIndex();
    mytabwidget->mytabwindowindex_qvboxlayout->addWidget(mytabwindowindex_index->indextable);
    //在tabwidget里添加widget, 在这个widget上添加vhbox, 再在这个vhbox上添加tablewidget
    //调用函数初初化数据:

    //--------------------------------------------------------

    //添加一个全局右键菜单来添加数据--------------------------------------------------------
    _myTabWidgetContextMenu *mytabwidgetcontextmenu_all = new _myTabWidgetContextMenu();
    setContextMenuPolicy(Qt::ActionsContextMenu);
    addAction(mytabwidgetcontextmenu_all->mytabwidgetcontextmenu_add);
    addAction(mytabwidgetcontextmenu_all->mytabwidgetcontextmenu_editor);

}

_MainWindow::~_MainWindow()
{
}

