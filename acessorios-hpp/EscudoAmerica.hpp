#ifndef ESCUDOAMERICA
#define ESCUDOAMERICA

#include "../core-simulador-hpp/ArmaDefesa.hpp"

class EscudoAmerica : public ArmaDefesa
{

    public:
        EscudoAmerica(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;

};

#endif