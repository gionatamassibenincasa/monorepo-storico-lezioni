#include <iostream>
using namespace std;

enum ColoreSemaforo { verde, giallo, rosso };

int main() {
  ColoreSemaforo sem = rosso;
  char ch;
  do {
    switch(sem) {
      case verde:
        cout << "Verde\n";
        sem = giallo;
        break;
      case giallo:
        cout << "Giallo\n";
        sem = rosso;
        break;
      case rosso:
        cout << "Rosso\n";
        sem = verde;
    }
    cin >> ch;
  } while (ch != 'q');

  return 0;
}