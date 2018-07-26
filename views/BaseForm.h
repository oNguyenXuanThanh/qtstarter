#ifndef BASEFORM_H
#define BASEFORM_H

#include <QMainWindow>

class BaseForm : public QMainWindow
{
    Q_OBJECT
public:
    explicit BaseForm(QString title, int width, int height);

private:
    void setSize(int width, int height);
    void centering();
protected:
    void showMessage(const QString &message);

signals:

public slots:
};

#endif // BASEFORM_H
