#pragma once
#include <string>
#include <iostream>
using namespace std;

class Employer
{
private:
    string nom;
    const int matricule;
    int indice;
    static int augmentation;
    int salaire;

public:
    Employer(string nom, int matricule, int indice, int salaire);
    Employer(const Employer& e);
    virtual ~Employer();

    virtual double calculerSalaire() const;
    virtual void afficher() const;
};