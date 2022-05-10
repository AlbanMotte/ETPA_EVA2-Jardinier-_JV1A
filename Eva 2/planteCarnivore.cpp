#include "planteCarnivore.h"
#include <iostream>

Carnivore::Carnivore() : Plante() {

    _name = "Mordeur";
    _specie = "Amanite-Tue-Mouche";
    _health = 5;
    _height = 0;
    _growth = 1;
    _water = 1;
    _fertilizer = false;

}

void want2eat(){
    _want2eat = true;
    if (want2eat = true){
        std::string txt = "Votre plante carnivore veut manger !";
        return txt;
        _health = _health + 1;
    }

    else{
        want2eat = false;
        std::string txt = "Votre plante carnivor est en train de digérer !";
        return txt;
        _health = _health + 2;
    }
}