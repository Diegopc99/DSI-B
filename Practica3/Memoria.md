
# Practica 3 DSI B

## 3.4 HellWorld command line

Para la realizacion de este apartado seguimos los pasos especificados en la practica hasta compilacion con el makefile. Una vez tenemos todos los archivos necesarios nos conectamos por sftp a root@192.168.7.2 y hacemos un put de la carpeta helloworld en el directorio /root/ de la BBB para asi poder ejecutarlo.

```bash
sftp root@192.168.7.2

put -r helloworld/
```

Si no podemos acceder seguimos los pasos especificados en la practica para poder acceder por ssh a root.\
Una vez tenemos los archivos ya en la carpeta /root/helloworld/ de la BBB hacemos `./helloworld` para ejecutar el programa y ver HelloWorld en pantalla (para poder acceder por ssh a la carpeta de root tenemos que entrar con `sudo su`). 

## 3.5.1 Setup environment

Seguimos los pasos especificados en la practica, pero relizamos dos modificaciones que no aparecen:

Compilador:

Seguimos los pasos de la practica hasta el paso de creacion del compilador en el cual a mayores del que nos manda crear en la practica, tenemos que anadir uno mas para la version de C con el mismo archivo gcc.

Kits:

Seguimos los pasos indicados en la practica hasta donde hace referencia a la seleccion del debugger donde nos iremos a debuggers y anadimos uno manualmente con el archivo que nos pone en la practica.


## Tarea 1 

Los ficheros para la realizacion de la tarea estan en la carpeta Contador. \
Creamos un boton y un display lcd en la pantalla de edicion de la ui, le hacemos click derecho al boton y seleccionamos la opcion de seleccionar slot y seguidamente la opcion de click(). Esto nos creara en el fichero contador.cpp la funcion en donde colocaremos la logica para incrementar el display lcd.

```cpp
#include "contador.h"
#include "ui_contador.h"

int count = 0;

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
```

Creamos una variable global con el numero del contador y lo incrementamos cada vez que se pulse el boton. Ademas hacemos una actualizacion del display tras cada click en el boton.

## Tarea 2 

Los ficheros para la realizacion de la tarea estan el la carpeta change_led.\
Realizamos los mismos pasos que para la tarea anterior pero anadiendo 2 botones con sus 2 funciones, una para cambiar el estado del led y la otra para salir de la aplicacion.

```cpp
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
```

Si pulsamos el boton EXIT se trigerea la funcion on_pushButton_2_clicked() la cual sale de la plicacion. En caso de pulsar el boton LED, se comprueba el estado del led y se cambia al contrario.
