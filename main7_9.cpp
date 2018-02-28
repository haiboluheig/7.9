

#include <cstdlib>
#include <iostream>
#include <iomanip>    
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>

#include "maHeader.h"
using namespace std;

int main(int argc, char** argv) {
    afficherPrixEssence(Voiture::getPrixEssence());
    
    Voiture::setPrixEssence(1.34);
    afficherPrixEssence(Voiture::getPrixEssence());
    
    Voiture v(52,6.7);
    
    afficherVoiture(v);
    afficherCoutTrajet(v.coutTrajet(1000));
    afficherVoiture(v);
    afficherCoutTrajet(v.coutTrajet(200));
    afficherVoiture(v);
    
    return (EXIT_SUCCESS);
}
