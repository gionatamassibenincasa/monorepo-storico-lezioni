#include <iostream>
using namespace std;

float somma(float A[], int len);
void stampa_array(float A[], int len) {
  cout << "{";
  if (len > 0)
    cout << A[0];
  for (int i = 1; i < len; i++)
    cout << ", " << A[i];
  cout << "}" << endl;
}


float somma(float A[], int len) {
  if (len == 0) return 0.;
  float acc = A[0];
  for(int i = 1; i < len; i++)
    acc += A[i];

  return acc;
}

int main() {
  float voti[5] = {6, 9, 3, 3, 9};
  stampa_array(voti, sizeof(voti) / sizeof(float));
  cout << "La somma è: " << somma(voti, sizeof(voti) / sizeof(float)) << endl;

  return 0;
}