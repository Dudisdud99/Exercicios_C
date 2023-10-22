

function abrirLateral() {
    document.getElementById("lateral").style.width = "20%";
    document.getElementById("lateral").style.padding = "0.5rem";
    document.getElementById("lateral").style.borderRight = "1px solid white";

    document.getElementById("conteudo").style.marginLeft = "22%";
}

function fecharLateral() {
    document.getElementById("lateral").style.width = "0";
    document.getElementById("lateral").style.padding = "0";
    document.getElementById("lateral").style.borderRight = "none";

    document.getElementById("conteudo").style.marginLeft= "0";
}