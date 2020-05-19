# compile with 32bit compiler
# place the resulting file "simpleds.ds" into \Windows\twain_32
# do not forget to have all dependencies present in the PATH

QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = simpleds
#TARGET_EXT = .ds
#TEMPLATE = lib

CONFIG += c++11
DEFINES += TWPP_IS_DS
INCLUDEPATH += $$PWD/../../

DEF_FILE = exports.def

SOURCES += simpleds.cpp \
    scandialog.cpp \
    mainwindow.cpp \
    main.cpp

HEADERS += simpleds.hpp \
    scandialog.hpp \
    twglue.hpp \
    twpp/utils.hpp \
    twpp/userinterface.hpp \
    twpp/typesops.hpp \
    twpp/types.hpp \
    twpp/strings.hpp \
    twpp/status.hpp \
    twpp/setupmemxfer.hpp \
    twpp/setupfilexfer.hpp \
    twpp/pendingxfers.hpp \
    twpp/passthrough.hpp \
    twpp/palette8.hpp \
    twpp/memoryops.hpp \
    twpp/memory.hpp \
    twpp/jpegcompression.hpp \
    twpp/internal.hpp \
    twpp/imagenativexfer.hpp \
    twpp/imagememxfer.hpp \
    twpp/imagelayout.hpp \
    twpp/imageinfo.hpp \
    twpp/identity.hpp \
    twpp/frame.hpp \
    twpp/fix32.hpp \
    twpp/filesystem.hpp \
    twpp/extimageinfo.hpp \
    twpp/exception.hpp \
    twpp/event.hpp \
    twpp/env.hpp \
    twpp/enums.hpp \
    twpp/element8.hpp \
    twpp/deviceevent.hpp \
    twpp/datasource.hpp \
    twpp/customdata.hpp \
    twpp/curveresponse.hpp \
    twpp/cie.hpp \
    twpp/capability.hpp \
    twpp/audio.hpp \
    twpp/application.hpp \
    twpp.hpp \
    mainwindow.h

DISTFILES += \
    exports.def

RESOURCES += \
    images.qrc

FORMS += \
    scandialog.ui \
    mainwindow.ui
