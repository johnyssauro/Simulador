#ifndef PORTA
#define PORTA

#include "../core-simulador-hpp/ArmaDefesa.hpp"

class Porta : public ArmaDefesa
{

    public:
        Porta(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;

};

#endif