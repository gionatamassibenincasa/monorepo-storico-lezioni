/**
 * @file tipo_int.cpp
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
    int i1 = -1;
    int i2 = 299792458;
    int i3 = 10000000000;
    short int si = -15000;
    long int li = 10000000000;
    long long int lli = 10000000000;
    unsigned int ui = -1;

    cout
        << "i1: " << i1 << endl
        << "i2: " << i2 << endl
        << "i3: " << i3 << endl
        << "si: " << si << endl
        << "li: " << li << endl
        << "lli: " << lli << endl
        << "ui: " << ui << endl;

    cout << "Un short int occupa " << sizeof(short int) << " byte" << endl;
    cout << "Un int occupa " << sizeof(int) << " byte" << endl;
    cout << "Un unsigned int occupa " << sizeof(unsigned int) << " byte" << endl;
    cout << "Un long int occupa " << sizeof(long int) << " byte" << endl;
    cout << "Un long long int occupa " << sizeof(long long int) << " byte" << endl;

    return 0;
}
