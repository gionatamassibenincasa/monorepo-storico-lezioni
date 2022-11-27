/*
 Dichiarare un array di interi di 10 elementi.
Popolare ciascun elemento con indice pari (compreso lo zero)
 con il numero zero e quelli di indice dispari con il numero uno.
*/
#include <cstdlib>
#include <iostream>
using namespace std;

void stampa(int a[], int n) {
    cout << "[";
    if (n > 0)
        cout << a[0];
    for (int i = 1; i < n; i++) {
        cout << ", " << a[i];
    }
    cout << "]" << endl;
}

bool pari(int n) {
    return (n % 2 == 0);
}

void popola(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (pari(i)) {
            a[i] = 0;
        } else {
            a[i] = 1;
        }
    }
}

int main() {
    // Dichiarare un array di interi di 10 elementi
    int a[10];
    // Popolare ciascun elemento con indice pari (compreso lo zero)
    // con valore 0, 1 gli altri
    popola(a, 10);
    stampa(a, 10);

    return EXIT_SUCCESS;
}