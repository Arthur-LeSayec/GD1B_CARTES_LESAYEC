#include "mage.h"
#include <string>

using namespace std;

Mage::Mage() : nom("Medivh"), pv(30),sort(3) {

}

void Mage::Affichage(){
    cout << nom << " : HP = " << pv << endl,
}

