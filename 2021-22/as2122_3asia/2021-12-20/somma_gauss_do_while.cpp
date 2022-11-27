/**
 * @file somma_gauss_while.cpp
 * @author Gionata Massi (gionata.massi@savoiabenincasa.it)
 * @brief Somma dei numeri naturali compresi tra 1 e n
 * @version 0.1
 * @date 2021-12-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <cassert>
using namespace std;

/**
 * @brief Calcola la somma 1 + 2 + 3 + ... + n-2 + n-1 + n usando la ripetizione do while
 * 
 * @param n l'ultimo numero da aggiungere
 * @return int 1 + 2 + 3 + ... + n-2 + n-1 + n
 */
int sommaInteriDa1A(int n)
{
    int accumulatore = 0;
    int contatore = 1; //< Inizializzazione della variabile di controllo del ciclo
    do
    {
        accumulatore += contatore; //< Blocco del ciclo
        contatore++;               //< Aggiornamento della variabile di controllo del ciclo
    } while (contatore <= n);

    return accumulatore;
}

/**
 * @brief Calcola la somma 1 + 2 + 3 + ... + n-2 + n-1 + n con 3 operazioni
 * 
 * @param n l'ultimo numero da aggiungere
 * @return int 1 + 2 + 3 + ... + n-2 + n-1 + n
 */
int somma_gauss(int n)
{
    return n * (n + 1) / 2;
}

/**
 * @brief Testa la funzione sommaInteriDa1A usando esempi noti
 * 
 */
void testSommaInteriDa1A()
{
    assert(sommaInteriDa1A(5) == 15);
    assert(sommaInteriDa1A(10) == 55);
    assert(sommaInteriDa1A(100) == 5050);
}

/**
 * @brief Legge un intero n e stampa 1 + 2 + 3 + ... + n-2 + n-1 + n
 * 
 * @return int 0 se il processo è terminato correttamente
 */
int main()
{
    testSommaInteriDa1A();
    cout << "Immetti un numero" << endl;
    int n;
    cin >> n;
    cout << "La somma dei numeri compresi tra 1 e " << n << ": "
         << sommaInteriDa1A(n) << endl;

    return 0;
}
