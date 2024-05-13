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
#include "../acessorios-hpp/EscudoAgua.hpp"
#include "../acessorios-hpp/EscudoAmerica.hpp"
#include "../acessorios-hpp/Porta.hpp"
#include "../acessorios-hpp/CampoForca.hpp"
#include "../acessorios-hpp/CascaArvore.hpp"

#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Chiquinha.hpp"
#include "../personagens-hpp/DonaFlorinda.hpp"
#include "../personagens-hpp/ProfGirafales.hpp"
#include "../personagens-hpp/Quico.hpp"
#include "../personagens-hpp/SeuMadruga.hpp"

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
    ArmaDefesa* escudo2 = new CampoForca("Energia Luminosa", 1);
    ArmaDefesa* escudo3 = new CascaArvore("Casca de Carvalho", 1);
    ArmaDefesa* escudo4 = new EscudoAgua("Agua Sagrada", 1);
    ArmaDefesa* escudo5 = new EscudoAmerica("Escudo do Capitao America", 1);
    ArmaDefesa* escudo6 = new Porta("Porta da frente de casa", 1);
    
    Personagem* p1 = new Chaves(1, "Chaves Eq1", 40, arma, escudo);
    Personagem* p2 = new Chiquinha(1, "Chiquinha Eq1 - Reserva", 40, arma2, escudo2);
    Personagem* p3 = new DonaFlorinda(1, "Dona Florinda Eq1 - Reserva2", 100, arma3, escudo3);
    Personagem* p4 = new ProfGirafales(1, "Professor Girafales Eq1 - Reserva3", 100, arma4, escudo4);
    Personagem* p5 = new Quico(2, "Quico Eq2", 100, arma5, escudo5);
    Personagem* p6 = new SeuMadruga(2, "Seu Madruga Eq2 - Reserva", 100, arma6, escudo6);
    Personagem* p7 = new Chaves(2, "Chaves Eq2 - Reserva2", 100, arma7, escudo);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 1);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 1);
    simulador->adicionarPersonagem(p5, 2);
    simulador->adicionarPersonagem(p6, 2);
    simulador->adicionarPersonagem(p7, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}