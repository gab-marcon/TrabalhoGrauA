#include "Personagem.h"
#include <string>

using namespace std;

Personagem::Personagem(string nome, int habilidade, int energia, int sorte) {
    this->nome = nome;
    this->habilidade = habilidade;
    this->energia = energia;
    this->sorte = sorte;
}

string Personagem::getNome() {
    return this->nome;
}

int Personagem::getHabilidade() {
    return this->habilidade;
}

int Personagem::getEnergia() {
    return this->energia;
}

int Personagem::getSorte() {
    return this->sorte;
}

void Personagem::setNome(string nome) {
    this->nome = nome;
}

void Personagem::setHabilidade(int habilidade) {
    this->habilidade = habilidade;
}

void Personagem::setEnergia(int energia) {
    this->energia = energia;
}

void Personagem::setSorte(int sorte) {
    this->sorte = sorte;
}
