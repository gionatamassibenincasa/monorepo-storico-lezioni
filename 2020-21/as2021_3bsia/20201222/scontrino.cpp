/* Calcola l'importo da pagare nel caso di vendita di beni
  
  . Richiedi all'utente il numero di articoli
  . Per ogni articolo richiedi il prezzo unitario e la quantità
  . Stampa l'importo totale

  .--------------------.
  | Num art. 5         |
  | Panino 5 x 0,25    |
                  2,50 |
  | ....               |
  | Totale:  13,50     |
  .--------------------.

  Vincoli non funzionali: usa il costrutto FOR
*/
#include <iostream>
using namespace std;

int main() {
  int n_articoli;
  double totale = 0;
  cout << "Immetti il numero di articoli: ";
  cin >> n_articoli;

  for (int articolo = 0; articolo < n_articoli; articolo++) {
    int quantita;
    double prezzo_unitario;
    cout << "Immettere la quantità: ";
    cin >> quantita;
    cout << "Immettere il prezzo unitario: ";
    cin >> prezzo_unitario;
    totale += quantita * prezzo_unitario;
  }
  cout << "Il totale è: " << totale << endl;

  return 0;
}
