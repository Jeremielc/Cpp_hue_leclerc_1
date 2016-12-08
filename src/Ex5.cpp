#include "../include/Ex5.h"

using namespace std;

void affiche(double montant) {
    cout << montant << endl;
}

void appliqueTVA(double* montant) {
    (*montant) *= 1.196;
}

namespace MaLib {
    using ::appliqueTVA; //appliqueTVA obtient une portée globale et est donc
                         //accessible en tant que fonction surchargeable.
    void appliqueTVA(double& montant) {
        montant *= 1.196;
    }

    void foo(double* montant);
}

int main() {
    double prix = 2.5;
    appliqueTVA(&prix);
    MaLib::appliqueTVA(prix);
    affiche(prix);
    MaLib::foo(&prix);
}

namespace MaLib {
    void foo(double* montant) {
        affiche(*montant);
        appliqueTVA(montant); //Pas dans le bon namespace;
    }
}
