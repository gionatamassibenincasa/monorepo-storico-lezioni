/**
 * Usiamo un sotto-insieme del linguaggio C++ che permette la definione di funzioni,
 * con:
 *  due operatori aritmetici prefissi
 *   ++ che incrementa un valore e
 *   -- che decrementa un valore,
 *  un operatore logico che realizza il confronto con zero
 *   == 0,
 * un operatore condizionale ternario <confronto>?<conseguente>:<alternativa>
 * 
 * Definiamo la funzione che calcola la somma di due numeri naturali.
*/
#include <iostream>
using namespace std;

int somma(int n, int m);

int main() {
	int a, b, c;
	cout << "Immetti un natuale: ";
	cin >> a;
	cout << "Un altro naturale: ";
	cin >> b;
	c = somma(a, b);
	cout << a << " + " << b << " = " << c << endl;

	return 0;
}

int somma(int n, int m) {
	return (m == 0) ?
		n :
		somma(++n, --m); // n _+_ m = (n+1) _+_ (m-1)
}
