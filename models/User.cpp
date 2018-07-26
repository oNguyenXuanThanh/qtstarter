#include "User.h"

User::User()
{
}

User::User(int id, QString userName, QString password, QString fullName, QString birthday, QString email, QString phoneNumber, int role)
{
    this->id = id;
    this->userName = userName;
    this->password = password;
    this->fullName = fullName;
    this->birthday = birthday;
    this->email = email;
    this->phoneNumber = phoneNumber;
    this->role = role;
}

QString User::getUserName()
{
    return this->userName;
}

void User::setUserName(QString value)
{
    this->userName = value;
}

QString User::getPassword()
{
    return this->password;
}

void User::setPassword(QString value)
{
    this->password = value;
}
