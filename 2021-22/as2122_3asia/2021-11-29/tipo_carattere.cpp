/**
 * @file tipi.cpp
 * @author Gionata Massi (gionata.massi@savoiabenincasa.it)
 * @brief Esempi di tipi di dato e loro dimensione in byte
 * @version 0.1
 * @date 2021-11-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
using namespace std;

int main()
{
    char ch1 = 'A';
    char ch2 = 'a';
    char ch3 = '0';
    char ch4 = ' ';
    char ch5 = 65;
    char ch6 = '\n';
    char bell = '\a';

    cout << ch1 << ch5 << ch6 << bell;
    cout << "Un char occupa " << sizeof(char) << " byte" << endl;

    return 0;
}