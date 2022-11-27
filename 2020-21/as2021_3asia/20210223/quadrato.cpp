#include <iostream>
using namespace std;

double quadrato(double x) {
	return x * x;
}

void stampa_quadrato(double x) {
	cout << "Il quadrato di " << x << " è " << quadrato(x) << endl;
}

int main() {
	stampa_quadrato(1.234);
}

