# -------------------------------------------------
# Project created by QtCreator 2009-02-16
# James P. Parziale
# This file may be distributed under the terms of the GNU Public License.
# -------------------------------------------------
TARGET = DateTimeCalc
TEMPLATE = app
INCLUDEPATH += ../Tools/
QT += core \
    gui \
    widgets
CONFIG -= debug \
    release \
    debug_and_release \
    debug_and_release_target
SOURCES += about.cpp \
    main.cpp \
    datetimecalc.cpp
HEADERS += about.h \
    datetimecalc.h
FORMS += datetimecalc.ui \
    about.ui
RC_FILE = datetimecalc.rc
RESOURCES += datetimecalc.qrc
OTHER_FILES += datetimecalc.rc
