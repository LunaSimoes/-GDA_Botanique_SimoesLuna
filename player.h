#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "tulipe.h"
#include "carnivore.h"

class Player {
    private:
    
    int _fatigue;
    int _portemonnaie;
    int _engrais;
    std::string _playerName;

    public:

    /*Joueur*/

    void dormir(int heures);
    void acheterEngrais(int argent);


    /*Tulipe*/

    void MettreEngrais(tulipe * cible);
    void TaillerPlante(tulipe * cible);
    void SoignerPlante(tulipe * cible);
    void ArroserPlante(tulipe * cible);


    /* Plante Carnivore*/

    void MettreEngrais(carnivore * cible);
    void Nourrir (carnivore * cible);
    void TaillerPlante(carnivore * cible);
    void SoignerPlante(carnivore * cible);
    void ArroserPlante(carnivore * cible);

    Player(std::string nomPlayer);
}

#endif