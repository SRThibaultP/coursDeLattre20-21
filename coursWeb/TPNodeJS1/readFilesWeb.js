const https = require('https');

/*https.get('https://bouygues.testdebit.info/100M.iso', (resp) => {
  var deb3 = Date.now();
  console.log("Lecture du fichier de 100Mo : " + new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds() + ":" + new Date().getMilliseconds());
  let data = '';

  // A chunk of data has been received.
  resp.on('data', (chunk) => {
    data += chunk;
  });

  // The whole response has been received. Print out the result.
  resp.on('end', () => {
    //console.log(JSON.parse(data).explanation);
    var fin3 = Date.now();
    console.log("Fin de lecture du fichier de 100Mo : " + new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds() + ":" + new Date().getMilliseconds());
    console.log("Temps total : " + (fin3 - deb3) + "ms");
    console.log("");
  });


}).on("error", (err) => {
  console.log("Error: " + err.message);
});*/

https.get('https://bouygues.testdebit.info/10M.iso', (resp) => {
  var deb2 = Date.now();
  console.log("Lecture du fichier de 10Mo : " + new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds() + ":" + new Date().getMilliseconds());
  let data = '';

  // A chunk of data has been received.
  resp.on('data', (chunk) => {
    data += chunk;
  });

  // The whole response has been received. Print out the result.
  resp.on('end', () => {
    //console.log(JSON.parse(data).explanation);
    var fin2 = Date.now();
    console.log("Fin de lecture du fichier de 10Mo : " + new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds() + ":" + new Date().getMilliseconds());
    console.log("Temps total : " + (fin2 - deb2) + "ms");
    console.log("");
  });


}).on("error", (err) => {
  console.log("Error: " + err.message);
});

https.get('https://bouygues.testdebit.info/1M.iso', (resp) => {
  var deb1 = Date.now();
  console.log("Lecture du fichier de 1Mo : " + new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds() + ":" + new Date().getMilliseconds());
  let data = '';

  // A chunk of data has been received.
  resp.on('data', (chunk) => {
    data += chunk;
  });

  // The whole response has been received. Print out the result.
  resp.on('end', () => {
    //console.log(JSON.parse(data).explanation);
    var fin1 = Date.now();
    console.log("Fin de lecture du fichier de 1Mo : " + new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds() + ":" + new Date().getMilliseconds());
    console.log("Temps total : " + (fin1 - deb1) + "ms");
    console.log("");
  });


}).on("error", (err) => {
  console.log("Error: " + err.message);
});
