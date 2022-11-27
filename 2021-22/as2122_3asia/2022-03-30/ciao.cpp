#include <iostream>
using namespace std;

int main () {
  // char ciao[5] = {67, 73, 65, 79, 0};
  char ciao[5] = {'C', 'I', 'A', 'O', '\0'};
  char *pSaluto = &(ciao[0]);
  cout << ciao << endl;
  cout << pSaluto << endl;
  pSaluto[0] = 'Z';
  cout << ciao << endl;
  cout << pSaluto << endl;
  
  return 0;
}