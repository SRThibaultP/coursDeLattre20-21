var input = document.querySelector('.input_text');
var main = document.querySelector('#name');
var temp = document.querySelector('.temp');
var desc = document.querySelector('.desc');
var clouds = document.querySelector('.clouds');
var button= document.querySelector('.submit');


button.addEventListener('click', function(name){
fetch('https://api.openweathermap.org/data/2.5/weather?q='+input.value+',fr&unit=metric&lang=fr&appid=896a6ec4b0164b106641e9adba89e088')
.then(response => response.json())
.then(data => {
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
})

.catch(error => alert("Ville inconnue"));
})

function defaultStart(){
  {
  fetch('https://api.openweathermap.org/data/2.5/weather?q=La%20Roche-Sur-Yon,fr&unit=metric&lang=fr&appid=896a6ec4b0164b106641e9adba89e088')
  .then(response => response.json())
  .then(data => {
    //var ville = data['name'];
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
  })

//.catch(err => alert("Erreur?"));
  }
}

defaultStart();
