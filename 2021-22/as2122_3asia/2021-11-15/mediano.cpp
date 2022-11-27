/**
 * @file mediano.cpp
 * @author Gionata Massi (gionata.massi@savoiabenincasa.it)
 * @brief Determina il mediano di un insieme di tre numeri
 * @version 0.1
 * @date 2021-11-15
 */

#include <iostream>
#include <cassert>
using namespace std;

/**
 * @brief Calcola il mediano di tre numeri
 * 
 * @param a il primo numero
 * @param b il secondo numero
 * @param c il terzo numero
 * @return il mediano tra i tre
 */
int mediano(int a, int b, int c)
{
    if (a <= b)
    {
        if (a <= c)
        {
            if (b <= c)
                return b;
            else
                return c;
        }
        else
        {
            return a;
        }
    }
    else
    { // a < b
        if (a <= c)
        {
            return a;
        }
        else
        {
            if (b <= c)
                return c;
            else
                return b;
        }
    }
}

/**
 * @brief Testa la funzione mediano
 *  
 * @return true se tutti i test passano, false altrimenti
 */
bool testMediano()
{
    assert(mediano(1, 2, 3) == 2);
    assert(mediano(1, 3, 2) == 2);
    assert(mediano(2, 1, 3) == 2);
    assert(mediano(2, 3, 1) == 2);
    assert(mediano(3, 1, 2) == 2);
    assert(mediano(3, 2, 1) == 2);
    return true;
}

/**
 * @brief Acquisisce tre numeri e stampa il mediano
 * 
 * @return int 0 se tutto ok, 1 se c'è un errore
 */
int main()
{
    if (testMediano())
    {
        cout << "Tutti i test passano" << endl;
    }
    else
    {
        cout << "Alcuni test falliscono" << endl;
        return 1;
    }
    int a, b, c;
    cout << "Inserisci tre numeri: ";
    cin >> a >> b >> c;
    cout << "Il mediano è: " << mediano(a, b, c) << endl;

    return 0;
}
