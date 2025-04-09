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