#include <iostream>
using namespace std;

int main() {
    int contatore, somma, N;
    cout << "Qual è l'ultimo numero?" << endl;
    cin >> N;
    somma = 0;
    contatore = 1;
    while (contatore <= N) {
        somma = somma + contatore;
        contatore = contatore + 1;
    }
    cout << "La somma dei primi " << N << " numeri naturali è " << somma << endl;

    return 0;
}
