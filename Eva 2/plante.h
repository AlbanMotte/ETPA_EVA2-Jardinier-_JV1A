#ifndef PLANTE_H
#define PLANTE_H

#include <iostream>
#include<string>

class Plante{
    
    protected :

        std::string _name;
        std::string _specie;

        int _health;
        int  _height;
        int _growth;
        int _water;
        bool _fertilizer;

    public :

    Plante();
    Plante(std::string nom, std::string espece);
    std::string getName();
    std::string getHealth();
    std::string getSpecie();
    
    void cut();
    void grow();
    void dead();
    };

#endif