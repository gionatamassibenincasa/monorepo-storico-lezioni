#include <iostream>
using namespace std;

enum stato { AVVIO, ELABORAZIONE, FINE};

stato aggiorna_stato(stato s, char c) {
  if (c == 'q' || c == 'Q')
    return FINE;
  return ELABORAZIONE;
}

void stampa_stato(stato s) {
  switch(s) {
    case AVVIO:
      cout << "AVVIO" << endl;
      break;
    case ELABORAZIONE:
      cout << "ELABORAZIONE" << endl;
      break;
    case FINE:
      cout << "FINE" << endl;
  }
}

int main () {
  stato s = AVVIO;
  while (s != FINE) {
    cout << "Immetti un carattere, Q per uscire" << endl;
    char c;
    cin.get(c);
    s = aggiorna_stato(s, c);
    stampa_stato(s);
  }

  return 0;
}