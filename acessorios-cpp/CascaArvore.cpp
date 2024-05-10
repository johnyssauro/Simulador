#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/CascaArvore.hpp"

CascaArvore::CascaArvore(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){


}

string CascaArvore::getDescricaoArma(){

    return this->descricaoArma;

}

int CascaArvore::getResistencia(){

    return this->resistencia;

}
