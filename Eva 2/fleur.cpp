#include "fleur.h"
#include <iostream>

#include <string>

Fleur::Fleur() : Plante() {

    _name = "Rouge";
    _specie = "Rose";
    _health = 10;
    _height = 10;
    _growth = 10;
    _water = 10;
    _fertilizer = false;

}

void Fleur::valeur(){
    value = 100;
    vente = true;
}

void Fleur::pourri(){
    fane = false;
}