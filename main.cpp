#include <iostream>
#include "tulipe.h"
#include "player.h"

int main(){
    
    tulipe * tulipe = new tulipe("Tulipe");
    tulipe->affiche();

    Player * myself = new Player ("Botaniste");
    

    myself->dormir(Player);
    player->affiche();

    myself->acheterEngrais(Player);
    Player->affiche();


    myself->MettreEngrais(tulipe);
    tulipe->affiche();

    myself->TaillerPlante(tulipe);
    tulipe->affiche();

    myself->SoignerPlante(tulipe);
    tulipe->affiche();

    myself->ArroserPlante(tulipe);
    tulipe->affiche();

    return 0;
    }