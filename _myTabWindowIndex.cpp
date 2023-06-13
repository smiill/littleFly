#include "_myTabWindowIndex.h"

_myTabWindowIndex::_myTabWindowIndex(QWidget *parent)
    : QWidget{parent}
{
    qDebug() << "运行到这里了";
    indextable = new QTableWidget();
    QStringList header;
    header << "ID" << "URL" << "IP" << "类型" << "OS" << "TIME" << "备注" << "STATUS";
    indextable->setColumnCount(8);
    indextable->setHorizontalHeaderLabels(header);
    //vblayout->addWidget(table);
    indextable->horizontalHeader()->setSectionResizeMode(6, QHeaderView::Stretch);//备注那一列占用空间多一些
    qDebug() << "运行到这里了";
    //把这个表添加进mytablewindowindex里去
}
