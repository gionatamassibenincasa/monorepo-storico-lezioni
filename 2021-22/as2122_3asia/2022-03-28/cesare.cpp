#include <string>
#include <iostream>
using namespace std;

string cesare(string msg, int key);

int main() {
  const int N = 4;
  const string messaggi[N] {"CIAO MONDO", "MESSAGGIO TOP SECRET", "TESTO IN CHIARO", "A, B, C, W, X, Y, Z"};
  const int chiavi[N] {3, 20, 0, 2};

  for (int i = 0; i < N; i++) {
    string cifrato = cesare(messaggi[i], chiavi[i]);
    cout << "Testo in chiaro: " << messaggi[i] << endl;
    cout << "Chiave: " << chiavi[i] << endl;
    cout << "Testo cifrato: " << cifrato << endl;
    cout << "==========" << endl << endl;
  }

  return 0;
}

string cesare(string msg, int key) {
    string cifrato = msg;
    for(int i = 0; i < msg.size(); i++) {
      char lettera = msg[i];
      char nuovaLettera = lettera;
      if (lettera >= 'A' && lettera <= 'Z') {
        nuovaLettera = (lettera +  key);
        if (nuovaLettera > 'Z')
          nuovaLettera = 'A' + nuovaLettera % 'Z' - 1;
      }
      cifrato[i] = nuovaLettera;
    }
    return cifrato;
}