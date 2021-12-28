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

/* [] END OF FILE */
