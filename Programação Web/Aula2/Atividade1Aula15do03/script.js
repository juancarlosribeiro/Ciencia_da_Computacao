var contaAdor = 0;

var botaoaumenta = document.getElementById("aumenta");
    botaoaumenta.onclick = function(){
        contaAdor += 1;
        console.log(contaAdor);
    }
var botaodiminui = document.getElementById("diminui");
    botaodiminui.onclick = function(){
            if (contaAdor <1){
                alert("Nada de negativos");

            }
            else{
                contaAdor -= 1;
            }
            console.log(contaAdor);

    }

   