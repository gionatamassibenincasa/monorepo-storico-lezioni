/*
 Leggere un array di interi di 10 elementi e verificare 
 se è palindromo (ovvero se non cambia ad essere letto dal
 primo elemento all'ultimo o viceversa).

 .___________________.
 |a_0|a_1|...|a_1|a_0|
  --------------------

 Indici da 0 a  n - 1
 Elementi che devono corrispondere:
 0 <=> n - 1
 1 <=> n - 2
 2 <=> n - 3
 ...

La somma del primo e del secondo indice danno (n - 1)
Quindi gli elementi corrispondenti hanno indici
 i <=> n - 1 - i
*/
#include <iostream>
using namespace std;

bool palindroma(int A[], int n);
void stampaPalindroma(int A[], int n);

int main(){
    int pal[] = {'A', 'N', 'N', 'A'};
    int non_pal[] = {1, 2, 3, 3, 1};

    stampaPalindroma(pal, sizeof(pal) / sizeof(int));
    stampaPalindroma(non_pal, sizeof(non_pal) / sizeof(int));
}

bool palindroma(int A[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (A[i] != A[n - 1 - i])
            return false;
    }
    return true;
}

void stampaPalindroma(int A[], int n) {
    if (palindroma(A, n)) {
        cout << "Array palindromo" << endl;
    } else {
        cout << "Array NON palindromo" << endl;
    }
}
