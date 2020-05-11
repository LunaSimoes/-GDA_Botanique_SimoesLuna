#include <iostream>
#include "tulipe.h"
#include "carnivore.h"
#include "player.h"

int main(){
    
    tulipe * tulipe = new tulipe("Tulipe");
    tulipe->affiche();

    carnivore * carnivore = new carnivore("Carnivore");
    carnivore->affiche();

    Player * myself = new Player ("Botaniste");



    /*Joueur*/

    myself->dormir(Player);
    player->affiche();

    myself->acheterEngrais(Player);
    Player->affiche();


    /*Tulipe*/


    myself->MettreEngrais(tulipe);
    tulipe->affiche();

    myself->TaillerPlante(tulipe);
    tulipe->affiche();

    myself->SoignerPlante(tulipe);
    tulipe->affiche();

    myself->ArroserPlante(tulipe);
    tulipe->affiche();

    
    /* Plante Carnivore*/

    
    myself->MettreEngrais(carnivore);
    carnivore->affiche();

    myself->Nourrir(carnivore);
    carnivore->affiche();

    myself->TaillerPlante(carnivore);
    carnivore->affiche();

    myself->SoignerPlante(carnivore);
    carnivore->affiche();

    myself->ArroserPlante(carnivore);
    carnivore->affiche();


    return 0;
    }