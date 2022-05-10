#ifndef PLANTECARNIVORE_H
#define PLANTECARNIVORE_H

#include <string>
#include "plante.cpp"

    class Carnivore : public Plante {

        protected :
            Carnivore();
            bool veutManger = false;

        public :

        void want2eat();
        void getInfoManger();   

    };

#endif