#ifndef PLANTE_H
#define PLANTE_H
#include <string>
#include <iostream>

class plante{
    protected:
        int _faim;
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

    plante(std::string name);

    };


#endif