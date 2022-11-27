#include <cstdlib>
#include <iostream>
using namespace std;

void stampa(double a[], int n) {
    cout << "[";
    if (n > 0)
        cout << a[0];
    for(int i = 1; i < n; i++) {
        cout << ", " << a[i];
    }
    cout << "]" << endl;
}

unsigned int
conta_valori(double a[], unsigned int n) {
    unsigned int ultimo;
    for(ultimo = 0;
        ultimo < n && a[ultimo] >= 1;
        ultimo++) ;

    return ultimo;
}

double somma(double a[], unsigned int n) {
    double accumulatore = 0;
    for (int contatore = 0; contatore < n; contatore++) {
        accumulatore += a[contatore];
    }
    return accumulatore;
}

double media(double a[], unsigned int n) {
    return somma(a, n) / n;
}

int main()
{
    const unsigned int MAX_VOTI = 10;
    double voti[MAX_VOTI] = {6, 8, 6.5, 4, 9.5};
    unsigned int n = conta_valori(voti, MAX_VOTI);
    stampa(voti, n);
    cout << "Somma: " << somma(voti, n) << endl;
    cout << "Media: " << media(voti, n) << endl;
    // system("PAUSE");
    return EXIT_SUCCESS;
}
