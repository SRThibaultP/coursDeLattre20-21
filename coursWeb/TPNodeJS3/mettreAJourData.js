
function mettreAJourData() {
   var jsonString=dernieresData();
   console.log(jsonString);

   var doc=document.getElementById('presentationVille').innerHTML="Actuellement à "+jsonString.nomVille;


   var doc=document.getElementById('VitesseVent').innerHTML=jsonString.vitVent+" m/s";
   var doc=document.getElementById('DirectionVent').innerHTML=jsonString.dirVent+" °";
   var doc=document.getElementById('Temperature').innerHTML=jsonString.temperature+" °C";
   var doc=document.getElementById('TemperatureSonde1').innerHTML=jsonString.tempSonde1+" °C";
   var doc=document.getElementById('TemperatureSonde2').innerHTML=jsonString.tempSonde2+" °C";
   var doc=document.getElementById('positionVolet').innerHTML=jsonString.angleVolet+" °";


}
