<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<title>Cube SA</title>
	<link href="css/style.css" rel="stylesheet" >
	<link rel="icon" type="image/jpg" href="./images/logoCubeSA.jpg" />
	<script language="javascript" src="./js/horloge.js" ></script>
	<script language="javascript" src="./js/gestionWEBSOCKET.js"></script>
	<script language="javascript" src="./js/dessiner.js"></script>
	<script src="/socket.io/socket.io.js"></script>
	<script language="javascript" src="./js/suncalc.js"></script>
	<script language="javascript" src="datameteo.json"></script>

</head>
<!-- <body onload="gererWS();mettreAJourData();Clock()" > -->

<body onload="gererWS();Clock();defaultStart();" >
	<header>
		<img src="./images/logoCubeSA.jpg" alt=logoCubeSA width=50px height=50px align="left">
		Supervision chauffe eau solaire thermique
	</header>
	<!--Partie Navigation-->
	<nav>
		<p id="presentationVille"> Prévisions météorologiques</p>
		<p id="nomVille">La Roche-sur-Yon</p>
	</nav>
	<!--Fin de la partie navigation-->

	<!--AFFICHAGE TEMPÉRATURE-->
	<aside id="TEMP"><div class="separation">	<a>Températures</a></div>
		<img src="./images/celsius.png" alt=celsius width=50px height=50px align="left" >
	</br>
</br>
<p id="nomMesure" position= "absolute" >Sonde 1: échangeur</p>
<p id="TemperatureSonde1" class="etiquette"></p>
</br>
</br>
<p id="nomMesure">Sonde 2 : ballon</p>
<p id="TemperatureSonde2" class="etiquette"></p>
</br>
</br>
<p id="nomMesure">Extérieure :</p>
<p id="Temperature" class="etiquette"></p>
</aside>
<!--AFFICHAGE INFORMATIONS VENT-->
<aside id="VENT">	<div class="separation"><a>Vent</a></div>
	<img src="./images/eolienne.gif " alt=éolienne width=50px height=50px align="left"  >	</br>
	<img src="./images/eolienne.gif " alt=éolienne width=30px height=30px align="left"  >
</br>
<p id="nomMesure">Vitesse :</p>
<p id="VitesseVent" class="etiquette"></p></br>
</br>
</br>
<p id="nomMesure">Direction :</p>
<p id="DirectionVent" class="etiquette"></p>
</aside>
<!--AFFICHAGE INFORMATION VOLET-->

<aside id="schemaVolet"> <div class="separation"><a>Volet</a></div>

</br>
<form class="input" id="bouton2" style="display: none;" method="post">
	<input type="text" placeholder="Entrez une ville" class="input_text" name="ville">
	<input type="submit" value="Entrer">
</form>
</br>

<p id="nomMesure">Angle :</p>
<p id="positionVolet" class="etiquette"></p>
<br> </br>

<br> </br>

<p1> Pilotage automatique </p1>




<label class="switch">
	<input type="checkbox"  onClick="Leswitch()"  >
	<span class="slider round">

	</span>
</label>

<p2> Pilotage manuel </p2>



<div class="range-wrap" id="bouton" style="display: none;">


	<div class="range-value" id="rangeV"></div>
	<input id="range" type="range" min="0" max="180" value="90" step="1">

</div>
<form class="panneau" id="panneau" method="post">
	<input type="submit" value="DESCENTE" name="panneau">
	<input type="submit" value="MONTEE" name="panneau">
</form>
</br>
<p id="nomMesure">Etat du système</p>
<p id="etatSysteme" class="etiquette"></p>
</br>
</br></br>
<div>
	<!-- Insertion du canvas pour le dessin du toit -->
	<canvas id="myCanvas" width="350"	height="230";></canvas>
</br></br></br>
</div>

<aside id="SOLEIL">	<div class="separation"><a>Soleil</a></div>
	<p id="nomMesure">Levé :</p>
	<p id="heureLevSol" class="etiquette"></p></br>
</br>
</br>
<p id="nomMesure">Couché :</p>
<p id="heureCouSol" class="etiquette"></p>
</aside>

</aside>
<!--Fin de la partie aside-->

<!--Pied de page-->
<footer >
	<div>Lycée de Lattre de Tassigny 2019 		<p id="insererHorloge" ></p>
	</div>

</footer>
<!--Fin de pied de page-->
<script language="javascript" src="./js/slider.js"></script>
<script language="javascript" src="./js/meteo.js"></script>
<script language="javascript" src="./js/alert.js"></script>
<script language="javascript" src="./js/meteosrvside.js"></script>
</body>
</html>
