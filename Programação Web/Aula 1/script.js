console.log("Olá Mundo! O JOGO");

var animal = "Gato";

console.log(animal);
console.log(typeof animal);

animal = "peixe";
console.log(animal);

var nomeCompleto = window.prompt("Nome:  ");
var idade = parseInt( window.prompt("Idade:  "));


console.log(nomeCompleto);
console.log(idade);
console.log(typeof idade);

console.log(`Você se chama ${nomeCompleto} e tem ${idade} anos.`);

console.log(5 == "5"); //comparação = igualdade
console.log(5 === "5"); //estritamente igual