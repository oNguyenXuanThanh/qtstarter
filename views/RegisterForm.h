#ifndef REGISTERFORM_H
#define REGISTERFORM_H

#include <QLineEdit>
#include <QPushButton>
#include "../models/User.h"
#include "BaseForm.h"

class RegisterForm : public BaseForm
{
    Q_OBJECT
public:
    RegisterForm(QString title, int width, int height);
    void addRegisterConnection(QObject *receiver, const char *slot);
    User *getUser();
private:
    bool validate();
private:
    QLineEdit *txtUserName;
    QLineEdit *txtPassword;
    QLineEdit *txtFullName;
    QPushButton *btnLogin;
};

#endif // REGISTERFORM_H
