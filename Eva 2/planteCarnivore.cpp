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

//Appétit de la plante
void Carnivore::want2eat(){
    veutManger = true;
    if (veutManger = true){
        cout<<"Votre plante carnivore veut manger !";
        _health = _health + 1;
    }

    else{
        veutManger = false;
        cout<<"Votre plante carnivor est en train de digérer !";
        _health = _health + 2;
    }
}