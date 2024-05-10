#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Funda.hpp"

Funda::Funda(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Funda::gerarForcaAtaque()
{

    return maxForca - minForca;

}

string Funda::gerarRuidoAtaque()
{

    return "POFT";

}
