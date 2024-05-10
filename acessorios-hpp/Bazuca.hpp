#ifndef BAZUCA
#define BAZUCA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Bazuca : public ArmaAtaque
{

    public:
        Bazuca(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;

};

#endif