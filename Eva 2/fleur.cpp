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
    if (fane = false){
        cout<< "Votre fleur vaut 100$ !";
        value = 100;
        vente = true;
    }
    
    else if (fane = true){
        cout<< "Votre fleur vaut 10$ !";
        value = value/10;
        vente = true;
    }
}

void Fleur::pourri(){
    fane = true;
    cout<<"Votre fleur a fanée ...";
}