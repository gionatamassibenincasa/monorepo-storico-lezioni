#include <iostream>
using namespace std;

int main() {
    int somma, N;
    
    cout << "Somma dei numeri da 0 a N. Immetti N:" << endl;
    cin >> N;
    somma = 0;
    // for (inizializzazione; condizione di non terminazione; aggiornamento)
    for (int contatore = 1; contatore <= N; contatore = contatore + 1) {
        // blocco
        somma = somma + contatore;
    }
    cout << "La somma dei primi " << N << " numeri vale " << somma << endl;
    return 0;
}
