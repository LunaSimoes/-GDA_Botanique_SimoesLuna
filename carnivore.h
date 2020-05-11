#ifndef CARNIVORE_H
#define CARNIVORE_H
#include <string>

class carnivore : public plante{
    private:
        int _faim;
        int _besoinmouche;
        int _pousse;
        int _santé;
        int _hydratation;
        std::string _nom;
    
    public:

    void engrais();
    void tailler();
    void soigner();
    void arroser();
    
    void affiche();


    };

    #endif