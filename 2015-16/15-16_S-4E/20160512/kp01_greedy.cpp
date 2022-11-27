#include <cstdlib>
#include <iostream>
#include <sstream>

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

int main(int argc, char *argv[])
{
	const int n = 8;
	const int p[n] = { 15, 100, 90, 60,
		40, 15, 10, 1
	};
	const int w[n] = { 2, 20, 20, 30,
		40, 30, 60, 10
	};
	const int C = 102;

	// vettore soluzione
	int x[n];
	int profitto_totale;

	cout << "L'insieme di oggetti e' "
	    << (verifica_ordinamento(p, w, n) ? "" : "non ")
	    << "ordinato" << endl;

	alg_goloso(p, w, n, C, x, profitto_totale);
	cout << "Soluzione golosa:" << endl
	    << " { profitto : " << profitto_totale << endl
	    << "   soluzione: " << stampa_vettore(x, n)
	    << "}" << endl;

#ifdef _WIN32
	system("PAUSE");
#endif
	return EXIT_SUCCESS;
}
