#include <QApplication>
#include <QDesktopWidget>
#include <QMessageBox>
#include "BaseForm.h"

BaseForm::BaseForm(QString title, int width, int height)
    : QMainWindow(0)
{
    setWindowTitle(title);
    setSize(width, height);
    centering();
    show();
}

// Private methods

void BaseForm::setSize(int width, int height)
{
    setMaximumWidth(width);
    setMaximumHeight(height);
    setMinimumWidth(width);
    setMinimumHeight(height);
}

void BaseForm::centering()
{
    QRect desktopRect = QApplication::desktop()->screenGeometry();
    int posX = (desktopRect.width() - width()) / 2;
    int posY = (desktopRect.height() - height()) / 2;
    setGeometry(posX, posY, size().width(), size().height());
}

void BaseForm::showMessage(const QString &message)
{
    QMessageBox::information(this, "", message);
}
