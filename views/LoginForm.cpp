#include <QLabel>
#include <QWidget>
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
    lblUserName->setGeometry(txtUserName->frameGeometry().left() - 100, txtUserName->frameGeometry().top(), 80, 24);

    // txtPassword
    txtPassword = new QLineEdit(wMain);
    txtPassword->setGeometry((width - 170) / 2, txtUserName->frameGeometry().bottom() + 20, 170, 24);
    txtPassword->setEchoMode(QLineEdit::Password);

    // lblPassword
    lblPassword = new QLabel("Mật khẩu", wMain);
    lblPassword->setGeometry(txtUserName->frameGeometry().left() - 100, txtPassword->frameGeometry().top(), 80, 24);

    // lblRegister
    lblRegister = new QLabel("<font color=blue><u>Đăng ký tài khoản</u></font>", wMain);
    lblRegister->setGeometry(0, txtPassword->frameGeometry().bottom() + 16, txtPassword->frameGeometry().right(), 24);
    lblRegister->setAlignment(Qt::AlignRight);

    // btnLogin
    btnLogin = new QPushButton("Đăng nhập", wMain);
    btnLogin->setGeometry((width - 100) / 2, lblRegister->frameGeometry().bottom() + 10, 100, 30);
}

void LoginForm::addLoginConnection(QObject *receiver, const char *slot)
{
    connect(btnLogin, SIGNAL(pressed()), receiver, slot);
}

bool LoginForm::validate()
{
    if (txtUserName->text().isEmpty())
    {
        showMessage("Vui lòng nhập tên tài khoản!");
        txtUserName->setFocus();
        return false;
    } else if (txtPassword->text().isEmpty())
    {
        showMessage("Vui lòng nhập tên mật khẩu!");
        txtPassword->setFocus();
        return false;
    }
    return true;
}

User *LoginForm::getUser()
{
    if (validate())
    {
        User *user = new User;
        user->setUserName(txtUserName->text().trimmed());
        user->setPassword(txtPassword->text().trimmed());
        return user;
    }
    return NULL;
}
