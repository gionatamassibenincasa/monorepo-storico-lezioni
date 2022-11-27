/**
 * Scrivi un programma C++ che:

1. chiede all'utente di inserire 5 numeri interi,
     memorizzandoli su un array;
2. definisce una funzione 'int conta_zeri(int A[], int n)'
    che calcola e restituisce il numero degli elementi
    con valore 0;
3. come ultima istruzione del main diversa da return,
     stampa il valore di conta_zeri.
*/
#include <iostream>
using namespace std;

/**
 * @brief chiede all'utente n numeri interi e li inserisce in A
 * @param A un array di n elementi (o più)
 * @param n numero di elementi
 */
void inserisciNumeri(int A[], int n);

/**
 * @brief calcola il numero degli elementi con valore 0
 * @param A un array di n elementi
 * @param n numero di elementi
 * @return numero di elementi con valore zero
*/
int conta_zeri(int A[], int n);

int main() {
    int A[5];
    inserisciNumeri(A, 5);
    cout << "Ci sono: " << conta_zeri(A, 5) << " zeri." << endl;

    //system("pause");
    return 0;
}

void inserisciNumeri(int A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Immetti un numero: ";
        cin >> A[i];
    }
}

int conta_zeri(int A[], int n) {
    int acc = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == 0) {
            acc++;
        }
    }
    return acc;
}
