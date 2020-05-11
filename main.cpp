#include <iostream>
#include "tulipe.h"
#include "carnivore.h"
#include "player.h"


/* Timer*/
/* quand le timer arrive à 0 on peut à nouveau nourrir et mettre de l'engrais 1 fois. Le timer recommence.*/

void timer(int minutes)
{
    for(minutes==0)
    {
            break;
        }

        system("cls");
        cout<<h<<":"<<m<<":"<<s--;
    }

int main(){

    int minutes;
    cout<<"Minutes: "; cin>> minutes;
    timer(minutes);
    for (int i = 100; ; i = i + 50)

    
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