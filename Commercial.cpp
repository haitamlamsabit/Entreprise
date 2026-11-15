#include "Commercial.h"

Commercial::Commercial(string nom, int matricule, int indice,
    int salaire, double fixe,
    double ventes, double pourcentage)
    : Employer(nom, matricule, indice, salaire)
{
    this->fixe = fixe;
    this->ventes = ventes;
    this->pourcentage = pourcentage;
}

void Commercial::modifierVentes(double ventes)
{
    this->ventes = ventes;
}

double Commercial::calculerSalaire() const
{
    return fixe + (ventes * pourcentage / 100);
}

void Commercial::afficher() const
{
    Employer::afficher();

    cout << "Fixe: " << fixe << endl;
    cout << "Ventes: " << ventes << endl;
    cout << "Pourcentage: " << pourcentage << "%" << endl;
    cout << "Salaire commercial: " << calculerSalaire() << endl;
}