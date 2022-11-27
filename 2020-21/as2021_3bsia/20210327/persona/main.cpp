#include "persona.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
    Persona persone[2];
    for (int i = 0; i < 2; i++) {
        string c, n;
        int a;
        cout << "Cognome: ";
        cin >> c;
        cout << "Nome: ";
        cin >> n;
        cout << "Anno di nascita: ";
        cin >> a;
        Persona p(c, n, a);
        persone[i] = p;
    }

    if (persone[0].annoDiNascita() == persone[1].annoDiNascita()) {
      cout << "Coetanei" << endl;
    } else if (persone[0].annoDiNascita() < persone[1].annoDiNascita()) {
      persone[1].stampaAnagrafica();
    } else {
      persone[0].stampaAnagrafica();
    }

    return 0;
}
