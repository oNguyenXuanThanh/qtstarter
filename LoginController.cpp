#include "LoginController.h"

LoginController::LoginController() {
}

LoginController::~LoginController() {
    delete loginForm;
}

void LoginController::initLoginForm() {
    loginForm = new LoginForm;
}
