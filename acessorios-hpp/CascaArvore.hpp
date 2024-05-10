#ifndef CASCAARVORE
#define CASCAARVORE

#include "../core-simulador-hpp/ArmaDefesa.hpp"

class CascaArvore : public ArmaDefesa
{
    public:
        CascaArvore(string descricaoArma, int resistendia);
        string getDescricaoArma() override;
        int getResistencia() override;

};


#endif