#include <iostream>
using namespace std;

void stampa_array(float *arr, int n) {
  cout << "{";
  if (n > 0) cout << arr[0];
  for (int i = 1; i < n; i++)
    cout << ", " << arr[i];
  cout << "}" << endl;
}

float somma_array(float arr[], int n) {
  float acc = 0.0;
  for (int i = 0; i < n; i++)
    acc = acc + arr[i];

  return acc;
}

float minimo_array(float arr[], int n) {
  float acc = 99999;
  for (int i = 0; i < n; i++) {
    acc = (arr[i] < acc) ? arr[i] : acc;
  }
  return acc;
}

float massimo_array(float arr[], int n) {
  float acc = -99999;
  for (int i = 0; i < n; i++) {
    acc = (arr[i] > acc) ? arr[i] : acc;
  }
  return acc;
}

float add2(float a, float b) {
  return a + b;
}

float min2(float a, float b) {
  return (a < b) ? a : b;
}

float max2(float a, float b) {
  if (a > b) return a; else return b;
}

float riduci_array(float arr[], int n, float init, float (*op2)(float, float)) {
  float acc = init;
  for (int i = 0; i < n; i++)
    acc = op2(acc, arr[i]);

  return acc;  
}

int main() {
  float voti[5] = {6, 4, 5, 7, 8};

  stampa_array(voti, sizeof(voti)/sizeof(float));
  for (int ultimoIndice = 0; ultimoIndice <= 5; ultimoIndice++) {
    cout << "Somma dei primi " << ultimoIndice << " elementi: "
      << somma_array(voti, ultimoIndice) << endl;
    cout << "Somma dei primi " << ultimoIndice << " elementi (riduci): "
      << riduci_array(voti, ultimoIndice, 0., add2) << endl;
    cout << "Minimo tra i primi " << ultimoIndice << " elementi: "
      << minimo_array(voti, ultimoIndice) << endl;
    cout << "Minimo tra i primi " << ultimoIndice << " elementi (riduci): "
      << riduci_array(voti, ultimoIndice, 9999999, min2) << endl;
    cout << "Massimo tra i primi " << ultimoIndice << " elementi: "
      << massimo_array(voti, ultimoIndice) << endl;
    cout << "Massimo tra i primi " << ultimoIndice << " elementi (riduci): "
      << riduci_array(voti, ultimoIndice, -999999, max2) << endl;
  }
  
  return 0;
}
