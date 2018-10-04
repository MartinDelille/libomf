CONFIG += console
CONFIG   -= app_bundle

INCLUDEPATH += vendors/bandit

include(libomf.pri)


SOURCES += \
    main.cpp

copy.commands += cp $$PWD/data/test.omf .
QMAKE_EXTRA_TARGETS += copy

