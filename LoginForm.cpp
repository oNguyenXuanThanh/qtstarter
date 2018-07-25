#include <QApplication>
#include <QDesktopWidget>
#include "LoginForm.h"

LoginForm::LoginForm(QWidget *parent) : QMainWindow(parent) {
    setWindowTitle("Login");
    setSize(500, 380);
    centering();
    show();
}

// Private methods

void LoginForm::setSize(int width, int height) {
    setMaximumWidth(width);
    setMaximumHeight(height);
    setMinimumWidth(width);
    setMinimumHeight(height);
}

void LoginForm::centering() {
    QRect desktopRect = QApplication::desktop()->screenGeometry();
    int posX = (desktopRect.width() - size().width()) / 2;
    int posY = (desktopRect.height() - size().height()) / 2;
    setGeometry(posX, posY, size().width(), size().height());
}
