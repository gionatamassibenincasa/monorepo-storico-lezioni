/**
 * @file tipo_bool.cpp
 * @author Gionata Massi (gionata.massi@savoiabenincasa.it)
 * @brief Esempi di tipi di dato e loro dimensione in byte
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
using namespace std;

int main()
{
    bool b1 = false;
    bool b2 = true;

    cout
        << "b1: " << b1 << endl
        << "b2: " << b2 << endl;
    cout << "Un bool occupa " << sizeof(bool) << " byte" << endl;

    return 0;
}
