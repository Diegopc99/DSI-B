/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
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

/* [] END OF FILE */
