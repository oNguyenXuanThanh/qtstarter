#include <QLabel>
#include <QWidget>
#include <QPushButton>
#include "LoginForm.h"

LoginForm::LoginForm(QString title, int width, int height)
    : BaseForm(title, width, height)
{
    QWidget *wMain;
    QLabel *lblLogo;
    QLabel *lblTitle;
    QLabel *lblUserName;
    QLabel *lblPassword;
    QLabel *lblRegister;
    QPushButton *btnLogin;

    // wMain
    wMain = new QWidget(this);
    setCentralWidget(wMain);

    // lblLogo
    lblLogo = new QLabel(wMain);
    lblLogo->setPixmap(QPixmap(":/images/system.png"));
    lblLogo->setGeometry((width - 128) / 2, 16, 128, 128);

    // lblTitle
    lblTitle = new QLabel("Đăng nhập vào hệ thống", wMain);
    lblTitle->setGeometry(0, lblLogo->frameGeometry().bottom() + 20, width, 24);
    lblTitle->setAlignment(Qt::AlignCenter);

    // txtUserName
    txtUserName = new QLineEdit(wMain);
    txtUserName->setGeometry((width - 170) / 2, lblTitle->frameGeometry().bottom() + 20, 170, 24);

    // lblUserName
    lblUserName = new QLabel("Tên tài khoản", wMain);
    lblUserName->setGeometry(txtUserName->frameGeometry().left() - 80, txtUserName->frameGeometry().top(), 80, 24);

    // txtPassword
    txtPassword = new QLineEdit(wMain);
    txtPassword->setGeometry((width - 170) / 2, txtUserName->frameGeometry().bottom() + 20, 170, 24);
    txtPassword->setEchoMode(QLineEdit::Password);

    // lblPassword
    lblPassword = new QLabel("Mật khẩu", wMain);
    lblPassword->setGeometry(txtUserName->frameGeometry().left() - 80, txtPassword->frameGeometry().top(), 80, 24);

    // lblRegister
    lblRegister = new QLabel("<font color=blue><u>Chưa có tài khoản? Đăng ký</u></font>", wMain);
    lblRegister->setGeometry(0, txtPassword->frameGeometry().bottom() + 16, txtPassword->frameGeometry().right(), 24);
    lblRegister->setAlignment(Qt::AlignRight);

    // btnLogin
    btnLogin = new QPushButton("Đăng nhập", wMain);
    btnLogin->setGeometry((width - 100) / 2, lblRegister->frameGeometry().bottom() + 10, 100, 24);
}

