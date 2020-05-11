#ifndef TULIPE_CPP
#define TULIPE_CPP
#include <iostream>
#include "tulipe.h"

/* int _faim; int _pousse; int _hydratation; std::string _nom; */
        

    void tulipe::engrais(){
        _faim-=20;
        if(_faim<0) _faim=0;
        _pousse+=40;
    }

    void tulipe::tailler(){
        _santé-=10;
        _pousse+=20

    }

    void tulipe::soigner(){
        _santé+=20;

    }

    void tulipe::arroser(){
        _hydratation-=heure*10;
        if(_hydratation<0) _hydratation=0;
         _pousse+=20;
    }
    
    void tulipe::affiche(){
        std::cout<<_nom<< "est une plante, a une faim de" << _ faim<< "/100, une santé de " << _santé << "/100, est une hydratation de " << _hydratation << "/100. " << std::endl;
    
    }

    #endif