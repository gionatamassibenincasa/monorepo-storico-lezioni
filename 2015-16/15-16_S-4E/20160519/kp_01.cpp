#include <cstdlib>
#include <ctime>
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

bool verifica_ordinamento(const int p[], const int w[], const int n)
{
	/* Suppongo che i vettori siano
	 * ordinati per rapporto profitto / peso
	 * e lo dimostro se non trovo nessun contro-
	 * esempio */
	for (int j = 0; j < n - 1; j++) {
		double rapp_j = (double)p[j] / w[j],
		    rapp_j1 = (double)p[j + 1] / w[j + 1];
		// controesempio?              
		if (rapp_j < rapp_j1) {
			// ho trovato un controesempio
			return false;
		}
	}
	return true;
}

void alg_goloso(const int p[],
		const int w[],
		const int n, int Cr, int x[], int &profitto_totale)
{
	profitto_totale = 0;
	int j = 0;
	for (; j < n && w[j] <= Cr; j++) {
		// aggiungi l'oggetto j alla soluzione
		x[j] = 1;
		// aggiorna il profitto totale
		profitto_totale += p[j];
		// aggiorna la capacità residua
		Cr -= w[j];
	}
	for (; j < n; j++) {
		x[j] = 0;
	}
}

string stampa_vettore(const int v[], const int n)
{
	string ret = "[ ";
	std::stringstream ss;
	if (n > 0) {
		// ret += " " + to_string(v[0]);
		ss << v[0];
		ret += " " + ss.str();
		ss.str(std::string());
	}
	for (int j = 1; j < n; j++) {
		//ret += ", " + to_string(v[j]);
		ss << v[j];
		ret += ", " + ss.str();
		ss.str(std::string());
	}
	ret += "]";
	return ret;
}

bool genera_soluzione_successiva(int v[], const int n)
{
	if (v[n - 1] == 0) {
		v[n - 1] = 1;
		return true;
	}
	bool ultimo = true;
	for (int j = 0; j < n - 1; j++) {
		if (v[j] == 0) {
			ultimo = false;
			break;
		}
	}
	if (ultimo)
		return false;
	// L'ultimo elemento e' pari a 1
	int k = n - 1;
	while (v[k] == 1) {
		v[k] = 0;
		k--;
	}

	v[k] = 1;

	return true;
}

bool valore(const int x[], const int p[],
	    const int w[], const int n, int c, int &z)
{
	// Valuta se la soluzione e' ammissibile
	// e il suo valore
	z = 0;
	for (int j = 0; j < n; j++) {
		if (x[j] == 1) {
			z += p[j];
			c -= w[j];
		}
	}
	if (c >= 0)
		return true;
	return false;
}

void copia(int v1[], int v2[], const int n)
{
	for (int j = 0; j < n; j++)
		v2[j] = v1[j];
}

bool ricerca_esaustiva(int x[], const int p[],
		       const int w[], const int n, int c, int &z)
{
	int x_running[n], z_running = 0;
	int feasible_sol = 0;

	for (int j = 0; j < n; j++)
		x_running[j] = 0;

	// prima soluzione ammissibile
	if (valore(x_running, p, w, n, c, z_running)) {
		copia(x_running, x, n);
		z = z_running;
		feasible_sol++;
	}
	while (genera_soluzione_successiva(x_running, n)) {
		if (valore(x_running, p, w, n, c, z_running)) {
		    feasible_sol++;
		    if (z_running > z) {
    			copia(x_running, x, n);
    			z = z_running;
		    }
		}
	}
	cout << "Soluzioni ammissibili: " << feasible_sol << endl;
}

int main(int argc, char *argv[])
{
	const int n = 10;
	int p[n];
	int w[n];
	int c;
	// vettore soluzione
	int x[n];
	int profitto_totale;
	/* genero i parametri del problema */
	//srand(time(NULL));
	srand(0);
	for (int j = 0; j < n; j++) {
		p[j] = (rand() % 100) + 1;
		w[j] = (rand() % 100) + 1;
		//e[j] = (double) p[j] / w[j];
		x[j] = 0;
	}
	//c = (rand() % 9501) + 500;
	c = 100;
	sort(p, p + n, std::greater < int >());
	sort(w, w + n);
	/* termine della generazione dei parametri */
	
	cout << "n: " << n << endl;
	cout << "p: " << stampa_vettore(p, n) << endl;
	cout << "w: " << stampa_vettore(w, n) << endl;
	cout << "c: " << c << endl;
	
	cout << "L'insieme di oggetti e' "
	    << (verifica_ordinamento(p, w, n) ? "" : "non ")
	    << "ordinato" << endl;

	ricerca_esaustiva(x, p, w, n, c, profitto_totale);
	cout << "Soluzione esatta (ricerca esaustiva):" << endl
	    << " { profitto : " << profitto_totale << endl
	    << "   soluzione: " << stampa_vettore(x, n)
	    << "}" << endl;
	
	alg_goloso(p, w, n, c, x, profitto_totale);
	cout << "Soluzione golosa:" << endl
	    << " { profitto : " << profitto_totale << endl
	    << "   soluzione: " << stampa_vettore(x, n)
	    << "}" << endl;
#ifdef _WIN32
	system("PAUSE");
#endif
	return EXIT_SUCCESS;
}
