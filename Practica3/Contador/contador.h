#ifndef CONTADOR_H
#define CONTADOR_H

#include <QMainWindow>

namespace Ui {
class contador;
}

class contador : public QMainWindow
{
    Q_OBJECT

public:
    explicit contador(QWidget *parent = 0);
    ~contador();

private slots:
    void on_pushButton_clicked();

private:
    Ui::contador *ui;
};

#endif // CONTADOR_H
