function Leswitch() {

  var x = document.getElementById("bouton");
  if (x.style.display === "none") {
    x.style.display = "block";

  } else {
    x.style.display = "none";
  }

  var x = document.getElementById("bouton2");
  if (x.style.display === "none") {
    x.style.display = "block";
    document.getElementById ('schemaVolet').style.borderColor="red";
  } else {
    x.style.display = "none";
    document.getElementById ('schemaVolet').style.borderColor="#a29d9d";
  }
}
