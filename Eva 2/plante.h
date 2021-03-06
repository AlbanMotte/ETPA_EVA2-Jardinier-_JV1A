#ifndef PLANTE_H
#define PLANTE_H

#include <iostream>
#include<string>

class Plante{
    
    protected :

        std::string _name;
        std::string _specie;

        int _height;
        int _growth;
        int _water;
        bool _fertilizer;
        bool _vente = false;
        

    public :

    Plante();
    Plante(std::string nom, std::string espece);
    std::string getName();
    std::string getHealth();
    std::string getSpecie();
    std::string getWater();

    bool _mort = false;
    int _health;
    
    void cut();
    void grow();
    void waterPlante();
    void helpPlante();
    void dead();
    };

#endif