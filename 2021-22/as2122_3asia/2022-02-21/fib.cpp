#include <cassert>
#include <iostream>
using namespace std;

int Fibonacci(int n) {
  if (n < 2)
    return 1;
  int f_nMenoUno = 1;
  int f_nMenoDue = 1;
  int f;
  for (int i = 2; i <= n; i++) {
    f = f_nMenoDue + f_nMenoUno;
    f_nMenoDue = f_nMenoUno;
    f_nMenoUno = f;
  }

  return f;
}
/*
Fibonacci(10) richiede 177 valutazioni
int Fibonacci(int n) {
  static int n_valutazioni = 0;
  n_valutazioni++;
  cout << "Valutazioni: " << n_valutazioni << endl;
  if (n < 2) return 1;
  return Fibonacci(n - 1) + Fibonacci(n-2);
}
*/

void testFibonacci() {
  assert(Fibonacci(0) == 1);
  assert(Fibonacci(1) == 1);
  assert(Fibonacci(10) == Fibonacci(9) + 34);
}
int main() {
  // testFibonacci();
  for (int i = 0; i < 10; i++) {
    cout << " " << Fibonacci(i);
  }
  cout << endl;

  return 0;
}