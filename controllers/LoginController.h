#ifndef LOGINCONTROLLER_H
#define LOGINCONTROLLER_H

#include "../views/LoginForm.h"
#include "../models/User.h"

class LoginController : public QObject
{
    Q_OBJECT
public:
    LoginController();
    ~LoginController();
    void initLoginForm();
private:
    User* login(User *input);
private:
    LoginForm *loginForm;
private slots:
    void loginButtonClicked();
};

#endif // LOGINCONTROLLER_H
