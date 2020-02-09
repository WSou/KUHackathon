#ifndef DPAD_H
#define DPAD_H

#include <QDialog>
#include <QPushButton>

class dpad : public QWidget
{
    Q_OBJECT
public:
    explicit dpad(QObject *parent = nullptr);

signals:

private slots:
    void handleButton();

private:
    QPushButton *button;
};

#endif // DPAD_H

