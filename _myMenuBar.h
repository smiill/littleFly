#ifndef _MYMENUBAR_H
#define _MYMENUBAR_H

#include <QWidget>
#include "QMenuBar"
#include "QMenu"

class _myMenuBar : public QWidget
{
    Q_OBJECT
public:
    explicit _myMenuBar(QWidget *parent = nullptr);
    //定义菜单栏变量
    QMenuBar *menubar;
    //定义代理菜单
    QMenu *menu_proxy;

signals:

};

#endif // _MYMENUBAR_H
