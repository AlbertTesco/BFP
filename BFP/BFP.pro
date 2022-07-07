QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
LIBS += -L../Geometry_library -lGeometry_library
SOURCES += \
    dialog_circle.cpp \
    dialog_parallelogram.cpp \
    dialog_rectangel.cpp \
    dialog_trapezoid.cpp \
    dialog_triangle.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    dialog_circle.h \
    dialog_parallelogram.h \
    dialog_rectangel.h \
    dialog_trapezoid.h \
    dialog_triangle.h \
    mainwindow.h

FORMS += \
    dialog_circle.ui \
    dialog_parallelogram.ui \
    dialog_rectangel.ui \
    dialog_trapezoid.ui \
    dialog_triangle.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
