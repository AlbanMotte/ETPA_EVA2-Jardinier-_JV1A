#ifndef PLANTE_CPP
#define PLANTE_CPP
#include "plante.h"

#include <iostream>
#include <string>
using std::string;
using namespace std;



    Plante::Plante() : _name("Plheure"), _specie("Plamte"), _health(5), _growth(1), _water(1), _height(0), _fertilizer(false) {}
    Plante::Plante(std::string nom, std::string espece){}


    //Vie de la plante
    std::string Plante::getHealth(){

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

    std::string Plante::getName(){
        return _name;
    }

    std::string Plante::getSpecie(){
        return _specie;
    }

    //Taille de la plante
    void Plante::cut(){

        _height = _height - 2;

        if (_height <= 1 ){
            _health = _health - 1;
            cout<< "Vous avez trop coupé votre plante ! Elle est blessée !";
        }

        if (_height >= 4){
            cout<< "Il serait temps de couper un peu votre plante pour la garder en bonne santé !";
        }
    }

    void Plante::grow(){

        //Arrosage
        if (_water= 1 || 2 || 3){
            _health = _health + 2;
            _growth = _growth + 2;
            std::string txt = "Vous avez correctement arrosé votre plante ! Elle poussera bien !";
        }

        if (_water >= 4){
            _health = _health -1;
            _growth = _growth - 1;
            cout<< "Vous avez noyez votre plante ! Elle est blessée !";
        }

        if (_water = 0){
            _health = _health - 2;
            cout<<"Votre plante a besoin d'eau !";

        }

        //Utilisation d'engrais
        if (_fertilizer = true){
            _growth = _growth + 2;
            cout<<"Vous avez utilisé un engrais ! Votre plante grandit plus vite !";

        }

        //Croissance en fonction de vie
         if (_health == 5){
            _growth = _growth + 4;
        }

        if (_health == 4){
            _growth = _growth + 3;
        }

        if (_health == 3){
            _growth = _growth + 2;
        }

        if (_health == 2){
            _growth = _growth + 1;
        }

        if (_health == 1){
            _growth = _growth + 0;
        }
    }

    //Mort de la plante
    void Plante::dead(){
        if (_health <=0) {
            _mort = true;
        }
    }

#endif