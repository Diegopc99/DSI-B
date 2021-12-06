#include "contador.h"
#include "ui_contador.h"

int count =0;

contador::contador(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::contador)
{
    ui->setupUi(this);
}

contador::~contador()
{
    delete ui;
}

void contador::on_pushButton_clicked()
{
    count ++;
    ui->lcdNumber->display(count);
}
