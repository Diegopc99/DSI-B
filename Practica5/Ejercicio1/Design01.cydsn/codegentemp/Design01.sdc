# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\ubald\Documents\PSoC Creator\Ejercicio1\Design01.cydsn\Design01.cyprj
# Date: Tue, 30 Nov 2021 15:38:35 GMT
#set_units -time ns
create_clock -name {CyILO} -period 25000 -waveform {0 12500} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFClk} -period 25000 -waveform {0 12500} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySysClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/sysclk}]]


# Component constraints for C:\Users\ubald\Documents\PSoC Creator\Ejercicio1\Design01.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\ubald\Documents\PSoC Creator\Ejercicio1\Design01.cydsn\Design01.cyprj
# Date: Tue, 30 Nov 2021 15:38:33 GMT