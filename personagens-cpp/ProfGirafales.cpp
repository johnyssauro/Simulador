#include "../personagens-hpp/ProfGirafales.hpp"

ProfGirafales::ProfGirafales(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int ProfGirafales::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int ProfGirafales::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string ProfGirafales::pegarDescricao() 
{
    return "SILEEENCIO...";
}