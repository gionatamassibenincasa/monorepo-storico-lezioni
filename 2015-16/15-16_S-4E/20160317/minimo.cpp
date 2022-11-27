/* minimo.cpp
 * 
 * Dato in input il numero di elementi di una serie di dati interi
 * e i dati stessi, calcola e stampa il minimo;
 */
 
#include <iostream>
#include <climits>
 
using namespace std;
 
int main(int argc, char *argv[]) {
    int n;
    int minimo = INT_MAX;
    int dato;
     
    cout << "Inserisci il numero di elementi della serie: " << endl;
    cin >> n;
    do {
        cin >> dato;
        if (dato < minimo)
            minimo = dato;
        n--;
    } while (n > 0);
    
    cout << "Il valore minimo e' " << minimo << endl;
}
