#ifndef MONSTRE_CPP
#define MONSTRE_CPP

#include "Monstre.H"
#include <iostream>

using namespace std;

Monstre::Monstre() : nom("Thrall"), attk(5), pv(9), dispo(true){

}

//Affichage de Thrall (le monstre)

void Monstre::affichage(){
    cout << nom << ": Force = " << attk << " PDV = "<< pv << endl;

}

//Fonction Attaque

void Monstre::attaque(){
    if (dispo == true){
        
    }
}