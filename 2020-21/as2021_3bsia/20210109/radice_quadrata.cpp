#include <iostream>
using namespace std;

// Prototipi (Dichiarazioni di funzione)
double radice_quadrata_iter(double stima, double x);
double migliora(double stima, double x);
double valor_medio(double x, double y);
bool suff_accurata(double stima, double x);
double radice_quadrata(double x);
double valore_assoluto(double x);
double quadrato(double x);

// Definizioni
double valor_medio(double x, double y)
{
    return (x + y) / 2;
}

int main() {
    double radicando, radice;
    cout << "Immetti il radicando: ";
    cin >> radicando;
    radice = radice_quadrata(radicando);
    cout << "La radice quadrata di " << radicando << " è " << radice << endl;
}

