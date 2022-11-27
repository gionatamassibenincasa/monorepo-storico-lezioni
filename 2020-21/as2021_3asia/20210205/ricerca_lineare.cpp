#include <cstdlib>
#include <iostream>
using namespace std;

/** Ricerca il valore v nell'array A
 * @param A array di valori interi
 * @param n numero di elementi di A
 * @param v valore da cercare
 * @return indice i di A tale che A[i] = v
 */
int ricerca_lineare(int A[], int n, int v) {
    for (int i = 0; i < n; i++)
        if (A[i] == v)
            return i;

    return -1;
}

int main() {
    int sequenza[] = {3, 1, 5, 2, 6, 7, 9, 8, 0};
    int len = sizeof(sequenza) / sizeof(int);
    for (int i = 0; i < 10; i++) {
        int posizione = ricerca_lineare(sequenza, len, i);
        if (posizione == -1 ) {
            cout << "Il valore " << i << " non è presente" << endl;
        } else {
            cout << "Il valore " << i << " è in posizione " << posizione << endl;
        }
    }
        return EXIT_SUCCESS;
}