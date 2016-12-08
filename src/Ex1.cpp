#include "../include/Ex1.h"

using namespace std;

int main(int argc, char** argv) {
    //1) a)
    //int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tab[10];
    fillTable(tab);
    showTable(tab);

    int a = 1;
    int b = 2;
    cout << "a = " << a << "; b = " << b << endl;
    cout << "Pointers : " << endl;
    exchange(&a, &b);
    cout << "a = " << a << "; b = " << b << endl;
    cout << "Refererences : " << endl;
    exchange(a, b);
    cout << "a = " << a << "; b = " << b << endl;
    cout << "Values : " << endl;
    nok::exchange(a, b);
    cout << "a = " << a << "; b = " << b << endl;

    //1) b)
    int& mini = findMini(tab);
    int& maxi = findMaxi(tab);
    int& random = findRand(tab);
    cout << "Min : " << mini << " Max : " << maxi << endl;
    cout << "Rand : " << random << endl;

    //1) c)
    randomize(tab);
    showTable(tab);

    return 0;
}

void fillTable(int* tab) {
    cout << "Enter 10 integers :" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> tab[i];
    }
}

void showTable(int* tab) {
    cout << "Table content :" << endl;
    for (int i = 0; i < 10; i++) {
        cout << tab[i] << endl;
    }
}

void exchange(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void exchange(int& ra, int& rb) {
    int temp = ra;
    ra = rb;
    rb = temp;
}

void nok::exchange(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int& findMini(int* tab) {
    int temp = tab[0];
    int tempIndex = 0;
    for (int i = 0; i < 10; i++) {
        if (tab[i] < temp) {
            tempIndex = i;
        }
    }

    int& mini = tab[tempIndex];
    return mini;
}

int& findMaxi(int* tab) {
    int temp = tab[0];
    int tempIndex = 0;
    for (int i = 0; i < 10; i++) {
        if (tab[i] > temp) {
            tempIndex = i;
        }
    }

    int& maxi = tab[tempIndex];
    return maxi;
}

int& findRand(int* tab) {
    static bool init = false;
    if (!init) {
        srand(time(NULL));
        init = true;
    }

    int random = rand() % 10;

    int& rrandom = tab[random];
    return rrandom;
}

void randomize(int* tab) {
    for (int i = 0; i < 5; i++) {
        exchange(findRand(tab), findRand(tab));
    }
}
