#include <iostream>
#include <string>
using namespace std;

struct Studente {
    int matricola;
    string nome;
    string cognome;
};
Studente registro[10];

int matricola = 1;


void inserisciStudente(string c, string n) {
    int i = matricola - 1;
    registro[i] = {matricola, c, n};
    /*
    registro[i].matricola = m;
    registro[i].cognome = c;
    registro[i].nome = n;
    */
    matricola++;
}

void stampaStudenti() {
    cout << "Matricola\tNome\tCognome" << endl;
    for (int i = 0; i < matricola - 1; i++)
    {
        cout << registro[i].matricola << "\t"
             << registro[i].nome << "\t"
             << registro[i].cognome << endl;
    }
    cout << endl;
}

int main() {
    inserisciStudente("Rossi", "Paolo");
    inserisciStudente("Del Piero", "Alex");
    inserisciStudente("Zoff", "Dino");

    stampaStudenti();

    return 0;
}