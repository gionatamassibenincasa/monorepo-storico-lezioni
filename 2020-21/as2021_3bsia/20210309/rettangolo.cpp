#include <iostream>
using namespace std;

class Rettangolo {
    double _b, _h;
    
    public:
        // metodo (funzione membro)
        void assegna(double b, double h);
        double area();
};

void Rettangolo::assegna(double b, double h) {
    _b = b;
    _h = h;
}

double Rettangolo::area() {
    return _b * _h;
}


int main () {
    Rettangolo r1, r2;
    r1.assegna(1., 1.);
    r2.assegna(2., 3.);
    cout << "Area di r1: " << r1.area() << endl;
    cout << "Area di r2: " << r2.area() << endl;

    return 0;
}