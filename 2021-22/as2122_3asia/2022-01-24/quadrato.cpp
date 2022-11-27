#include <iostream>
using namespace std;

double quadrato(double x) {
	return x * x;
}

int main() {
  int valori[5] = {-1,0,1,2,3};
  for(auto v: valori) {
    cout << "il quadrato di " << v << " e' " << quadrato(v) << endl;
  }

  return 0;
}