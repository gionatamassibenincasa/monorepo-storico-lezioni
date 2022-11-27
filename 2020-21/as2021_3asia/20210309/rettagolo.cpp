#include <iostream>
using namespace std;

// Definizione della classe Rettangolo
class Rettangolo {
    public:
        Rettangolo(double b, double h);
        double area();
        double perimetro();
    private:
        double base;
        double altezza;
};

// Definizione della classe
Rettangolo::Rettangolo(double b, double h) {
    base = b;
    altezza = h;
}

double Rettangolo::area() {
    return base * altezza;
}

double Rettangolo::perimetro() {
    return 2*(base + altezza);
}

int main() {
    Rettangolo r1(1., 1.);
    Rettangolo r2(2., 3.);

    cout << "L'area di r1 è: " << r1.area() << endl;
    cout << "L'area di r2 è: " << r2.area() << endl;
    cout << "Il perimetro di r1 è: " << r1.perimetro() << endl;
    cout << "L'Il perimetro di r2 è: " << r2.perimetro() << endl;

    return 0;
}
