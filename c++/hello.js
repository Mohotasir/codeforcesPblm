var http = require('http');
let fs = require('fs');

http.createServer(function (req, res) {
  res.writeHead(200, {'Content-Type': 'text/html'});
  res.end('how aerre you');
}).listen(8080);


http.createServer(function(req,res){
    res.writeHead(200,{'content-Type': 'text/html'});
    res.end("hello");
}).listen(1000);

exports.myDateTime = function () {
    return Date();
  };