#include <cmath>
#include <iostream>
using namespace std;

double distanza(double x1, double y1, double x2, double y2) {
  const double deltaX = x1 - x2;
  const double deltaY = y1 - y2;
  return sqrt(deltaX * deltaX + deltaY * deltaY);
}

int main() {
  cout << "Distanza (0, 1) -- (1, 1): " << distanza(0, 1, 1, 1) << endl;

  return 0;
}