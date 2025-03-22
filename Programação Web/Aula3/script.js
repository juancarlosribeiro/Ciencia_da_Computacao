
const Gasolina = 5.79;
const Etanol = 4.29;
const Diesel = 6.79;

function atualizarValor(){

        const tipo = document.getElementById("combustivel").value;
        const litros = parseFloat(document.getElementById("litros").value);
        let preçoPorLitro;

        switch (tipo){
            case "gasolina":
                preçoPorLitro = Gasolina;
                break;
            
            case "etanol":
                preçoPorLitro = Etanol;
                break;
            
            case "diesel":
                preçoPorLitro = Diesel;
                break;
            
            default:
                document.getElementById("resultado").textContent = "Tipo Invalido";
                return;


        }

        calculaovalorAbastecimento(preçoPorLitro, litros);


}

function calculaovalor(precoComburente, litros){
    const valorTotal = precoComburente*litros;
}

document.getElementById("litros").addEventListener("input", atualizarValor);
document.getElementById("combustivel").addEventListener("change", atualizarValor);