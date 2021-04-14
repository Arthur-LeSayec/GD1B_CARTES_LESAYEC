#ifndef MAGE_H
#define MAGE_H

#include <iostream>
#include <string>
#include "mage.cpp"

class Mage{

    public:

    void Affichage();
    void Invoquer();
    void sort();
    void soin();


    private:

    std::string nom;
    int pv;
    int sort;
    int soin;

};


#endif

