#ifndef CHANGE_LED_H
#define CHANGE_LED_H

#include <QMainWindow>

namespace Ui {
class change_led;
}

class change_led : public QMainWindow
{
    Q_OBJECT

public:
    explicit change_led(QWidget *parent = 0);
    ~change_led();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::change_led *ui;
};

#endif // CHANGE_LED_H
