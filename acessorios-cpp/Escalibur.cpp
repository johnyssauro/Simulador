#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Escalibur.hpp"

Escalibur::Escalibur(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Escalibur::gerarForcaAtaque()
{

    return maxForca - minForca;

}

string Escalibur::gerarRuidoAtaque()
{

    return "spin spin";

}

