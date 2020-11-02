var http = require('http');
var fs = require('fs');
var path = require('path');
var request = require('request');

request({
  'url':'http://api.openweathermap.org/data/2.5/weather?q=La Roche-sur-Yon,fr&unit=metric&lang=fr&appid=fdbedff7f6cf7498d6b06c7b4d92b176',
  'method': "GET",
  'proxy':'http://192.168.10.254:3128'
},function (error, response, body) {
  if (!error && response.statusCode == 200) {
    //console.log(body);
    bodyjs = JSON.parse(body);

    fs.writeFile('datameteo.json', body, (err) => {
      if (err) throw err;
      console.log('Data written to file');
    })

    var ville= bodyjs ['name'];
    var vitVent =bodyjs ['wind']['speed'];
    var dirVent = bodyjs ['wind']['deg'];
    var temp = bodyjs ['main']['temp'] - 273.15;

    console.log("Il fait "+ temp +" degrés à "+ ville + ", le souffle à une vitesse de "+ vitVent +" km/h et a une direction de " + dirVent+" °.");
  }
})
/*
http.get('http://api.openweathermap.org/data/2.5/weather?q=La Roche-sur-Yon,fr&unit=metric&lang=fr&appid=fdbedff7f6cf7498d6b06c7b4d92b176', (resp) => {
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

//console.log (test);
console.log("Il fait "+ temp +" degrés à "+ ville + ", le souffle à une vitesse de "+ vitVent +" km/h et a une direction de " + dirVent+" °.");

  });

}).on("error", (err) => {
  console.log("Error: " + err.message);
});
*/

http.createServer(function (request, response) {
    //console.log('request starting...');

    var filePath = '.' + request.url;
    if (filePath == './')
        filePath = './index.php';

    var extname = path.extname(filePath);
    var contentType = 'text/html';
    switch (extname) {
        case '.js':
            contentType = 'text/javascript';
            break;
        case '.css':
            contentType = 'text/css';
            break;
        case '.json':
            contentType = 'application/json';
            break;
        case '.png':
            contentType = 'image/png';
            break;
        case '.jpg':
            contentType = 'image/jpg';
            break;
        case '.wav':
            contentType = 'audio/wav';
            break;
    }

    fs.readFile(filePath, function(error, content) {
        if (error) {
            if(error.code == 'ENOENT'){
                fs.readFile('./404.html', function(error, content) {
                    response.writeHead(200, { 'Content-Type': contentType });
                    response.end(content, 'utf-8');
                });
            }
            else {
                response.writeHead(500);
                response.end('Sorry, check with the site admin for error: '+error.code+' ..\n');
                response.end();
            }
        }
        else {
            response.writeHead(200, { 'Content-Type': contentType });
            response.end(content, 'utf-8');
        }
    });

    var body = "";
    request.on('data', function (chunk) {
      //console.log(chunk)
      body += chunk;
    });

    request.on('end', function () {
        console.log(body);
      //request.writeHead(200);
      //request.end(postHTML);
    });

}).listen(80);
console.log('Server running at http://127.0.0.1:80/');
