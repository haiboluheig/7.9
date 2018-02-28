//7.9

#ifndef MAHEADER_H
#define MAHEADER_H
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;


class Voiture {
    
public:
    //constructeur
    Voiture (unsigned capaciteReservoir,double consommationMoyenne);
    //sélecteurs
    unsigned getCapaciteReservoir() const;
    double getConsommationMoyenne() const;
    double getNbLitresDansReservoir() const;
//fonctions nombres static
    static double getPrixEssence();
    static void setPrixEssence(double prix);
    //autres
    double coutTrajet(double nbKm);
private:
    static double prixEssence;  //en Frs
    const unsigned capaciteReservoir;//en litres
    const double consommationMoyenne;//litres aux 100km
    double nbLitresDansReservoir;//nb de litres actuellement dans le réservoir   
};

void afficherPrixEssence(double prix);
void afficherCoutTrajet(double motant);
void afficherVoiture( const Voiture& v);
#endif /* MAHEADER_H */

