#include <cstdlib>
#include <iostream>
using namespace std;

/**
 * @brief Ricerca l'indice i tale che A[i] = v
 * 
 * @param A array
 * @param n numero di elementi di A
 * @param v valore da cercare
 * @return l'indice i tale che A[i] = v, oppure -1
*/
int ricerca(int A[], int n, int v) {
    // per ogni scatola
    for (int i = 0; i < n; i++) {
        //     se il valore è uguale a v
        if (A[i] == v) {
            // restituisci l'indice
            return i;
        }
    }
    // se sono oltre l'ultima scatola
    return -1;
}

int main() {
    int A[5] = {1, 2, 3, 4, 5};
    cout << ricerca(A, 5, 1) << endl; //< Atteso:  0
    cout << ricerca(A, 5, 3) << endl; //< Atteso:  2
    cout << ricerca(A, 5, 5) << endl; //< Atteso:  4
    cout << ricerca(A, 5, 9) << endl; //< Atteso: -1

    return EXIT_SUCCESS;
}