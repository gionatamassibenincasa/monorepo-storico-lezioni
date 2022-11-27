#include <iostream>
using namespace std;

int main() {
    int somma, contatore, N;
    
    cout << "Somma dei numeri da 1 a N."
         << endl 
         << "Immetti N:"
        << endl;
    cin >> N;
    somma = 0;
    contatore = 1;
    while (contatore <= N) {
        somma = somma + contatore;
        contatore = contatore + 1;
    }
    cout << "La somma dei primi "
         << N
         << " numeri vale "
         << somma
         << endl;
    return 0;
}
