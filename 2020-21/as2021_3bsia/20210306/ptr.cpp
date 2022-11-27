#include <iostream>
using namespace std;

void stampa(int a[], int n) {
    cout << "{";
    if (n > 0) {
        cout << a[0];
    }
    for (int i = 1; i < n; i++)
    {
        cout << ", " << a[i];
    }
    cout << "}" << endl;
}

void stampa_ptr(int* a, int n) {
    cout << "{";
    if (n > 0) {
        cout << *a;
    }
    for (int i = 1; i < n; i++)
    {
        cout << ", " << *(a + i);
    }
    cout << "}" << endl;
}


int main() {
    int i = 12345;
    int* pi = &i;
    int vi[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    cout << "Valore di i: " << i << endl;
    cout << "Locazione di i: " << &i << endl;
    cout << "Valore di pi: " << pi << endl;
    cout << "Valore della locazione di memoria _puntata_ da pi: " << *pi << endl;
    cout << "Locazione di pi: " << &pi << endl;
    cout << "vi: " << vi << endl;

    stampa_ptr(vi, 10);

    return 0;
}
