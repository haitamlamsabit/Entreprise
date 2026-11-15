#include "Respons.h"

Respons::Respons(string nom, int matricule, int indice,
    int salaire, int nmbrSub)
    : Employer(nom, matricule, indice, salaire)
{
    this->nmbrSub = nmbrSub;

    subordonnees = new Employer * [nmbrSub];

    for (int i = 0; i < nmbrSub; i++)
    {
        subordonnees[i] = nullptr;
    }
}

void Respons::ajouterSub(Employer* e)
{
    for (int i = 0; i < nmbrSub; i++)
    {
        if (subordonnees[i] == nullptr)
        {
            subordonnees[i] = e;
            
        }
    }
}

void Respons::afficherDirects() const
{
    for (int i = 0; i < nmbrSub; i++)
    {
        if (subordonnees[i] != nullptr)
        {
            subordonnees[i]->afficher();
        }
    }
}

void Respons::afficherIndirects() const
{
    for (int i = 0; i < nmbrSub; i++)
    {
        if (subordonnees[i] != nullptr)
        {
            Respons* r = dynamic_cast<Respons*>(subordonnees[i]);

            if (r != nullptr)
            {
                r->afficher();
            }
        }
    }
}

void Respons::afficher() const
{
    Employer::afficher();
    afficherDirects();
}

Respons::~Respons()
{
    delete[] subordonnees;
}