QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    telacaos.cpp \
    telaclapeyron.cpp \
    telagauss.cpp \
    telagravidade.cpp \
    telaparticula.cpp \
    telapitagoras.cpp \
    telarelatividade.cpp \
    telatorricelli.cpp

HEADERS += \
    mainwindow.h \
    telacaos.h \
    telaclapeyron.h \
    telagauss.h \
    telagravidade.h \
    telaparticula.h \
    telapitagoras.h \
    telarelatividade.h \
    telatorricelli.h

FORMS += \
    mainwindow.ui \
    telacaos.ui \
    telaclapeyron.ui \
    telagauss.ui \
    telagravidade.ui \
    telaparticula.ui \
    telapitagoras.ui \
    telarelatividade.ui \
    telatorricelli.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    fileRecourses.qrc

DISTFILES +=
