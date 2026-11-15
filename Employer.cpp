#include "Employer.h"

int Employer::augmentation = 1000;

Employer::Employer(string nom, int matricule, int indice, int salaire)
    : matricule(matricule)
{
    this->nom = nom;
    this->indice = indice;
    this->salaire = salaire;
}

Employer::Employer(const Employer& e)
    : matricule(e.matricule)
{
    nom = e.nom;
    indice = e.indice;
    salaire = e.salaire;
}

double Employer::calculerSalaire() const
{
    return indice * augmentation;
}

Employer::~Employer()
{
}

void Employer::afficher() const
{
    cout << "Nom: " << nom << endl;
    cout << "Matricule: " << matricule << endl;
    cout << "Indice: " << indice << endl;
    cout << "Salaire: " << calculerSalaire() << endl;
}