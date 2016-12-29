TEMPLATE = app
QT += widgets

release: TARGET = ImageModifier
debug: TARGET = ImageModifier_debug

HEADERS = ./include/MainWindow.h \
          ./src/ImageProcessor.h

SOURCES = ./src/main.cpp \
		  ./src/MainWindow.cpp \
		  ./src/ImageProcessor.cpp

FORMS = ./ui/MainWindow.ui

INCLUDEPATH += ./include

release: DESTDIR = build/release
debug:   DESTDIR = build/debug

OBJECTS_DIR = $$DESTDIR/.obj
MOC_DIR = $$DESTDIR/.moc
RCC_DIR = $$DESTDIR/.qrc
UI_DIR = $$DESTDIR/.ui

INCLUDEPATH += "C:/opencv/build/include"
LIBS += -LC:/opencv/build/x86/vc11/lib
