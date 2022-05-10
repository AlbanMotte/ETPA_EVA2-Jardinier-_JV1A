#include <iostream>
#include <vector>

using namespace std;
#include "plante.cpp"
#include "fleur.cpp"
#include "planteCarnivore.cpp"



int main(){

    Plante * PlanteTest = new Plante();

//Intro
    std::cout << "Bienvenue dans ce jeu de jardinage ! Vous aller pouvoir acheter des fleurs et même des plantes carnivores, s'en occuper puis les vendre !" <<std::endl;
    std::cout << "Vous allez d'abords vous occuper d'une seule plante comme sujet TEST ! ";
    int tour = 0;

    int choix;

    while (choix != 5 || PlanteTest -> _health <= 0 ){

        std::cout << "Que voulez-vous faire ? 1 : Arroser | 2 : Tailler | 3 : Utiliser de l'engrais | 4 : Avoir des informations | 5 : Aller vous couchez : ";
        std::cin >> choix;

        if (choix == 1){
            std::cout << "Vous décidez d'arroser ...";
            PlanteTest -> waterPlante();
        }

        if (choix == 2){
            std::cout << "Voud décidez de tailler...";
            PlanteTest -> cut();
        }

        if (choix == 3){
            std::cout << "Vous décidez d'utiliser de l'engrais...";
            PlanteTest -> helpPlante();
        }

        if (choix == 4){
            std::cout << "Vous décidez d'avoir des informations sur votre plante...";
            std::cout << PlanteTest -> getName() << " est le nom de cette plante et elle appartient à l'espèce des " << PlanteTest -> getSpecie() << " ! Sa vie est à : " << PlanteTest -> getHealth() << " et " << PlanteTest -> getWater() << " !";
        }

        if (choix == 5){
            std::cout << "Vous allez vous coucher...";
        }

        if (PlanteTest -> _health <= 0){
            PlanteTest -> dead();
        }
    }

}