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