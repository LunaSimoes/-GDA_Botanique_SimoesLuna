#ifndef PLAYER_CPP
#define PLAYER_CPP
#include <string>
#include "Player.h"
#include "tulipe.h"

/* int _fatigue; int _portemonnaie; int _engrais; std::string _playerName; */

void Player::dormir(int heures){
    _fatigue-=heure*10;
    if(_fatigue<0) _fatigue=0;
}

void Player::acheterEngrais(int argent){
    _portemonnaie-=argent*10;
    _engrais+=1;
}

void Player::MettreEngrais(tulipe * cible){
    cible->engrais();
}
void Player::TaillerPlante(tulipe * cible){
    cible->tailler(20);
}

void Player::SoignerPlante(tulipe * cible){
    cible->soigner(20);
}

void Player::ArroserPlante(tulipe * cible){
    cible->arroser(1);
}


Player::Player(std::string nomPlayer){

}

#endif