#ifndef FLEUR_H
#define FLEUR_H

#include <iostream>
#include<string>

#include "plante.cpp"

class Fleur : public Plante {

    protected :

        bool fane = false;
        bool vente = true;
        int value;

    public :

        Fleur();
        void valeur();
        void pourri();

    };

#endif