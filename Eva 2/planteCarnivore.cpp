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
        _health = _health - 1;
    }

    else{
        veutManger = false;
        _health = _health + 2;
    }
}

void Carnivore::getInfoManger(){
    if (veutManger = true){
        cout<< "Votre plante carnivore veut manger !";
    }

    else if (veutManger = false){
        cout<< "Votre plante carnivore est en train de digérer !";
    }
}