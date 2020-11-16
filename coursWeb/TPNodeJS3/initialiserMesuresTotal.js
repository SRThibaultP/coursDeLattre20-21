
   function initialiserMesuresTotal(id, nomVille,vitVent,dirVent,temperature,tempSonde1,tempSonde2,angleVolet){
// le fichier
string1=nomVille.replace("-","\-");
string2=string1.replace("-","\-");
var jsonString = "{\"id\":"+id+",\"nomVille\":\""+string2+"\",\"vitVent\":"+vitVent+",\"dirVent\":"+dirVent+",\"temperature\":"+temperature+",\"tempSonde1\":"+tempSonde1+",\"tempSonde2\":"+tempSonde2+",\"angleVolet\":"+angleVolet+"}";
console.log(jsonString);
   fs.writeFile ("mesuresTotal.js",
   "function dernieresData() {"+"\n"+
   "var jsonString="
   +jsonString+";"+"\n"+
   "return jsonString;"+"\n"+
   "}"
   , function(err){
      if(err)return console.log(err);
   });
return jsonString;
}
