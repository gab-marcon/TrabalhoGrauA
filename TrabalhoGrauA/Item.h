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
		bool getIsCombate();
		int getFaBonus();
		int getDanoBonus();

		void setNome(string nome);
		void setTipo(char tipo);
		void setIsCombate(bool isCombate);
		void setFaBonus(int faBonus);
		void setDanoBonus(int danoBonus);

};

#endif // !ITEM_H
