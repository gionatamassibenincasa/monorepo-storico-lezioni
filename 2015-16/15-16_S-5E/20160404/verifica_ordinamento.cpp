#include <iostream>
#include <string>

using namespace std;

// Dichiarazione
// Prototipo
/* is_ordered e' una funzione
 * che accetta come argomenti
 * un array v di numeri interi
 * e un numero intero; il valore
 * restituito e' di tipo booleano
 * (false/true)
 */
bool is_ordered(int v[], int len);

/* print e' una funzione
 * che accetta come argomenti
 * un array v di numeri interi
 * e un numero intero; restituisce
 * una stringa (di caratteri)
 */
string print(int v[], int len);

/* print_ordered e' una funzione
 * che accetta come argomenti
 * un array v di numeri interi
 * e un numero intero; non
 * restituisce valori ma ha
 * l'effetto collaterale di
 * stampare a video il vettore
 * e la proprieta' di ordinamento
 */
void print_ordered(int v[], int len);

/* Definizione della funzione
 * is_ordered
 */
bool is_ordered(int v[], int len)
{
	if (len <= 1)
		return true;
	for (int i = 0; i < len - 1; i++)
		if (v[i] > v[i + 1])
			return false;
	return true;
}

/* Definizione della funzione
 * print
 */
string print(int v[], int len)
{
	string str = "{";
	if (len >= 1)
		str += to_string(v[0]);
	for (int i = 1; i < len; i++)
		str += ", " + to_string(v[i]);
	str += "}";
	return str;
}

/* Definizione della funzione
 * print_ordered
 */
void print_ordered(int v[], int len)
{
	cout << "Il vettore " <<
	    print(v, len) <<
	    " e' " << (is_ordered(v, len) ? "" : "non ") << " ordinato" << endl;
}

/* test della funzione con due
 * casi di test
 */
int main(int argc, char *argv[])
{
	int v1[] = { 4, 7, 2, 9, 1 };
	int v2[] = { 1, 2, 4, 7, 9 };

	print_ordered(v1, 5);
	print_ordered(v2, 5);

	return 0;
}
