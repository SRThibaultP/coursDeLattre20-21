const https = require('http');

https.get('http://maps.openweathermap.org/maps/2.0/weather?=La Roche-sur-Yon&appid=f8a19a73a4133795c64f114ad6724b78', (resp) => {
  let data = '';

  // Un morceau de données a été reçu.
  resp.on('data', (chunk) => {
    data += chunk;
  });

  // Toute la réponse a été reçue. Imprimez le résultat.
  resp.on('end', () => {


var test = data;
console.log(data);
  });

}).on("error", (err) => {
  console.log("Error: " + err.message);
});
