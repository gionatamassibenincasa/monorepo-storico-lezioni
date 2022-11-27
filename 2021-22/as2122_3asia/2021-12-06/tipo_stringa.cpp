/**
 * @file tipo_stringa.cpp
 * @author Gionata Massi
 * @brief  Esempio di stringhe
 * @version 0.1
 * @date 2021-12-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s1 = "Ciao";
    string s2 = " mondo!";
    string s3 = s1 + s2;

    cout << s3 << endl;
    cout << s3.size() << endl;

    cout << sizeof(s1) << " "
         << sizeof(s2) << " "
         << sizeof(s3) << " "
         << sizeof(string) << endl;

    return 0;
}
