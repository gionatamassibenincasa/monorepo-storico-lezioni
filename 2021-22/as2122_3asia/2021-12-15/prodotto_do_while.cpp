/**
 * @file prodotto_do_while.cpp
 * @author Gionata Massi
 * @brief Calcola il prodotto usando le addizioni e il costrutto do/while
 * @version 0.1
 * @date 2021-12-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <cassert>
using namespace std;

/**
 * @brief Calcola il prodotto usando le addizioni
 * 
 * @param a il primo fattore
 * @param b il secondo fattore
 * @return int a moltiplicato b
 */
int prodotto(int a, int b)
{
    int acc = 0;
    do
    {
        acc = acc + a;
        b = b - 1;
    } while (b > 0);
    return acc;
}

/**
 * @brief Testa la funzione prodotto
 * 
 */
void testProdotto()
{
    assert(prodotto(10, 5) == 50);
    assert(prodotto(10, 10) == 100);
    // assert(prodotto(10, 0) == 0);
}

/**
 * @brief Stampa la tabellina
 * 
 * @return int 0 se ok
 */
int main()
{
    testProdotto();
    int r = 0;
    do
    {
        int c = 0;
        do
        {
            cout << prodotto(r, c) << "\t";
            c = c + 1;
        } while (c < 11);
        cout << endl;
        r = r + 1;
    } while (r < 11);
}
