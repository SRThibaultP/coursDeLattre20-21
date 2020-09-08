<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<title>Cube SA</title>
	<link href="css/style.css" rel="stylesheet" >
	<link rel="icon" type="image/jpg" href="./images/logoCubeSA.jpg" />
	<script language="javascript" src="./js/gestionWEBSOCKET.js"></script>
	<script language="javascript" src="./js/dessiner.js"></script>
	<script language="javascript" src="./js/horloge.js"></script>
	<script src="/socket.io/socket.io.js"></script>

	<script language="javascript" src="./js/alert.js"></script>

	<script language="javascript" src="./js/changer.js"></script>






</head>
<!-- <body onload="gererWS();mettreAJourData();Clock()" > -->




<body onload="gererWS();Clock()" >
	<header>






		<img src="./images/ecole.jpg" id=ecole width=50px height=50px align=right>
		<img src="./images/user.jpg" id=user width=50px height=50px align=left>
		<img src="./images/logoCubeSA.jpg" id=logoCubeSA width=50px height=50px align="left">

		<script type= "text/javascript">



		var image1=document.getElementById("ecole").src;
		var image2=document.getElementById("user").src;
		var image3=document.getElementById("logoCubeSA").src;

		alert(image1 +"\n" +image2  +"\n" +image3);

		</script>


		<h1 id="Titre" onclick="changer()"> Bienvenue </h1>

		<script type="text/javascript">

		var titreDeLaPage=document.getElementById("Titre");
		var texte=titreDeLaPage.innerHTML;

		alert(texte);
</script>




	</header>


	<!--Partie Navigation-->
	<nav>
		<p id="presentationVille"> Prévisions météorologiques</p>
		<!-- code meteo -->
		<div class="input">
			<input type="text" placeholder="Entrez une ville" class="input_text">
			<input type="submit" value="Entrer" class="submit">
		</div>

	<div class="container">
		<div class="card">
			<h1 class="name" id="name"></h1>
			<p class="temp"></p>
			<p class="clouds"></p>
			<p class="desc"></p>
		</div>
	</div>
		<!-- code meteo -->
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
<p id="nomMesure">angle :</p>
<p id="positionVolet" class="etiquette"></p>
</br></br>
<div>
	<!-- Insertion du canvas pour le dessin du toit -->
	<canvas id="myCanvas" width="350"	height="230";></canvas>
</br></br></br>
</div>

</aside>
<!--Fin de la partie aside-->

<!--Pied de page-->
<footer>
	<iframe width="100%" height="300px" frameborder="0" allowfullscreen src="//umap.openstreetmap.fr/fr/map/carte-sans-nom_496221?scaleControl=false&miniMap=false&scrollWheelZoom=false&zoomControl=true&allowEdit=false&moreControl=true&searchControl=null&tilelayersControl=null&embedControl=null&datalayersControl=true&onLoadPanel=undefined&captionBar=false">
	</iframe><p><a href="//umap.openstreetmap.fr/fr/map/carte-sans-nom_496221">Voir en plein écran</a></p>  <!--UMap-->
	<div>Lycée de Lattre de Tassigny 2020 		<p id="insererHorloge"></p>
		<script language="javascript" src="./js/showcss.js"></script>
	</div>

</footer>
<!--Fin de pied de page-->
<script language="javascript" src="./js/meteo.js"></script>
<script language="javascript" src="./js/reverse.js"></script>
<script language="javascript" src="./js/title.js"></script>


</body>
</html>
