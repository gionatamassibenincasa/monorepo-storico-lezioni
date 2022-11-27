#include <iostream>
using namespace std;

/** Restituisce l'indice del valore v nell'array
  * a di n elementi, se esiste, -1 altrimenti
  *
  * @param a array di n elementi
  * @param n numero di elementi
  * @param v valore da cercare
  * @return indice i tale che a[i] = v, oppure -1
  */
int trova(int a[], int n, int v);

template<typename T>
int trova(T a[], const int n, T v) {
    for (int i = 0; i < n; i++)
        if (a[i] == v) return i;

    return -1;
}

int main() {
    const int N = 10;
    int v_int[N] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    float v_float[N] = {9.5, 8.5, 7.5, 6.5, 5.5, 4.5, 3.5, 2.5, 1.5, 0.5};
    

    cout << trova<int>(v_int, N, 5) << endl;
    cout << trova<float>(v_float, N, 3.5) << endl;

    return 0;
}