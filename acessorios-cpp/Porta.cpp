#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Porta.hpp"

Porta::Porta(string descricaoArma, int resistencia)
: ArmaDefesa(descricaoArma, resistencia)
{

}

string Porta::getDescricaoArma(){

    return this->descricaoArma;

}

int Porta::getResistencia(){

    return this->resistencia;

}