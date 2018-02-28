/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "maHeader.h"
#include <iostream>
#include <cstdlib>

double Voiture::prixEssence = 1.5;

Voiture::Voiture(unsigned capaciteReservoir, double consommationMoyenne)
: capaciteReservoir(capaciteReservoir), consommationMoyenne(consommationMoyenne),
nbLitresDansReservoir(capaciteReservoir) {
}

unsigned Voiture::getCapaciteReservoir() const {
    return capaciteReservoir;
}

double Voiture::getConsommationMoyenne() const {
    return consommationMoyenne;
}

double Voiture::getNbLitresDansReservoir() const {
    return nbLitresDansReservoir;
}

double Voiture::getPrixEssence() {
    return prixEssence;
}

void Voiture::setPrixEssence(double prix) {
    prixEssence = prix;
}

double Voiture::coutTrajet(double nbKm) {
    const double CONSOMMATION = nbKm * consommationMoyenne / 100;
    if (CONSOMMATION < nbLitresDansReservoir)
        nbLitresDansReservoir -= CONSOMMATION;
    else
        nbLitresDansReservoir =
            capaciteReservoir -
            fmod(CONSOMMATION - nbLitresDansReservoir, capaciteReservoir); //******
    return CONSOMMATION*prixEssence;
}
void afficherPrixEssence(double prix){
    cout << "Prix de l'essence :"
            <<fixed << setprecision(2) << prix <<" Frs" << endl <<endl;
}

void afficherVoiture(const Voiture& v){
    cout << "Capacite de reservoir [lire]        : "
         <<v.getCapaciteReservoir() << endl
         << "Consommation moyenne [l/100km]      : "
         <<v.getConsommationMoyenne() <<endl
         << "Nb litres restants                  : "
         << v.getNbLitresDansReservoir() << endl <<endl;
}

void afficherCoutTrajet(double montant) {
    cout << "Cout du trajet  : "
            <<fixed << setprecision(2) <<montant << "Frs" <<endl <<endl;
}
