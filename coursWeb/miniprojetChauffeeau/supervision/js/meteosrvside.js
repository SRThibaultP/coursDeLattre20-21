var meteojs = JSON.parse(meteo);
var ville = meteojs[0].name;
var tempRaw = meteojs[0].main.temp;
var wind = meteojs[0].wind.speed;
var direction = meteojs[0].wind.deg;
tempCel = tempRaw - 273.15;
var heureCouSol = meteojs[0].sys.sunset;
var heureLevSol = meteojs[0].sys.sunrise;

document.getElementById("Temperature").innerHTML = tempCel.toFixed(1) + "°C";
document.getElementById("VitesseVent").innerHTML = wind + "m/s";
document.getElementById("DirectionVent").innerHTML = direction + "°";
document.getElementById("nomVille").innerHTML = ville;

document.getElementById("heureLevSol").innerHTML = bhours(heureLevSol);

/*
var AngleIncSol = ;
var vitVent = ;
var dirVent = ;
var etatSysteme = ;
*/

document.getElementById("heureCouSol").innerHTML = bhours(heureCouSol);

function bhours(rawhours){
  var date = new Date(rawhours * 1000);
// Hours part from the timestamp
var hours = "0" + date.getHours();
// Minutes part from the timestamp
var minutes = "0" + date.getMinutes();
// Seconds part from the timestamp
var seconds = "0" + date.getSeconds();

// Will display time in 10:30:23 format
return hours.substr(-2) + ':' + minutes.substr(-2) + ':' + seconds.substr(-2);

}
