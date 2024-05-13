#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/GatoEndiabrado.hpp"

GatoEndiabrado::GatoEndiabrado(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int GatoEndiabrado::gerarForcaAtaque()
{

    return maxForca - minForca;

}

string GatoEndiabrado::gerarRuidoAtaque()
{

    return "MIAAAAAAAAAU";

}
