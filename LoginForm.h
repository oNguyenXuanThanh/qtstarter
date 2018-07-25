#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QLineEdit>
#include "BaseForm.h"

class LoginForm : public BaseForm
{
    Q_OBJECT
public:
    LoginForm(QString title, int width, int height);
private:
    QLineEdit *txtUserName;
    QLineEdit *txtPassword;
};

#endif // LOGINFORM_H
