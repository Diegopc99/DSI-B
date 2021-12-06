#ifndef TERMINAL_H
#define TERMINAL_H

#include <QMainWindow>

namespace Ui {
class terminal;
}

class terminal : public QMainWindow
{
    Q_OBJECT

public:
    explicit terminal(QWidget *parent = 0);
    ~terminal();

private:
    Ui::terminal *ui;
};

#endif // TERMINAL_H
