#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/EscudoAgua.hpp"

EscudoAgua::EscudoAgua(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia)
{

}

string EscudoAgua::getDescricaoArma()
{

    return this->descricaoArma;

}

int EscudoAgua::getResistencia()
{

    return this->resistencia;

}