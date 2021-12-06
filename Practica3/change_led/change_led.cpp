#include "change_led.h"
#include "ui_change_led.h"
#include <iostream>
#include <fstream>
#include <unistd.h>
#include <string>

using namespace std;

#define LED0_PATH "/sys/class/leds/beaglebone:green:usr1"

change_led::change_led(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::change_led)
{
    ui->setupUi(this);
}

change_led::~change_led()
{
    delete ui;
}

void change_led::on_pushButton_clicked()
{
    std::fstream fs;

    int estado_actual = 0;

    fs.open(LED0_PATH "/brightness", std::fstream::out);
    fs >> estado_actual;
    fs.close();

    if(estado_actual == 0){
        fs.open (LED0_PATH "/brightness", std::fstream::out);
        fs << "0";
        fs.close();
    }else{
        fs.open (LED0_PATH "/brightness", std::fstream::out);
        fs << "1";
        fs.close();
    }
}

void change_led::on_pushButton_2_clicked()
{
    QApplication::quit();
}
