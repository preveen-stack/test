const http = require('http');
const fs = require('fs');

const fileStream = fs.createReadStream('large_file.wav');

const options = {
  method: 'POST',
  headers: {
    'Content-Type': 'application/octet-stream' // set the content type to octet-stream
  }
};

const req = http.request('http://127.0.0.1:8080', options, (res) => {
  console.log('Response:', res.statusCode);
});

fileStream.pipe(req);

req.on('error', (error) => {
  console.error('Error:', error);
});

req.end();
