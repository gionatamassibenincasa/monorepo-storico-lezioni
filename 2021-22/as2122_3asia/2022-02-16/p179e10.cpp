#include <cassert>
#include <cmath>
#include <iostream>
using namespace std;

bool appartieneRetta(double m, double q, double xp, double yp) {
  return fabs(m * xp + q - yp) <= 1e-6;
}

void test() {
  assert(appartieneRetta(1, 0, 1, 1));
  assert(!appartieneRetta(1, 0, 1, 2));
  assert(appartieneRetta(2, 1, 0, 1));
}

int main() {
  test();
  double emme, qu, px, py;
  cout << "Immetti il coefficiente angolare m di una retta: ";
  cin >> emme;
  cout << "Immetti l'ordinata all'origine q di una retta: ";
  cin >> qu;
  cout << "Immetti un punto (xp, yp): ";
  cin >> px >> py;
  if (appartieneRetta(emme, qu, px, py)) {
    cout << "Il punto (" << px << ", " << py << ") appartiene alla retta y = "
         << emme << " x + " << qu << endl;
  } else {
    cout << "Il punto (" << px << ", " << py << ") NON appartiene alla retta y = "
         << emme << " x + " << qu << endl;
  }

  return 0;
}