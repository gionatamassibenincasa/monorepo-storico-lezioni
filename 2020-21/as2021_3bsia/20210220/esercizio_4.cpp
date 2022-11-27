/*
  Memorizzare in un array di 100 posti i primi cento numeri naturali
 in ordine inverso. Stamparli.
*/
#include <iostream>
using namespace std;

int main()
{
    // Dichiara un array di 100 numeri
    int A[100];
    // Popola l'array e ne stampa il valore
    for (int i = 0; i < 100; i++) {
        A[i] = 99 - i;
        cout << A[i] << endl;
    }
}
