var chart;
console.log("Starting grafico.js");
chart = new Highcharts.Chart("grafica",{
chart: {
renderTo: "grafico",
defaultSeriesType: 'spline',
},
title: {
text: 'Weather Cape Luminosity Plot'
},
xAxis: {
type:'datetime',
tickPixelInterval: 150,
maxZoom: 20*1000,
title: {
text: 'Luminosity',
margin: 15
}
},
yAxis: {
minPadding: 0.2,
maxPadding: 0.2,
title: {
text:'Luminosity (lux)',
margin: 15
}
},
series: [{
name:'Weather cape luminosity sensor',
data: []
}]
});

var socket = new io.connect();
socket.on('connect', function() {
  //document.getElementById("status").innerHTML="Connected";
  //$('#animateTest').removeClass().addClass('fadeIn');
});

let i=0;

socket.on('lux', function(data) {
  var myData = parseFloat(data);
  lux = myData;
  console.log(lux);

  let point = [Date.now(),lux];

  if(i >= 45){
  	chart.series[0].addPoint(point, true, true);
  }else{
	 chart.series[0].addPoint(point, true, false);
  }
  
  i++;

});

