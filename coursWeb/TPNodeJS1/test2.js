const https = require('https');

https.get('https://bouygues.testdebit.info/100M.iso', (resp) => {
  console.log("100deb");
  let data = '';

  // A chunk of data has been received.
  resp.on('data', (chunk) => {
    data += chunk;
  });

  // The whole response has been received. Print out the result.
  resp.on('end', () => {
    //console.log(JSON.parse(data).explanation);
  });
  console.log("100fin");


}).on("error", (err) => {
  console.log("Error: " + err.message);
});

https.get('https://bouygues.testdebit.info/10M.iso', (resp) => {
  console.log("10deb");
  let data = '';

  // A chunk of data has been received.
  resp.on('data', (chunk) => {
    data += chunk;
  });

  // The whole response has been received. Print out the result.
  resp.on('end', () => {
    //console.log(JSON.parse(data).explanation);
  });
  console.log("10fin");


}).on("error", (err) => {
  console.log("Error: " + err.message);
});
