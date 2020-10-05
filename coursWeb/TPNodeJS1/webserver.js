var http = require('http');

var server = http.createServer(function (request, response) {
  response.write('<p>Bonjour les &eacute;tudiants</p>');
  response.end();
}
);
server.listen(8080);
