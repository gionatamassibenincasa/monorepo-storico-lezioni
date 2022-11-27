/**
 * @file define_e_const.cpp
 * @author Gionata Massi
 * @brief Define e const per la definizione di costanti
 * @version 0.1
 * @date 2021-12-01
 * @note Non usare #define. Usare const!!!
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
using namespace std;

#define PI 3.14
const long double PiGreco = 3.1415;

int main()
{
    cout << PI << " " << 2 * PI << " " << PI / 2 << endl;
    cout << PiGreco << " " << 2 * PiGreco << " " << PiGreco / 2 << endl;
}
