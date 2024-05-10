#ifndef ESCALIBUR
#define ESCALIBUR

#include "../core-simulador-hpp/ArmaAtaque.hpp"

class Escalibur : public ArmaAtaque
{
    public:

        Escalibur(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
        
};

#endif