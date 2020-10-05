var http = require('http');

var server = http.createServer(function (request, response) {
  //request.setHeader()
  response.write('<p>Bonjour les &eacute;tudiants en 8081</p>');
  response.end();
}
);
server.listen(8081);
