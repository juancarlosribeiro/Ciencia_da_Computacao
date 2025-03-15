var meuElemento = document.getElementById("paragrafo");
console.log(meuElemento);
console.log(meuElemento.textContent);

var paragrafo1 = document.getElementsByClassName("paragrafo");
console.log(paragrafo1);

for(let i=0; i<paragrafo1.length; i++){
    console.log(paragrafo1[i].textContent);
}

var cabecalho = document.querySelector(".cabecalho");
console.log(cabecalho.textContent);

var cabecalho = document.querySelectorAll(".cabecalho");
console.log(cabecalho.textContent);

var botao1 = document.getElementById("botao1");
botao1.onclick = function(){

    alert("Clicaste vagabundo");
    botao1.textContent = "Ciclonado";

}

var botadao2 = document.getElementById("botadao2");

botadao2.addEventListener("mouseover",function(){
    botadao2.style.background= "blue";
})

botadao2.addEventListener("mouseout",function(){
    botadao2.style.background= "";


})

botadao2.addEventListener("click", function(){
    alert("Clico carai");


})