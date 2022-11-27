/* kp01.cpp
 * 
 * Soluzioni approssimate ed esatte al
 * problema dello zaino binario
 */

#include <cstdlib>
#include <iostream>

using namespace std;

// Istanza
const int n = 8;
const int p[n] = { 15, 100, 90, 60, 40, 15, 10, 1 };
const int w[n] = { 2, 20, 20, 30, 40, 30, 60, 10 };

const int c = 102;

// Soluzione
int z_star;
int x_star[n];

void stampa_soluzione(const int v[], const int len);
void valuta(const int x[], const int n, int &z, int &W);
void copia(const int v1[], int v2[], const int n);

void ricerca_esaustiva(int x[], int n, int j);
void ricerca_approssimata(int x[], int n);

int main()
{
	int x_corrente[n];

	ricerca_approssimata(x_corrente, n);
	cout << z_star << endl;
	stampa_soluzione(x_star, n);

	ricerca_esaustiva(x_corrente, n, 0);
	cout << z_star << endl;
	stampa_soluzione(x_star, n);

	return EXIT_SUCCESS;
}

void ricerca_approssimata(int x_corrente[], int n)
{
	int z_corrente;
	int w_corrente;

	// Inizializziamo la soluzione corrente
	z_corrente = 0;
	w_corrente = 0;
	for (int j = 0; j < n; j++) {
		x_corrente[j] = 0;
		x_star[j] = 0;
	}
	z_star = 0;

	for (int j = 0; j < n; j++) {
		if (w_corrente + w[j] <= c) {
			x_corrente[j] = 1;
			z_corrente += p[j];
			w_corrente += w[j];
			if (z_corrente > z_star) {
				z_star = z_corrente;
				copia(x_corrente, x_star, n);
			}
		}
	}
}

void ricerca_esaustiva(int x_corrente[], int n, int j)
{
	if (j < n) {
		x_corrente[j] = 0;
		ricerca_esaustiva(x_corrente, n, j + 1);
		x_corrente[j] = 1;
		ricerca_esaustiva(x_corrente, n, j + 1);
	} else {
		int profitto_corrente, W;
		valuta(x_corrente, n, profitto_corrente, W);
		if (W <= c) {
			if (z_star < profitto_corrente) {
				z_star = profitto_corrente;
				copia(x_corrente, x_star, n);
			}
		}
	}
}

void valuta(const int x[], const int n, int &z, int &W)
{
	z = 0;
	W = 0;
	for (int j = 0; j < n; j++) {
		z += p[j] * x[j];
		W += w[j] * x[j];
	}
}

void copia(const int v1[], int v2[], const int n)
{
	for (int j = 0; j < n; j++)
		v2[j] = v1[j];
}

void stampa_soluzione(const int v[], const int len)
{
	cout << "{";
	if (len > 0) {
		cout << v[0];
	}
	for (int j = 1; j < len; j++) {
		cout << ", " << v[j];
	}
	cout << "}" << endl;
}
