#ifndef ESCUDOAGUA
#define ESCUDOAGUA

#include "../core-simulador-hpp/ArmaDefesa.hpp"

class EscudoAgua : public ArmaDefesa
{

    public:
        EscudoAgua(string descricaoArma, int resistencia);
        string getDescricaoArma();
        int getResistencia();

};


#endif