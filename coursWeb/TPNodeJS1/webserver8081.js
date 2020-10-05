var http = require('http');

var server = http.createServer(function (request, response) {
  response.write('Bonjour les étudiants en 8081');
  response.end();
}
);
server.listen(8081);
