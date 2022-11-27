/**
 * @file perimetro_trapezio_rettangolo.cpp
 * @author Gionata Massi (gionata.massi@savoiabenincasa.it)
 * @brief Calcolo del perimetro di un trapezio rettangolo date le basi e l'altezza
 * @version 0.1
 * @date 2021-11-03
 */
#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

/**
 * @brief Calcola il quadrato del numero
 * 
 * @param x il numero da moltiplicare per se stesso
 * @return @f[ x^2 @f]
 */
double quadrato(double x)
{
  return x * x;
}

/**
 * @brief Test della funzione quadrato
 * 
 */
void testQuadrato()
{
  assert(quadrato(2.0) == 4.0);
  assert(quadrato(-2.0) == 4.0);
  assert(quadrato(0.0) == 0.0);
  assert(quadrato(12.3) == 12.3 * 12.3);
}

/**
 * @brief Calcolo del perimetro di un trapezio rettangolo date le basi e l'altezza
 * 
 * @param base_maggiore la lunghezza della base maggiore
 * @param base_minore la lunghezza della base minore
 * @param altezza l'altezza
 * @return il perimetro
 */
double perimetro(double base_maggiore,
                 double base_minore,
                 double altezza)
{
  // il cateto del triangolo rettangolo formato dalla traslazione dell'altezza
  // sull'altro estremo della base minore
  double cateto = base_maggiore - base_minore;
  // il lato mancante del trapezio
  double ipotenusa = sqrt(
      quadrato(cateto) + quadrato(altezza));
  return base_maggiore + altezza +
         base_minore + ipotenusa;
}

/**
 * @brief Test della funzione perimetro con valori noti
 * 
 */
void testPerimetro()
{
  assert(perimetro(1, 1, 1) == 4);
  assert(perimetro(4, 1, 4) == 14);
  assert(perimetro(15, 10, 12) == 50);
}

/**
 * @brief Calcolo del perimetro di un trapezio rettangolo
 * 
 * Chiede all'utente le basi e l'altezza, calcola e scrive il perimetro
 * 
 * @return 0 se l'esecuzione termina correttamente
 */
int main()
{
  double base_maggiore,
      base_minore,
      altezza;
  // Lettura del valore base_maggiore
  cout << "Base maggiore: ";
  cin >> base_maggiore;
  // Lettura del valore base_minore
  // Ripete la richiesta fintanto che base_maggiore < base_minore
  do
  {
    cout << "Base minore: ";
    cin >> base_minore;
  } while (base_maggiore < base_minore);
  // Lettura del valore altezza
  cout << "Altezza: ";
  cin >> altezza;

  cout << "Perimetro: " << perimetro(base_maggiore, base_minore, altezza) << endl;

  testQuadrato();
  testPerimetro();

  return 0;
}
