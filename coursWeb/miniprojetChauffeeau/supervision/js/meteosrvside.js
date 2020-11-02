const fs = require('fs');

fs.readFile('../datameteo.json', (err, data) => {
    if (err) throw err;
    var ville = data['name'];
    var tempRaw = data['main']['temp'];
    //var sky = data['weather'][0]['description'];
    var wind = data['wind']['speed'];
    var direction = data['wind']['deg'];
    tempCel = tempRaw - 273.15; // kelvin - 273,15 = °C
    //main.innerHTML = ville;
    //temp.innerHTML = "Température : " + tempCel.toFixed(1) + "°C";
    //desc.innerHTML = "Description : " + sky;
    document.getElementById("Temperature").innerHTML = tempCel.toFixed(1) + "°C";
    document.getElementById("VitesseVent").innerHTML = wind + "m/s";
    document.getElementById("DirectionVent").innerHTML = direction + "°";
    document.getElementById("nomVille").innerHTML = ville;
});

console.log('This is after the read call');
