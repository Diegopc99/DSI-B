var b = require('bonescript');

b.analogRead('P9_39',printStatus);
function printStatus(x) {
	console.log('x.value = ' + x.value);
}

