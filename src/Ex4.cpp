#include "../include/Ex4.h"

using namespace std;

int main(int argc, char** argv) {
    //Assignation des valeurs de retour de la fonction porte
    porte(true, false) = false;
    porte(false, true) = false;
    porte(true, true) = true;
    porte(false, false) = false;

    //Test de la fonction porte
    if (porte(true, true)) {
        cout << "OK" << endl;
    }
}

bool& porte(bool a, bool b) {
    static bool a_and_b, not_a_and_not_b, a_and_not_b, not_a_and_b;
    if (a && b) {
        bool& res = a_and_b;
        return res;
    } else if (!a && !b) {
        bool& res = not_a_and_not_b;
        return res;
    } else if (a && !b) {
        bool& res = a_and_not_b;
        return res;
    } else if (!a && b) {
        bool& res = not_a_and_b;
        return res;
    }
}
