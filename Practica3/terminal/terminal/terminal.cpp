#include "terminal.h"
#include "ui_terminal.h"

terminal::terminal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::terminal)
{
    ui->setupUi(this);
}

terminal::~terminal()
{
    delete ui;
}
