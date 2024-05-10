#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Galho.hpp"

Galho::Galho(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Galho::gerarForcaAtaque()
{

    return maxForca - minForca;

}

string Galho::gerarRuidoAtaque()
{

    return "splash";

}
