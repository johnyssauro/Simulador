#ifndef GALHO
#define GALHO

#include "../core-simulador-hpp/ArmaAtaque.hpp"

class Galho : public ArmaAtaque
{

    public:
        Galho(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;

};

#endif