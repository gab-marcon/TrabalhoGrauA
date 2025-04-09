#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

class Item{
	private:
		string nome;
		char tipo;
		bool isCombate;
		int faBonus;
		int danoBonus;

	public:
		Item(string nome, char tipo, bool isCombate, int faBonus, int danoBonus);
		
		string getNome();
		char getTipo();
		bool isCombate();
		int faBonus();
		int danoBonus();

		void setNome(string nome);
		void setTipo(char tipo);
		void setIsCombate(bool isCombate);
		void faBonus(int faBonus);
		void danoBonus(int danoBonus);

};

#endif // !ITEM_H