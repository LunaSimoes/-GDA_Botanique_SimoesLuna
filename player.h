#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "tulipe.h"

class Player {
    private:
    
    int _fatigue;
    int _portemonnaie;
    int _engrais;
    std::string _playerName;

    public:

    void dormir(int heures);
    void acheterEngrais(int argent);

    void MettreEngrais(tulipe * cible);
    void TaillerPlante(tulipe * cible);
    void SoignerPlante(tulipe * cible);
    void ArroserPlante(tulipe * cible);

    Player(std::string nomPlayer);
}

#endif