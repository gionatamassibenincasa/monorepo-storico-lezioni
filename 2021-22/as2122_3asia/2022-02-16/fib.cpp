#include <iostream>
using namespace std;

int Fibonacci(int n) {
  if (n < 2) return 1;
  return Fibonacci(n - 1) + Fibonacci(n-2);
}

int main() {
  for (int i = 0; i < 10; i++) {
    cout << " " << Fibonacci(i);
  }
  cout << endl;

  return 0;
}