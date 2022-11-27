#include <iostream>
using namespace std;

int main()
{
    int numeri[3] {1, 2, 3};
    enum giorniSettimana {LUN = 1, MAR, MER, GIO, VEN, SAB, DOM};
    giorniSettimana oggi = VEN;

    cout << oggi << endl;
}