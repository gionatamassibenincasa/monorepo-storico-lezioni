/* mediano.cpp
 *
 * Data una serie di n numeri, con n dispari, determina
 * quel numero che ha (n-1)/2 numeri minori o uguali
 * e (n-1)/2 numeri maggiori o uguali.
 *
 * Autore: Gionata Massi <gionata.massi@savoiabenincasa.it>
 * Data: 2016-03-21
 */

#include<iostream>		// Per cin, cout, operatore << e >>
#include<algorithm>		// Per sort

using namespace std;		// cin, cout, sort sono definiti nel namespace std

int main()
{
	int n,			    //numero di dati
	 indice_mediano;	// indice del dato mediano
	do {
		cout << "Quanti dati inserirai? Immetti un numero dispari: ";
		cin >> n;
	} while (n % 2 == 0);	// continua fintanto che n e' pari

	// n è dispari

	int v[n];		// dichiara l'array v di n elementi
	indice_mediano = (n - 1) / 2;	// calcola l'indice della posizione centrale

	// Popola l'array
	while (n > 0) {
		cout << "immettere un valore: ";
		cin >> v[n - 1];
		n = n - 1;
	}

	// Ordina l'array
	sort(v, v + n);

	// Estrae e stampa il valore mediano
	cout << "il mediano vale: " << v[indice_mediano];

#ifdef _WIN32
	/* Se si compila per windows allora si richiede
	   l'esecuzione del programma pause */
	system("pause");
#endif

	// Restituisce il controllo al sistema operativo
	// con codice di errore 0 (EXIT_SUCCESS)
	return 0;
}
