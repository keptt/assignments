include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        tst_test_of_word_gen.h \
    header.h

SOURCES += \
        main.cpp \
    funcs.cpp
