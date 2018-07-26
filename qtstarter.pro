QT += gui widgets sql

TEMPLATE = app

SOURCES += \
        main.cpp \
    controllers/LoginController.cpp \
    views/LoginForm.cpp \
    views/BaseForm.cpp \
    models/User.cpp \
    views/RegisterForm.cpp

HEADERS += \
    controllers/LoginController.h \
    views/LoginForm.h \
    views/BaseForm.h \
    models/User.h \
    views/RegisterForm.h

RESOURCES += \
    resource.qrc
