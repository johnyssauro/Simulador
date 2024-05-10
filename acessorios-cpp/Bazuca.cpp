#include "../acessorios-hpp/Bazuca.hpp"
#include "../core-simulador-hpp/ArmaAtaque.hpp"

Bazuca::Bazuca(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{
    
}

int Bazuca::gerarForcaAtaque()
{

    return maxForca - minForca;

}

string Bazuca::gerarRuidoAtaque()
{

    return "KABOOM"; 

}
