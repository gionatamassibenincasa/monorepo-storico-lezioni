#include <iostream>
using namespace std;

enum Mesi
{
    GEN = 1,
    FEB
};

enum Settimana
{
    LUN = 1,
    MAR,
    MER,
    GIO,
    VEN,
    SAB,
    DOM
};

int main () {
    Settimana oggi = SAB;
    cout << oggi << endl;

    return 0;
}