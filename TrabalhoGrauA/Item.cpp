#include "Item.h"
#include <string>

using namespace std;

Item::Item(string nome, char tipo, bool isCombate, int faBonus, int danoBonus){
	this->nome = nome;
	this->tipo = tipo;
	this->isCombate = isCombate;
	this->faBonus = faBonus;
	this->danoBonus = danoBonus;
}

string Item::getNome() {
	return this->nome;
}

char Item::getTipo() {
	return this->tipo;
}

bool Item::getIsCombate() {
	return this->isCombate;
}

int Item::getFaBonus() {
	return this->faBonus;
}

int Item::getDanoBonus() {
	return this->danoBonus;
}


void Item::setNome(string nome) {
	this->nome = nome;
}

void Item::setTipo(char tipo) {
	this->tipo = tipo;
}

void Item::setIsCombate(bool isCombate) {
	this->isCombate = isCombate;
}

void Item::setFaBonus(int faBonus) {
	this->faBonus = faBonus;
}

void Item::setDanoBonus(int danoBonus) {
	this->danoBonus = danoBonus;
}
