
// set defaults
var lux = 0;
var lmax = 2000;
var lmin = 0;
var lunit = " lux";

console.log("arrincando weatherstation.js");

var setWidth = function() {
  var canvasWidth = window.innerWidth * 0.9;
  if ( canvasWidth > (1.8 * window.innerHeight)) {
    canvasWidth = 1.8 * window.innerHeight;
    $('#heading').hide();
  } else
    $('#heading').show();

  lightWidth = canvasWidth*0.25;

  console.log("nova width");
};
setWidth();

var lightSketchProc = function(p) {
  p.size(lightWidth, 2*lightWidth);
  p.draw = function() {
    p.size(lightWidth, 2*lightWidth);
    lightWidth=p.width;
    p.background(0,0);

    // contour
    p.stroke(0);
    p.strokeWeight(lightWidth*0.01);
    if(lux > (3*255))
      lux = (3*255 - 10);
    p.fill(lux/3 + 10);
    p.ellipse(lightWidth/2,lightWidth,lightWidth/2,lightWidth/2);

    myText = lux + lunit;
    p.fill(0, 0, 0);
    p.textSize(Math.round(lightWidth*0.09));
    myWidth = p.textWidth(myText);
    p.text(myText, lightWidth/2 - myWidth/2, lightWidth*1.4 + lightWidth*0.045);
  };
  p.noLoop();
}
var lightCanvas = document.getElementById("lightCanvas");
var light = new Processing(lightCanvas, lightSketchProc);


var socket = new io.connect();
socket.on('connect', function() {
  document.getElementById("status").innerHTML="Connected";
  $('#animateTest').removeClass().addClass('fadeIn');
});

socket.on('lux', function(data) {
  var myData = parseFloat(data);
  lux = myData;
  light.redraw();
  document.getElementById("light").innerHTML=lux + " lux"; 
});


window.onresize=resizeHandler;
function resizeHandler(){
  setWidth();
  light.redraw();
}
