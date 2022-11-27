#include <cstdlib>
#include <iostream>
using namespace std;

void stampa_array(double array[], int n)
{
    for (int indice = 0; indice < n; indice++) {
        cout << array[indice] << " ";
    }
    cout << endl;
}

unsigned int len(double array[], int n) {
    int i;
    for (i = 0; i < n && array[i] != 0; i++) {
    }
    return i;
}

double somma(double array[], int n) {
    double accumulatore = 0;
    for (int i = 0; i < n; i++)
        accumulatore += array[i];

    return accumulatore;
}

double media(double array[], int n) {
    // Usare le funzioni somma e len
    return somma(array, 10) / len(array, 10);
}

int main(int argc, char *argv[])
{
    // Array di 10 double
    double voti[10] = {7, 6.5, 8, 10, 2};
    cout << "Sequenza di voti: ";
    stampa_array(voti, 10);
    cout << "Numero di voti: " << len(voti, 10) << endl;
    cout << "Somma dei voti: " << somma(voti, 10) << endl;
    cout << "Media: " << media(voti, 10) << endl;

    // system("PAUSE");
    return EXIT_SUCCESS;
}
