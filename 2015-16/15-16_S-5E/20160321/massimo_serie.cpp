/* massimo_serie.cpp
 *
 * Autore: Gionata Massi <gionata.massi@savoiabenincasa.it>
 * Data: 2016-03-21
 */

#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(int argc, char *argv[])
{
	int massimo,	//< il massimo valore, fino ad ora
	 n,		    	//< il numero di dati da leggere
	 dato;			//< il numero corrente

	cout << "Immetti il numero di dati: ";
	cin >> n;

	cout << "Immetti il dato numero 1: ";
	cin >> massimo;
	n--;
	
	while (n > 0) {
		cout << "Immetti un numero: ";
		cin >> dato;
		if (dato > massimo)
			massimo = dato;
		// restano da leggere n - 1 dati
		n--;
	}

	cout << "Il massimo vale: " << massimo << endl;

#ifdef _WIN32
	system("pause");
#endif

	return EXIT_SUCCESS;
}
