#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QMainWindow>

class LoginForm : public QMainWindow {
    Q_OBJECT
public:
    explicit LoginForm(QWidget *parent = nullptr);

private:
    void setSize(int width, int height);
    void centering();

signals:

public slots:
};

#endif // LOGINFORM_H
