# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\ubald\Documents\PSoC Creator\Ejercicio2\PWM.cydsn\PWM.cyprj
# Date: Tue, 28 Dec 2021 13:02:24 GMT
#set_units -time ns
create_clock -name {Clock_1(FFB)} -period 83.333333333333329 -waveform {0 41.6666666666667} [list [get_pins {ClockBlock/ff_div_6}]]
create_clock -name {CyILO} -period 25000 -waveform {0 12500} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFClk} -period 25000 -waveform {0 12500} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySysClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/hfclk}] -edges {1 3 5} [list]


# Component constraints for C:\Users\ubald\Documents\PSoC Creator\Ejercicio2\PWM.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\ubald\Documents\PSoC Creator\Ejercicio2\PWM.cydsn\PWM.cyprj
# Date: Tue, 28 Dec 2021 13:02:23 GMT