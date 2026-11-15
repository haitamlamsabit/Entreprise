#pragma once
#include "Employer.h"

class Commercial : public Employer
{
private:
    double fixe;
    double ventes;
    double pourcentage;

public:
    Commercial(string nom, int matricule, int indice,
        int salaire, double fixe,
        double ventes, double pourcentage);

    void modifierVentes(double ventes);

    double calculerSalaire() const;

    void afficher() const override;
};