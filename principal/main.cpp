#include <iostream>
#include <string>
#include "../acessorios-hpp/Bazuca.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escalibur.hpp"
#include "../acessorios-hpp/Funda.hpp"
#include "../acessorios-hpp/Galho.hpp"
#include "../acessorios-hpp/GatoEndiabrado.hpp"
#include "../acessorios-hpp/Rosa.hpp"


#include "../acessorios-hpp/Escudo.hpp"

#include "../personagens-hpp/Chaves.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* arma2 = new Colher("Colher de Pata",0,50);
    ArmaAtaque* arma3 = new Bazuca("Bazuca de frutas", 30, 80);
    ArmaAtaque* arma4 = new Escalibur("Espada do Rei Artur", 20, 60);
    ArmaAtaque* arma5 = new GatoEndiabrado("Gato Preto", 30, 80);
    ArmaAtaque* arma6 = new Galho("Galho de Sequoia", 30, 50);
    ArmaAtaque* arma7 = new Funda("Funda do Rei Davi", 20, 60);

    ArmaDefesa* escudo = new Escudo("Latao", 1);
    
    Personagem* p1 = new Chaves(1, "Chaves Eq1", 40, arma, escudo);
    Personagem* p2 = new Chaves(1, "Chaves Eq1 - Reserva", 40, arma2, escudo);
    Personagem* p3 = new Chaves(1, "Chaves Eq1 - Reserva2", 100, arma3, escudo);
    Personagem* p4 = new Chaves(1, "Chaves Eq1 - Reserva3", 100, arma4, escudo);
    Personagem* p5 = new Chaves(2, "Chaves Eq2", 100, arma5, escudo);
    Personagem* p6 = new Chaves(2, "Chaves Eq2 - Reserva", 100, arma6, escudo);
    Personagem* p7 = new Chaves(2, "Chaves Eq2 - Reserva2", 100, arma7, escudo);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}