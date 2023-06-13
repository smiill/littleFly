#ifndef _MYTABWINDOWINDEX_H
#define _MYTABWINDOWINDEX_H

#include <QWidget>
#include <QTableWidget>
#include "QHeaderView"

class _myTabWindowIndex : public QWidget
{
    Q_OBJECT
public:
    explicit _myTabWindowIndex(QWidget *parent = nullptr);

    //要在这里创建一张表，用于显示数据
    QTableWidget *indextable;
    //固定设置长度


signals:

};

#endif // _MYTABWINDOWINDEX_H
