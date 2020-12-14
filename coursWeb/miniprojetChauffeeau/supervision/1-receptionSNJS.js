const serialport=require("serialport");
const readline = require('@serialport/parser-readline');
const SP1=new serialport("/dev/ttyACM0",{
//baudrate
baudRate:9600
});

//événement sur l'ouverture du port SP1
SP1.on('open', function () {
  console.log('Port com ouvert...')
})

//création parser

const parser =SP1.pipe(new readline({delimiter : '\r\n'}))

//créetion flux SP1

SP1.pipe(parser)

//événement sur la reception de données sur le port SP1

SP1.on('data', function (data) {
  console.log('donnée reçues: ' + data)





})
