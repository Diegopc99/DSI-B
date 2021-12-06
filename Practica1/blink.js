#!/usr/bin/env node
var b = require('bonescript');

/*var leds = ["USR0", "USR1", "USR2", "USR3", "P9_14"];*/
var leds = ["USR0", "USR1", "USR2", "USR3"];

for(var i in leds) {
    b.pinMode(leds[i], b.OUTPUT);
}

var loop = 0;

var state = b.LOW;
var LOW = b.LOW;

for(var i in leds) {
    b.digitalWrite(leds[i],state);
}   

setInterval(toggle, 1000);

function toggle() {

    //if(state == b.LOW) state = b.HIGH;
    //else state = b.LOW;
    
    for(var i in leds) {
        if(i == loop){
            b.digitalWrite(leds[i],b.HIGH);
        }else{
            b.digitalWrite(leds[i],b.LOW);
        }
    }
    loop++;
    if (loop == 4){
    loop = 0;
}
}
