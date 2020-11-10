var serialport=require("serialport");
const Readline = require('readline');
var SP1=new serialport("/dev/ttyUSB0",{
//baudrate
baudRate:9600
});

//événement sur l'ouverture du port SP1
SP1.on('open', function () {
  console.log('Port com ouvert...')
})

//événement sur la reception de données sur le port SP1

SP1.on('data', function (data) {
  console.log('donnée reçues: ' + data)




})
