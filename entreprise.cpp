#include <iostream>
#include "Employer.h"
#include "Respons.h"
#include "Commercial.h"

using namespace std;

int main()
{
    Employer e1("John", 12345, 2, 50000);
    e1.afficher();

    Employer e2("Ali", 12346, 3, 60000);
    Employer e3("Sara", 12347, 2, 50000);

    Respons r1("Ahmed", 12348, 5, 70000, 2);

    r1.ajouterSub(&e2);
    r1.ajouterSub(&e3);

    r1.afficher();

    Commercial c1("Youssef", 12349, 4, 50000, 4000, 20000, 5);

    c1.afficher();

    c1.modifierVentes(30000);
    c1.afficher();

    return 0;
}