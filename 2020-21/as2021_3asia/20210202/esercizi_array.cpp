#include <iostream>
#include <cstdlib>
using namespace std;

void stampa(int a[], int n) {
    cout << "[";
    if (n > 0) {
        cout << a[0];
    }
    for (int i = 1; i < n; i++) {
        cout << ", " << a[i];
    }
    cout << "]" << endl;
}

int minimo(int a[], int n) {
    if (n == 0)
        return -1;
    int m = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < m) {
            m = a[i];
        }
    }
    return m;
}

int massimo(int a[], int n) {
    if (n == 0)
        return -1;
    int m = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > m) {
            m = a[i];
        }
    }
    return m;
}

int somma(int a[], int n) {
    if (n == 0)
        return 0;
    int acc = a[0];
    for (int i = 1; i < n; i++) {
        acc += a[i];
    }
    return acc;
}

double media(int a[], int n) {
    return static_cast<double>(somma(a, n)) / n;
}

int main()
{
    const int N = 10;
    int a[N] = {1, 2, 3, 4, 5, 4, 3, 2, 1, 0};
    stampa(a, N);
    cout << "Minimo: " << minimo(a, N) << endl;
    cout << "Massimo: " << massimo(a, N) << endl;
    cout << "Somma: " << somma(a, N) << endl;
    cout << "Media: " << media(a, N) << endl;

    return 0;
}