#include <iostream>
#include "registro.h"
using namespace std;

int main() {
    for (int i = 0; i < 2; i++) {
        inserisciStudente();
    }
    cout << endl
         << "Stampa del registro" << endl
         << endl;
    stampaStudenti();
}