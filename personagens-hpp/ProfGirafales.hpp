#ifndef PROFGIRAFALES
#define PROFGIRAFALES

#include "../core-simulador-hpp/Personagem.hpp"

class ProfGirafales : public Personagem
{

    public:
        ProfGirafales(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};

#endif