#include <QApplication>
#include "LoginController.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    LoginController loginController;
    loginController.initLoginForm();

    return app.exec();
}
