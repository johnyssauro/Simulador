#ifndef GATOENDIABRADO
#define GATOENDIABRADO

#include "../core-simulador-hpp/ArmaAtaque.hpp"

class GatoEndiabrado : public ArmaAtaque
{

    public:
        GatoEndiabrado(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;

};

#endif