#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string stampa(int a[], const int n) {
    // Scrivi qui la procedura di stampa
    stringstream ret;
    ret << "{";
    if (n > 0)
        ret << a[0];
    for (int i = 1; i < n; i++)
        ret << ", " << a[i];
    ret << "}";

    return ret.str();
}

/**
 * @brief Genera un array di n valori casuali compresi tra m e M
 * @param a array (allocato altrove)
 * @param n numero di elementi di a
 * @param m valore minimo
 * @param M valore massimo
 */
void genera_casuale_tra(int a[], const int n, int m, int M) {
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = m + rand() % (M - m + 1);
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    const int n = sizeof(a) / sizeof(int);
    cout << stampa(a, n) << endl; //< Atteso: {1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}
    genera_casuale_tra(a, n, 2, 9);
    cout << stampa(a, n) << endl;

    return EXIT_SUCCESS;
}
