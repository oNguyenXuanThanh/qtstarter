#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QLineEdit>
#include <QPushButton>
#include "BaseForm.h"
#include "../models/User.h"

class User;

class LoginForm : public BaseForm
{
    Q_OBJECT
public:
    LoginForm(QString title, int width, int height);
    void addLoginConnection(QObject *receiver, const char *slot);
    User *getUser();
private:
    bool validate();
private:
    QLineEdit *txtUserName;
    QLineEdit *txtPassword;
    QPushButton *btnLogin;
};

#endif // LOGINFORM_H
