#include <cstdlib>
#include <iostream>
using namespace std;

void stampa(int a[], int n) {
    cout << "[";
    if (n > 0)
        cout << a[0];
    for (int i = 1; i < n; i++) {
        cout << ", " << a[i];
    }
    cout << "]" << endl;
}

void somma(int a[], int b[], int c[], int n) {
    for (int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }
}

int main() {
    // Dichiarare due array
    const int n = 5;
    int a[n] = {0, 1, 0, 1, 0};
    int b[n] = {1, 0, 1, 0, 1};
    int c[n];
    somma(a, b, c, n);
    stampa(c, n);

    return EXIT_SUCCESS;
}