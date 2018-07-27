#ifndef BASEFORM_H
#define BASEFORM_H

#include <QMainWindow>

class BaseForm : public QMainWindow
{
    Q_OBJECT
public:
    explicit BaseForm(QString title, int width, int height);
    void showMessage(const QString &message);

private:
    void setSize(int width, int height);
    void centering();

signals:

public slots:
};

#endif // BASEFORM_H
