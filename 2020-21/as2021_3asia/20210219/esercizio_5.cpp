/*
(a) Generare un array di 100 valori interi, da 0 a 99.
(b) Sostituire i numeri pari con 0.
(c) Stampare l'array
*/
#include <iostream>
using namespace std;

/**
 * @brief Popola un array di n valori interi, da 0 a n - 1
 * @param A un array (definito dal chiamante)
 * @param n numeri di elementi di A
 */
void popola(int A[], int n);
/**
 * @brief Sostituisce i numeri pari di A con zero
 * @param A un array (definito dal chiamante)
 * @param n numeri di elementi di A
 */
void azzeraPari(int A[], int n);
/**
 * @brief Stampa gli elementi di un array di interi
 * @param A un array (definito dal chiamante)
 * @param n numeri di elementi di A
 */
void stampaArray(int A[], int n);

void metodoAlternativo(int A[], int n);

int main() {
    // Numero di elementi
    const int N = 100;
    // Dichiara un array di N numeri interi
    int array[N];

    // Decomposizione funzionale
    popola(array, N);
    azzeraPari(array, N);
    stampaArray(array, N);

    // Metodo che integra tutte funzioni richieste
    metodoAlternativo(array, N);

    return 0;
}

inline void popola(int A[], int n) {
    for (int i = 0; i < n; i++) {
        A[i] = i;
    }
}

inline void azzeraPari(int A[], int n) {
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0) {
            A[i] = 0;
        }
    }
}

inline void stampaArray(int A[], int n) {
    cout << "{";
    if (n > 0) {
        cout << A[0];
    }
    for (int i = 1; i < n; i++) {
        cout << ", " << A[i];
    }
    cout << "}" << endl;
}

inline void metodoAlternativo(int A[], int n) {
    cout << "{";
    if (n > 0) {
        A[0] = 0;
        cout << "0";
    }
    for (int i = 1; i < n; i++)
    {
        A[i] = i;
        cout << ", " << i;
        i++;
        A[i] = 0;
        cout << ", 0";
    }
    cout << "}" << endl;
}
