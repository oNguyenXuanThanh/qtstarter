#include <QDebug>
#include <QtSql>
#include "LoginController.h"

LoginController::LoginController()
{
}

LoginController::~LoginController()
{
    delete loginForm;
}

void LoginController::initLoginForm()
{
    loginForm = new LoginForm("Login", 500, 380);
    loginForm->addLoginConnection(this, SLOT(loginButtonClicked()));
}

User *LoginController::login(User *input)
{
    QSqlDatabase database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setPort(3306);
    database.setDatabaseName("manager");
    database.setUserName("root");
    database.setPassword("thanh1402");
    if (!database.open())
    {
        qDebug() << "Can't open database! Reason: " << database.lastError().text();
        return NULL;
    }
    qDebug() << "Database connnected!";
    QSqlQuery query;
    query.prepare("SELECT * FROM User WHERE userName = :userName AND password = :password");
    query.bindValue(0, input->getUserName());
    query.bindValue(1, input->getPassword());
    if (!query.exec())
    {
        qDebug() << "Can't exec select query! Reason: " << query.lastError().text();
        return NULL;
    }
    if (query.next())
    {
        loginForm->showMessage("Đăng nhập thành công!");
    } else
    {
        loginForm->showMessage("Sai thông tin đăng nhập!");
    }
    return NULL;
}

// Private slots

void LoginController::loginButtonClicked()
{
    User *user = loginForm->getUser();
    if (!user) return;
    qDebug() << user->getUserName();
    login(user);
}
