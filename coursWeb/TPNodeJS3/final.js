//------------------------------------------------------------------
//                Déclaration des modules
//------------------------------------------------------------------
var http = require('http');
var fs = require('fs');
var fs2=require('fs');
var serialport=require('serialport');
var requete = require('request');
var path = require('path');
//interfaces MAC
//var portArduino = "/dev/cu.usbmodemFD131";
//var portArduino= "/dev/cu.usbserial-AC0091Z0";

//Interfaces LINUX
var portArduino = "/dev/ttyACM0";

eval(fs.readFileSync(__dirname + '/creerFichierData.js')+'');

let apiKey = 'ba515b75f6d15c5417068553e366f063'; //APIKEY météo
let unites='metric';                             // système de mesure "métrique" ou impérial...
let city = 'La Roche-sur-Yon';                   // Ville
var nomVille='La Roche sur Yon';
var dirVent=0;
var vitVent=0;
var temperature=0;
var tempSonde1=0;
var tempSonde2=0;
var angleVolet=0;
var last_capteurs;
var id=0;
var horodatage;

/*
process.on('unhandledRejection', (reason, promise) => {
   console.log('Unhandled Rejection at:', reason.stack || reason)
   // Recommended: send the information to sentry.io
   // or whatever crash reporting service you use
 })*/
//------------------------------------------------------------------
//
//                           SERVEUR HTTP
//
//------------------------------------------------------------------
// Chargement du fichier index.html affiché au client
var server = http.createServer(function(req, res,err)
{
   // if (err) {
   //     throw(err)
   // }
   // else {
   if(req.method == "GET")
   {
      // ---------- On récupère le chemin et l'extention de la  requête
      var filetosend = path.basename(req.url)
      var extfiletosend = path.extname(req.url)

      console.log(filetosend+"."+extfiletosend);
      if(req.url == '/')
      {
         fs.readFile('index.html',function(err,data)
         {
            res.setHeader('Content-Type','text/html')
            res.write(data);
            res.end();
         })
      }

      if(extfiletosend == '.php')
      {
         fs.readFile(filetosend,function(err,data)
         {
            res.setHeader('Content-Type','text/php')
            res.write(data);
            res.end();
         })
      }

      if(extfiletosend == '.css')
      {
         fs.readFile(filetosend,function(err,data)
         {
            res.setHeader('Content-Type','text/css')
            res.write(data);
            res.end();
         })
      }
      if(extfiletosend == '.json')
      {
         fs.readFile(filetosend,function(err,data)
         {
            res.setHeader('Content-Type','text/plain')
            res.write(data);
            res.end();
         })
      }

      if(extfiletosend == '.js')
      {
         fs.readFile(filetosend,function(err,data)
         {
            res.setHeader('Content-Type','application/javascript')
            res.write(data);
            res.end();
         })
      }
      if(extfiletosend == '.txt')
      {
         fs.readFile(filetosend,function(err,data)
         {
            res.setHeader('Content-Type','text/plain')
            res.write(data);
            res.end();
         })
      }
      if(extfiletosend == '.ttf')
      {
         fs.readFile(filetosend,function(err,data)
         {
            res.setHeader('Content-Type','font/ttf')
            res.write(data);
            res.end();
         })
      } if(extfiletosend == '.jpg')
      {
         fs.readFile(filetosend,function(err,data)
         {
            res.setHeader('Content-Type','image/jpg')
            res.write(data);
            res.end();
         })
      }
   }

}).listen(8081); 				// écoute du port « 8081 »

//------------------------------------------------------------------
//
//                           API METEO
//
// Fonction appelée à chaque récéption de data de l'arduino (à peaufiner...)
//------------------------------------------------------------------
function meteo(){
   //-------------------- préparation de l'url...  --------------------
   let url = `http://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${apiKey}&units=${unites}`;
   //-------------------- appel de la requête -------------------------
   requete(url, function (err, response, body) {//appel de l'API
   if(err){
      console.log('error:', err);
   } else {
      let meteo = JSON.parse(body)
      //---- sauvegarde des trois données météo dans 3 variables
      nomVille=meteo.name;
      dirVent=meteo.wind.deg;
      vitVent=meteo.wind.speed;
      temperature=meteo.main.temp;
      //----- debug
      let message = `Actuellement à ${nomVille}, il fait ${meteo.main.temp} degrés, le vent souffle à ${meteo.wind.speed}km/h et a une direction de ${meteo.wind.deg}°`;
      console.log(message);               //message avec les datas extraites
      //--- fin debug
   }
});
}
//------------------------------------------------------------------
//
//                           ARDUINO NANO
//
// Dès réception d'une data, celle-ci est découpée et mémorisée dans 3
// variables "tempSonde1","tempSonde2" et "angleVolet".
//------------------------------------------------------------------
var Readline = serialport.parsers.Readline

// Sélection du port série
var SP1=new serialport(portArduino,{
   //baudrate
   baudRate:9600
});
//-------événement sur l'ouverture du port SP1 ------------------
SP1.on('open', function () {
   console.log('Port com ouvert...')
})
//-------  création du parser "retour ligne"   ------------------
var parser = new Readline()
// ------------------On crée le flux SP1--->parser---------------
SP1.pipe(parser)
//----- événement sur une récéption de données sur le parser ----
parser.on('data', function (data)
{
   id++;
   meteo();
   last_capteurs=data;
   tempSonde1 = last_capteurs.substr(0,4);
   tempSonde2 = last_capteurs.substr(6,4);
   angleVolet = last_capteurs.substr(12,4);
   //dans "creerFichierData.js"
   initialiserMesuresTotal(id, nomVille, vitVent, dirVent, temperature, tempSonde1, tempSonde2, angleVolet);
})
