var http = require('http');

var server = http.createServer(function (request, response) {
  response.write('Bonjour les \u00e9tudiants');
  response.end();
}
);
server.listen(8080);
