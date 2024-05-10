#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/EscudoAmerica.hpp"

EscudoAmerica::EscudoAmerica(string descricaoArma, int resistencia)
: ArmaDefesa(descricaoArma, resistencia)
{

}

string EscudoAmerica::getDescricaoArma()
{

    return this->descricaoArma;

}

int EscudoAmerica::getResistencia()
{

    return this->resistencia;

}
