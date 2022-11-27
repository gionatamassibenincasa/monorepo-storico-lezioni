/**
 * @file massimo.cpp
 * @author Gionata Massi (gionata.massi@savoiabenincasa.it)
 * @brief Calcola e stampa il valore massimo tra due valori immessi da tastiera
 * @version 0.1
 * @date 2021-12-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <cassert>
using namespace std;

/**
 * @brief Restituisce il massimo tra i valori dei parametri
 * 
 * @param a un intero
 * @param b un altro intero
 * @return int il massimo tra a e b
 */
int massimo(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}

/**
 * @brief Testa la funzione massimo
 * 
 */
void testMassimo()
{
    assert(massimo(1, 2) == 2);
    assert(massimo(2, 1) == 2);
    assert(massimo(1, 1) == 1);
}

/**
 * @brief Legge due valori e ne stampa il massimo
 * 
 * @return int 0 se esecuzione senza errori
 */
int main()
{
    testMassimo();
    int v1, v2;
    cout << "Immetti due valori separati da spazio" << endl;
    cin >> v1 >> v2;
    cout << "Il massimo tra " << v1 << " e " << v2
         << " e' uguale a " << massimo(v1, v2) << endl;

    return 0;
}