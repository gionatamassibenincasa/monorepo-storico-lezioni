#include <iostream>
#include <cstdlib>
using namespace std;

int minimo(int a, int b) {
    return a < b
               ? a
               : b;
}

int massimo(int a, int b) {
    return a > b
               ? a
               : b;
}

int somma(int a, int b) {
    return a + b;
}

int riduci(int a[], int n, int (*f)(int, int)) {
    if (n == 0)
        return 0;
    int acc = a[0];
    for (int i = 0; i < n; i++) {
        acc = f(acc, a[i]);
    }
    return acc;
}

int main() {
    int a[] = {3, 5, 4, 5, 1, 2, 6, 3, 5, 3, 3, 5, 4, 5, 1, 2, 6, 3, 5, 3};
    const int N = sizeof(a) / sizeof(int);
    cout << "Minimo: " << riduci(a, N, minimo) << endl;
    cout << "Massimo: " << riduci(a, N, massimo) << endl;
    cout << "Somma: " << riduci(a, N, somma) << endl;

    // system("pause");
    return EXIT_SUCCESS;
}