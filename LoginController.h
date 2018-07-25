#ifndef LOGINCONTROLLER_H
#define LOGINCONTROLLER_H

#include "LoginForm.h"

class LoginController
{
public:
    LoginController();
    ~LoginController();
    void initLoginForm();
private:
    LoginForm *loginForm;
};

#endif // LOGINCONTROLLER_H
