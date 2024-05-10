#ifndef FUNDA
#define FUNDA

#include "../core-simulador-hpp/ArmaAtaque.hpp"

class Funda : public ArmaAtaque
{

    public:
        Funda(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
    
};

#endif