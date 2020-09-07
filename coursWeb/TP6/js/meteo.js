var input = document.querySelector('.input_text');
var main = document.querySelector('#name');
var temp = document.querySelector('.temp');
var desc = document.querySelector('.desc');
var clouds = document.querySelector('.clouds');
var button= document.querySelector('.submit');

button.addEventListener('click', function(name){
fetch('https://api.openweathermap.org/data/2.5/weather?q='+input.value+'&appid=896a6ec4b0164b106641e9adba89e088')
.then(response => response.json())
.then(data => {
  var ville = data['name'];
  var tempRaw = data['main']['temp'];
  var sky = data['weather'][0]['description'];
  tempCel = tempRaw - 273.15; // kelvin - 273,15 = °C
  main.innerHTML = ville;
  temp.innerHTML = "Température : " + tempCel.toFixed(1) + "°C";
  desc.innerHTML = "Description : " + sky;
})

.catch(err => alert("Ville inconnue"));
})
