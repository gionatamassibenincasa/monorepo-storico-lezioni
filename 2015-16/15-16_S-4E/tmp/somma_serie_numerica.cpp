/**
 * somma_serie_numerica.cpp
 * 
 * Legge in input il numero di elementi da sommare
 * e il valore degli elementi.
 * Calcola la somma e la stampa a video.
 */
 
 #include <iostream>
 
 using namespace std;
 
 int main()
 {
    int numero_di_elementi; //< Numero di elementi che saranno
                            // forniti in input
    int numero_di_elementi_residuo;
    cout << "Immetti il numero di valori da sommare tra loro: ";
    cin >> numero_di_elementi;
    numero_di_elementi_residuo = numero_di_elementi;
    
    int totale = 0;
    while(numero_di_elementi_residuo > 0) {
        int elemento;
        cout << "Immetti il " 
            << numero_di_elementi - numero_di_elementi_residuo + 1
            << "o numero: ";
        cin >> elemento;
        totale = totale + elemento;
        numero_di_elementi_residuo =
            numero_di_elementi_residuo - 1;
    }
    
    cout << "La somma dei valori della serie vale: " << totale << endl;
    
    return 0; // EXIT_SUCCESS    
 }
 