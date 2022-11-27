/**
 * @file ricerca_lineare.cpp
 * @brief Definisce l'algoritmo di ricerca lineare
 */
#include <iostream>
using namespace std;

/**
 * @brief fa inserire dall'utente gli n elementi di A
 * @param A l'array
 * @param n il numero di elementi di A
 */
void popola(int A[], int n);

/**
 * @brief Ricerca la posizione di v in A
 * @param A l'array
 * @param n il numero di elementi
 * @param v il valore dell'elemento da cercare
 * @return l'indice dell'elemento o -1 se non c'è
 */
int ricerca_lineare(int A[], int n, int v);

int main() {
	const int n = 5;
	int A[n];

	popola(A, n);
	cout << ricerca_lineare(A, n, 10) << endl;
}
