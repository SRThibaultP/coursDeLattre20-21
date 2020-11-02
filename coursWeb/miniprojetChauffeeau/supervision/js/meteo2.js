const https = require('http');

https.get('http://api.openweathermap.org/data/2.5/weather?q=La Roche-sur-Yon,fr&unit=metric&lang=fr&appid=fdbedff7f6cf7498d6b06c7b4d92b176', (resp) => {
  let data = "";

  // Un morceau de données a été reçu.
  resp.on('data', (chunk) => {
    data += chunk;
  });

  // Toute la réponse a été reçue. Imprimez le résultat.
  resp.on('end', () => {

var test = JSON.parse(data);
var ville= test ['name'];
var vitVent =test ['wind']['speed'];
var dirVent = test ['wind']['deg'];
var temp = test ['main']['temp'] - 273.15;

//console.log (data);
console.log("Il fait "+ temp +" degrés à "+ ville + ", le souffle à une vitesse de "+ vitVent +" km/h et a une direction de " + dirVent+" °.");

  });

}).on("error", (err) => {
  console.log("Error: " + err.message);
});
