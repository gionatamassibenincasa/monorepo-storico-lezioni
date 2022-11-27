#include <iostream>
using namespace std;

template<typename T>
void scambia (T &a, T &b) {
    T appoggio = a;
    a = b;
    b = appoggio;
}

template<typename Numero>
Numero raddoppia(Numero n) {
    return n * 2;
}

int main() {
    int a = 1, b = 2;
    float c = 1.5, d = 2.5;
    scambia(a, b);
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    scambia(c, d);
    cout << "c:" << c << endl;
    cout << "d:" << d << endl;
    cout << "raddoppia<int>(a):" << raddoppia(a) << endl;
    cout << "raddoppia<float>(c):" << raddoppia(c) << endl;

    return 0;
}