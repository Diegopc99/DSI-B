# Practica 5

## Hello World

El codigo para la realizacion de este ejercicio esta en el directorio Ejercicio1. Para la realizacion de este ejercicio creamos un esquematico con un PIN digital asociado al led 3.4 de la placa.
En la carpeta Ejercicio1 se adjunta una prueba del funcionamiento del ejercicio.

Codigo del main:

```c
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
        
    {
        /* Place your application code here. */
        Pin_Blink_Write(~Pin_Blink_Read());
        CyDelay(500);
    }
}
```

## PWM Controlled LED

El codigo para la realizacion de este ejercicio esta en el directorio Ejercicio2. Para la realizacion de este ejercicio creamos en el esquematico con un PWM, un reloj y un PIN digital configurados siguiendo la practica.

En la carpeta Ejercicio2 se adjunta una prueba del funcionamiento del ejercicio.

Codigo del main:

```c
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    PWM_1_Start();
    uint16 PWMCompare;

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        PWMCompare = PWMCompare + 1;
        if (PWMCompare >= 1000){
            PWMCompare = 0;
        }
        PWM_1_WriteCompare(PWMCompare);
        CyDelay(1);
    }
}
```

## CapSense 

El codigo para la realizacion de este ejercicio esta en el directorio Ejercicio3. Para la realizacion de este ejercicio creamos un esquematico con un linear slider, para detectar el movimiento del dedo sobre el slider de la placa, junto con la UART para poder ver posteriormente en una terminal los valores obtenidos. Todo esto siguiendo los pasos especificados en la practica.

En la carpeta Ejercicio3 se adjunta una prueba del funcionamiento del ejercicio.

Codigo del main:

```c
#include "project.h"
#include <stdio.h>

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    CapSense_1_Start();
    CapSense_1_ScanAllWidgets();
    UART_1_Start();
    UART_1_UartPutString("Hello!\r\n");
    
    uint16 sliderval;
    uint16 oldsliderval = 0xFFFF;
    char msg[10];

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        if(! CapSense_1_IsBusy()){
            CapSense_1_ProcessAllWidgets();
            sliderval = CapSense_1_GetCentroidPos(CapSense_1_LINEARSLIDER0_WDGT_ID);
            if( sliderval != 0xFFFF && oldsliderval != sliderval){
                sliderval = CapSense_1_GetCentroidPos(CapSense_1_LINEARSLIDER0_WDGT_ID);
                sprintf(msg, "%3d\r\n", sliderval);
                UART_1_UartPutString(msg);
                oldsliderval = sliderval;
            }
            CapSense_1_RunTuner();
            CapSense_1_ScanAllWidgets();
        }
    }
}
```

## Servo

El codigo para la realizacion de este ejercicio esta en el directorio Ejercicio4. Para la realizacion de este ejercicio creamos un esquematico con un linear slider, una UART para poder ver los valores y debuggear, un modulo PWM y un PIN digital para poder enviar los datos de salida del PWM al cable de control del motor.

En la carpeta Ejercicio4 se adjunta una prueba del funcionamiento del ejercicio.

Codigo del main:

```c
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    CapSense_1_Start();
    CapSense_1_ScanAllWidgets();
    PWM_1_Start();
    UART_1_Start();
    UART_1_UartPutString("Iniciando...\r\n");
    uint16 sliderval;
    uint16 oldsliderval = 0xFFFF;
    uint16 pwm_value;
    char dato[10];


    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        if(! CapSense_1_IsBusy()){
            
            PWM_1_WriteCompare(1000);
        
            CapSense_1_ProcessAllWidgets();
            sliderval = CapSense_1_GetCentroidPos(CapSense_1_LINEARSLIDER0_WDGT_ID);
            
            if( sliderval != 0xFFFF && oldsliderval != sliderval){
                sliderval = CapSense_1_GetCentroidPos(CapSense_1_LINEARSLIDER0_WDGT_ID);
                sprintf(dato, "%3d\r\n",((sliderval * (4000/100)) + 1000));
                UART_1_UartPutString(dato);
                oldsliderval = sliderval;
            }
           
            
            CapSense_1_RunTuner();
            CapSense_1_ScanAllWidgets();
            
            pwm_value = (sliderval * (4000/100)) + 1000;
        
            PWM_1_WriteCompare(4000);
        }
    }
}
```