/*
    Dichiarare un array di interi di 10 elementi.
    Popolarlo con dei numeri da tastiera inseriti a piacere.
    Dopo, sommare gli elementi con indice pari e quelli con indice dispari separatamente.
*/
#include <cstdlib>
#include <iostream>
using namespace std;

int somma(int a[], int n, int resto_div_2) {
    int accumulatore = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == resto_div_2)
            accumulatore += a[i];
    }
    
    return accumulatore;
}

// Popolarlo con dei numeri da tastiera inseriti a piacere.
void popola (int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Immetti l'elemento " << (i + 1) << "-esimo: ";
        cin >> a[i];
    }
}

int main() {
    // Dichiarare un array di interi di 10 elementi.
    int a[10];
    // Popolarlo con dei numeri da tastiera inseriti a piacere.
    popola(a, 10);
    // somma pari
    int somma_pari = somma(a, 10, 0);
    // somma dispari
    int somma_dispari = somma(a, 10, 1);
    cout << "Somma elementi indice pari: " << somma_pari << endl;
    cout << "Somma elementi indice dispari: " << somma_dispari << endl;

    return EXIT_SUCCESS;
}