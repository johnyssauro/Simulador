#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/CampoForca.hpp"

CampoForca::CampoForca(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia)
{

}

string CampoForca::getDescricaoArma()
{

    return this->descricaoArma;

}

int CampoForca::getResistencia()
{

    return this->resistencia;

}