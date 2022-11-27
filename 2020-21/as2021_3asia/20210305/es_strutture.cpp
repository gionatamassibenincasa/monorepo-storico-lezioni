#include <iostream>
#include <string>
using namespace std;

struct Studente
{
    int matricola;
    string nome;
    string cognome;
};
Studente registroStudenti[100];

int matricola = 1;

void inserisciStudente() {
    int indice = matricola - 1;
    string nome, cognome;
    cout << "Inserisci i dati di uno studente" << endl;
    cout << "Nome: ";
    cin >> nome;
    cout << "Cognome: ";
    cin >> cognome;
    registroStudenti[indice].nome = nome;
    registroStudenti[indice].cognome = cognome;
    registroStudenti[indice].matricola = matricola++;
}

void stampaStudenti() {
    for (int i = 0; i < matricola - 1; i++) {
        cout << registroStudenti[i].nome << " "
             << registroStudenti[i].cognome << " "
             << registroStudenti[i].matricola << endl;
    }
}

int main() {
    for (int i = 0; i < 2; i++) {
        inserisciStudente();
    }
    cout << endl
         << "Stampa del registro" << endl
         << endl;
    stampaStudenti();
}