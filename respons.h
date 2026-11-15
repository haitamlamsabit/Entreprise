#pragma once
#include "Employer.h"

class Respons : public Employer
{
private:
    Employer** subordonnees;
    int nmbrSub;

public:
    Respons(string nom, int matricule, int indice,
        int salaire, int nmbrSub);

    void ajouterSub(Employer* e);

    void afficherDirects() const;
    void afficherIndirects() const;

    void afficher() const override;

    ~Respons();
};