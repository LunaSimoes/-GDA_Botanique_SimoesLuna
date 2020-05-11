#ifndef TULIPE_H
#define TULIPE_H
#include <string>

class tulipe : public plante{
    private:
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


    };

    #endif