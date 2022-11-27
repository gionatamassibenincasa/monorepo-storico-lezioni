#include <iostream>
using namespace std;

int main () {
    int intero = 1;
    int* pIntero;
    pIntero = &intero; // & indirizzo di memoria di intero

    cout << "Intero: " << intero << endl;
    cout << "Puntatore a intero: " << pIntero << endl;
    intero = 2;
    cout << "Contenuto della variabile _puntata_: " << *pIntero << endl;
    *pIntero = 3;
    cout << "Intero: " << intero << endl;

    return 0;
}
