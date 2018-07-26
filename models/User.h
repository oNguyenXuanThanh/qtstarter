#ifndef USER_H
#define USER_H

#include <QString>

class User
{
public:
    User();
    User(int id, QString userName, QString password, QString fullName, QString birthday, QString email, QString phoneNumber, int role);
    QString getUserName();
    void setUserName(QString value);
    QString getPassword();
    void setPassword(QString value);
private:
    int id;
    QString userName;
    QString password;
    QString fullName;
    QString birthday;
    QString email;
    QString phoneNumber;
    int role;
};

#endif // USER_H
