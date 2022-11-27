#include <iostream>
using namespace std;

/**
 * @brief Calcolo del fattoriale come processo ricorsivo espresso da funzione ricorsiva.
 *
 * @param n in numero di cui calcolare il fattoriale.
 * @return il fattoriale di @p n.
 * @note @c fattoriale_rr è espresso in termini di @c fattoriale_rr.
 */
unsigned long int fattoriale_rr(unsigned int n) {
    return (n == 1)
            ? 1
            : n * fattoriale_rr (n - 1);
}

/**
 * @brief Funzione ausiliaria ricorsiva in coda.
 *
 * @param prodotto il fattoriale di (@p contatore - 1)
 * @param contatore il prossimo numero da considerare nel prodotto
 * @param n in numero di cui calcolare il fattoriale.
 * @return il fattoriale di @p n.
 * @note @c fattoriale_iterazione è espresso in termini di @c fattoriale_iterazione.
 * @note @c fattoriale_iterazione non richiederebbe di lasciare calcoli sospesi.
 */
unsigned long fattoriale_iterazione(unsigned long prodotto, unsigned int contatore, unsigned int n)
{
    return (contatore > n) ?
        prodotto :
        fattoriale_iterazione(prodotto * contatore, contatore + 1, n);       
}

/**
 * @brief Calcolo del fattoriale come processo iterativo (ricorsivo in coda).
 *
 * @param n in numero di cui calcolare il fattoriale.
 * @return il fattoriale di @p n.
 * @note @c fattoriale_ri @b non è espresso in termini di se stesso.
 */
unsigned long fattoriale_ri(unsigned int n) {
    return fattoriale_iterazione(1, 1, n);
}

/**
 * @brief Calcolo del fattoriale come processo iterativo.
 *
 * @param n in numero di cui calcolare il fattoriale.
 * @return il fattoriale di @p n.
 * @note @c fattoriale_ii @b non è espresso in termini di se stesso.
 */
unsigned long fattoriale_ii(unsigned int n) {
  unsigned long int prodotto = 1;
  for (unsigned int contatore = 1; contatore <= n; contatore++)
    prodotto *= contatore;
    
  return prodotto;
}

int main() {
  cout << fattoriale_rr(5) << endl;
  cout << fattoriale_ri(5) << endl;
  cout << fattoriale_ii(5) << endl;
   
  return 0;
}