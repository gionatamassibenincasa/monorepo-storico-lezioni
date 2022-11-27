/*
Scrivi un programma in C++ che, all'interno della funzione main:

1. dichiara un array A di 10 numeri interi non inizializzato.
2. per mezzo di un ciclo for, assegna all'elemento di indice i il valore i,
   dove i è una variabile è un intera che assume i valori 0, 1, 2, ..., 9.

Prima di terminare, il programma deve avere in memoria l'array A = {0, 1, 2, 3, 4, 5,  6, 7, 8, 9}.
*/
int main() {
    // dichiara un array A di 10 numeri interi non inizializzato
    int A[10];
    for (int i = 0; i < 10; i++) {
        // assegna all'elemento di indice i il valore i
        A[i] = i;
    }
    
    /*
       _______________________________________.
    A | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
       ----------------------------------------
    */

    return 0;
}