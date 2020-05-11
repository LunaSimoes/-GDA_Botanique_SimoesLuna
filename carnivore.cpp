#ifndef CARNIVORE_CPP
#define CARNIVORE_CPP
#include <iostream>
#include "carnivore.h"

/* int _faim; int _besoinmouche; int _pousse; int _hydratation; std::string _nom; */
        

    void carnivore::engrais(){
        _faim-=20;
        if(_faim<0) _faim=0;
        _pousse+=40;
    }

    void carnivore::mouche(){
    _besoinmouche-=20;
    if(_besoinmouche<0) _besoinmouche=0;
     _pousse+=40;
    }

    void carnivore::tailler(){
        _santé-=10;
        _pousse+=20

    }

    void carnivore::soigner(){
        _santé+=20;
    }

    void carnivore::arroser(){
        _hydratation-=heure*10;
        if(_hydratation<0) _hydratation=0;
         _pousse+=20;
    }
    
    void carnivore::affiche(){
        std::cout<<_nom<< "est une plante, a une faim de" << _ faim<< "/100, une santé de " << _santé << "/100, est une hydratation de " << _hydratation << "/100. " << std::endl;
    
    }

    #endif