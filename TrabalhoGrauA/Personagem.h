#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>

using namespace std;

class Personagem{
	private:
		string nome;
		int habilidade;
		int energia;
		int sorte;

	public:
		Personagem(string nome, int habilidade, int energia, int sorte);

		string getNome();
		int getHabilidade();
		int getEnergia();
		int getSorte();

		void setNome(string nome);
		void setHabilidade(int habilidade);
		void setEnergia(int energia);
		void setSorte(int sorte);



};

#endif // !PERSONAGEM_H
