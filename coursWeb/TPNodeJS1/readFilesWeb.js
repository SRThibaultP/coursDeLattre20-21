// saucisse  ahah //
var fs = require('fs');
var http = require('http');

//const Ddate = new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds() + ":" + new Date().getMilliseconds()

var deb3 = Date.now();
console.log("Lecture du fichier de 100Mo : " + new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds() + ":" + new Date().getMilliseconds());
//fs.readFileSync('100M.iso', 'utf8');
http.get('http://nodejs.org/dist/index.json', (res) => {

}
var fin3 = Date.now();
console.log("Fin de lecture du fichier de 100Mo : " + new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds() + ":" + new Date().getMilliseconds());
console.log("Temps total : " + (fin3 - deb3) + "ms");
console.log("");

var deb2 = Date.now();
console.log("Lecture du fichier de 10Mo : " + new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds() + ":" + new Date().getMilliseconds());
fs.readFileSync('10M.iso', 'utf8');
var fin2 = Date.now();
console.log("Fin de lecture du fichier de 10Mo : " + new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds() + ":" + new Date().getMilliseconds());
console.log("Temps total : " + (fin2 - deb2) + "ms");
console.log("");

var deb1 = Date.now();
console.log("Lecture du fichier de 1Mo : " + new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds() + ":" + new Date().getMilliseconds());
fs.readFileSync('1M.iso', 'utf8');
var fin1 = Date.now();
console.log("Fin de lecture du fichier de 1Mo : " + new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds() + ":" + new Date().getMilliseconds());
console.log("Temps total : " + (fin1 - deb1) + "ms");
console.log("");

console.log("***************************************************");

var deb3 = Date.now();
console.log("Lecture du fichier de 100Mo : " + new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds() + ":" + new Date().getMilliseconds());
fs.readFile('100M.iso', 'utf8', function (err, data){
  var fin3 = Date.now();
  console.log("Fin de lecture du fichier de 100Mo : " + new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds() + ":" + new Date().getMilliseconds());
  console.log("Temps total : " + (fin3 - deb3) + "ms");
  console.log("");
});

var deb2 = Date.now();
console.log("Lecture du fichier de 10Mo : " + new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds() + ":" + new Date().getMilliseconds());
fs.readFile('10M.iso', 'utf8', function (err, data){
  var fin2 = Date.now();
  console.log("Fin de lecture du fichier de 10Mo : " + new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds() + ":" + new Date().getMilliseconds());
  console.log("Temps total : " + (fin2 - deb2) + "ms");
  console.log("");
});

var deb1 = Date.now();
console.log("Lecture du fichier de 1Mo : " + new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds() + ":" + new Date().getMilliseconds());
fs.readFile('1M.iso', 'utf8', function (err, data){
  var fin1 = Date.now();
  console.log("Fin de lecture du fichier de 1Mo : " + new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds() + ":" + new Date().getMilliseconds());
  console.log("Temps total : " + (fin1 - deb1) + "ms");
  console.log("");
});
