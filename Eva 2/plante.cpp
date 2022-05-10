#ifndef PLANTE_CPP
#define PLANTE_CPP
#include "plante.h"

#include <iostream>
#include <string>
using std::string;
using namespace std;



    Plante::Plante() : _name("Plheure"), _specie("Plamte"), _health(5), _growth(1), _water(1), _height(0), _fertilizer(false) {}
    Plante::Plante(std::string nom, std::string espece)

    std::string getHealth(){

        if (_health == 5){
            std::string txt = "Votre plante est en très bonne santé !";
            return txt;
        }

        if (_health == 4){
            std::string txt = "Votre plante est en bonne santé !";
            return txt;
        }

        if (_health == 3){
            std::string txt = "Votre plante est un peu fragile, attention !";
            return txt;
        }

        if (_health == 2){
            std::string txt = "Votre plante est en mauvaise santé !";
            return txt;
        }

        if (_health == 1){
            std::string txt = "Votre plante est en très mauvaise santé ! Elle va bientôt mourir !";
            return txt;
        }

        else{
            std::string txt = "Votre plante est morte...";
            return txt;
        }

    }

    std::string getName(){
        return _name;
    }

    std::string getSpecie(){
        return _specie;
    }

    void cut(){

        _height = _height - 2;

        if (_height <= 1 ){
            _health = _health - 1;
            std::string txt = "Vous avez trop coupé votre plante ! Elle est blessée !";
            return txt;
        }

        if (_height >= 4){
            std::string txt = "Il serait temps de couper un peu votre plante pour la garder en bonne santé !";
            return txt;
        }
    }

    void grow(){

        if (int eau = 1 || 2 || 3){
            _health = _health + 2;
            _growth = growth + 2;
            std::string txt = "Vous avez correctement arrosé votre plante ! Elle poussera bien !";
        }

        if (int eau >= 4){
            _health = _health -1;
            _growth = growth - 1;
            std::string txt = "Vous avez noyez votre plante ! Elle est blessée !";
            return txt;
        }

        if (int eau = 0){
            _health = _health - 2;
            std::string txt = "Votre plante a besoin d'eau !";
            return txt;

        }

        if (bool engrais = true){
            _growth = _growth + 2;
            std::string txt = "Vous avez utilisé un engrais ! Votre plante grandit plus vite !";
            return txt;
        }

         if (_health == 5){
            _growth = _growth + 4
        }

        if (_health == 4){
            _growth = _growth + 3
        }

        if (_health == 3){
            _growth = _growth + 2
        }

        if (_health == 2){
            _growth = _growth + 1
        }

        if (_health == 1){
            _growth = _growth + 0
        }
    }

    void dead(){
        if (_health <=0) {
            _mort = true;
        }
    }

#endif