#include <iostream>
using namespace std;

int main() {
    int somma, N, contatore;
    
    cout << "Somma dei numeri da 0 a N. Immetti N:" << endl;
    cin >> N;
    somma = 0;
    contatore = 1;
    while (contatore <= N) {
        somma = somma + contatore;
        contatore = contatore + 1;
    }
    cout << "La somma dei primi " << N << " numeri vale " << somma << endl;

    return 0;
}
