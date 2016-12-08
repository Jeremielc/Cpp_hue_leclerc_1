#include "../include/Ex2.h"

using namespace std;

int main (int argc, char** argv) {
    bool ok = true;
    int size;
    do {
        cout << "Enter table size please ( <= 10): " << endl;
        cin >> size;
        if (size > 10) {
            ok = false;
        } else {
            ok = true;
        }
    } while(!ok);

    int tab[10];
    fillTable(tab, size);

    int& min = findMini(tab, size);
    int& max = findMaxi(tab, size);
    exchange(min, max);
    showTable(tab, size);
}

void fillTable(int* tab, int size) {
    cout << "Enter " << size << " integers :" << endl;
    for (int i = 0; i < size; i++) {
        cin >> tab[i];
    }
}

void showTable(int* tab, int size) {
    cout << "Table content :" << endl;
    for (int i = 0; i < size; i++) {
        cout << tab[i] << endl;
    }
}

void exchange(int& ra, int& rb) {
    int temp = ra;
    ra = rb;
    rb = temp;
}

int& findMini(int* tab, int size) {
    int temp = tab[0];
    int tempIndex = 0;
    for (int i = 0; i < size; i++) {
        if (tab[i] < temp) {
            tempIndex = i;
        }
    }

    int& mini = tab[tempIndex];
    return mini;
}

int& findMaxi(int* tab, int size) {
    int temp = tab[0];
    int tempIndex = 0;
    for (int i = 0; i < size; i++) {
        if (tab[i] > temp) {
            tempIndex = i;
        }
    }

    int& maxi = tab[tempIndex];
    return maxi;
}
