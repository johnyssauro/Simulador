#ifndef CAMPOFORCA
#define CAMPOFORCA

#include "../core-simulador-hpp/ArmaDefesa.hpp"

class CampoForca : public ArmaDefesa
{
    public:
        CampoForca(string descricaoArma, int resistencia);
        string getDescricaoArma();
        int getResistencia();
};


#endif