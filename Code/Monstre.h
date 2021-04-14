#ifndef MONSTRE_H
#define MONSTRE_H

#include <iostream>
#include <string>

class Monstre{
    public:
    void affichage ();
    void attaque ();
    std::string getNomMonstre();
    void recevoirDegat ();

    private: 
    std::string nom;
    int pv;
    int attk;
    bool dispo;
}

#endif
