/**
 * @file echo.cpp
 * @author Gionata Massi (gionata.massi@savoiabenincasa.it)
 * @brief Copia a video la stringa letta da cin
 * @version 0.1
 * @date 2021-11-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
using namespace std;

int main()
{
    string s;
    do
    {
        cin >> s;
        cout << s << endl;
    } while (s != "fine");

    return 0;
}
