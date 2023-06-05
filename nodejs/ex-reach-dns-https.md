```
const https = require('https');
const dns = require('dns');

// List of hosts to test
const hosts = ['google.com', 'example.com', 'github.com', 'npmjs.com'];

// Function to test reachability of each host
function testReachability(host) {
  return new Promise((resolve, reject) => {
    // Perform DNS resolution and display debugging information
    dns.lookup(host, (error, address) => {
      if (error) {
        console.error(`DNS resolution failed for ${host}: ${error}`);
        reject();
        return;
      }

      console.log(`Resolved ${host} to IP address: ${address}`);

      const options = {
        method: 'HEAD',
        hostname: host,
        port: 443,
        timeout: 5000 // Set the timeout for the request (in milliseconds)
      };

      const req = https.request(options, (res) => {
        resolve(`${host} is reachable (HTTP ${res.statusCode})`);
      });

      req.on('error', (error) => {
        reject(`${host} is unreachable (${error.message})`);
      });

      req.end();
    });
  });
}

// Test reachability for each host in parallel
async function testAllHosts() {
  try {
    const results = await Promise.all(hosts.map(testReachability));
    results.forEach((result) => {
      console.log(result);
    });
  } catch (error) {
    console.error(`Error while testing reachability: ${error}`);
  }
}

// Start testing
testAllHosts();
```
