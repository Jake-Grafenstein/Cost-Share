TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += main.cpp \
    Group.cpp \
    Member.cpp \
    LineItem.cpp \
    Session.cpp \
    Transaction.cpp \
    Ledger.cpp \
    Date.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    Group.h \
    Session.h \
    Transaction.h \
    Member.h \
    LineItem.h \
    Ledger.h \
    Date.h
