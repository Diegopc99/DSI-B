var http = require('http');
var socketio = require('socket.io');
var b = require('bonescript');
var fs = require('fs');
var path = require('path');

var app = http.createServer(handler);
var io = socketio.listen(app);

luxConfig = {
  file: "/sys/bus/iio/devices/iio:device0/in_voltage0_raw", 
  unit: "lumen",
  delay: 2000,
  scale: 1000,
  rangeHigh: 2000,
  rangeLow: 0,
};

app.listen(8888);

function handler (req, res) {

  var filePath = req.url;

  if (filePath == '/') {
    filePath = './web/index.html';
  } else {
    filePath = './web/' + req.url;
  }

  var extname = path.extname(filePath);

  var contentType = 'text/html';

  switch (extname) {
    case '.js':
      contentType = 'text/javascript';
      break;
    case '.css':
      contentType = 'text/css';
      break;
  }

  fs.exists(filePath, function(exists) {

    if (exists) {
      fs.readFile(filePath, function(error, content) {
        if (error) {
          res.writeHead(500);
          res.end();
        }
        else {
          res.writeHead(200, { 'Content-Type': contentType });
          res.end(content, 'utf-8');
        }
      });
    }
    else {
      res.writeHead(404);
      res.end();
    }
  });

}

io.sockets.on('connection', function (socket) {
  console.log("New client connected");

  var lfileData = luxConfig.file;

  var lreadData = function() {
    fs.readFile(lfileData, function(err, data) {
      if(err) {console.log("Unable to read data: " + err); /*return;*/}
      socket.emit('lux', "" + data);
      setTimeout(lreadData, 500);
    });
  };

  setTimeout(lreadData, 500);

  // on message
  socket.on('message', function(data) {
    console.log("Got message from client:", data);
  });

  // on disconnect
  socket.on('disconnect', function() {
    console.log("Client disconnected.");
  });

});


