#ifndef MAGO_H
#define MAGO_H

#include "Personagem.h"

class Mago : public Personagem {
private:
    int mana;

public:
    Mago(string nome);

    int getMana();
    void setMana(int novaMana);
    void usarMana(int custo);
};

#endif
