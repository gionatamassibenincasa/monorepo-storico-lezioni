/**
 * @file operazioni_su_interi.cpp
 * @author Gionata Massi
 * @brief Esperimenti con operatori su interi
 * @version 0.1
 * @date 2021-12-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
using namespace std;

int main()
{
    int a = 3, b = 4, c = 5;

    cout << a + b << endl;
    cout << a * b << endl;
    cout << a + b * c << endl;
    cout << c - a << endl;
    // Divisione intera
    cout << a / b << endl;
    cout << c / a << endl;
    // Resto della divisione intera
    cout << c % a << endl;
    // Pre-incremento
    cout << "Pre-incremento" << endl;
    cout << ++b << endl;
    cout << b << endl;
    // Post-incremento
    cout << "Post-incremento" << endl;
    cout << a++ << endl;
    cout << a << endl;

    return 0;
}