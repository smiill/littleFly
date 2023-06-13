#ifndef _MYTABWIDGETCONTEXTMENU_H
#define _MYTABWIDGETCONTEXTMENU_H

#include <QWidget>
#include <QMenu>
#include <QAction>

class _myTabWidgetContextMenu : public QWidget
{
    Q_OBJECT
public:
    explicit _myTabWidgetContextMenu(QWidget *parent = nullptr);

    QAction *mytabwidgetcontextmenu_add;
    QAction *mytabwidgetcontextmenu_editor;

signals:

};

#endif // _MYTABWIDGETCONTEXTMENU_H
