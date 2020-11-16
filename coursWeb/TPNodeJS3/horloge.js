function Clock()
{
	var Now=new Date();
	var h=Now.getHours();
	var min=Now.getMinutes();
	var s=Now.getSeconds();

	h=LessThanTen(h);
	min=LessThanTen(min);
	s=LessThanTen(s);

	var d=Now.getDate();
	var m=Now.getMonth();
	var a=Now.getFullYear();

	d=LessThanTen(d);

	if (m==0) {m="Janvier";};
	if (m==1) {m="Février";};
	if (m==2) {m="Mars";};
	if (m==3) {m="Avril";};
	if (m==4) {m="Mai";};
	if (m==5) {m="Juin";};
	if (m==6) {m="Juillet";};
	if (m==7) {m="Août";};
	if (m==8) {m="Septembre";};
	if (m==9) {m="Octobre";};
	if (m==10) {m="Novembre";};
	if (m==11) {m="Décembre";};

	dateDuJour = d+" "+m+" "+a+"       -       "+h+":"+min+":"+s;

	document.getElementById('insertClock').innerHTML="Le "+dateDuJour;

	temps=setTimeout(function(){Clock()}, 1000);
}
function LessThanTen(i)
{
	if (i<10)
	  {
	  i="0"+i;
	  }
	return i;
}

function arretDuTemps(){
	clearTimeout(temps);
}
