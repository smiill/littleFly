QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    _mTtabWidget.cpp \
    _myMenuBar.cpp \
    _myTabWidgetContextMenu.cpp \
    _myTabWindowIndex.cpp \
    main.cpp \
    _MainWindow.cpp

HEADERS += \
    _MainWindow.h \
    _myIncludeAll.h \
    _myMenuBar.h \
    _myTabWidget.h \
    _myTabWidgetContextMenu.h \
    _myTabWindowIndex.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    README.TXT
