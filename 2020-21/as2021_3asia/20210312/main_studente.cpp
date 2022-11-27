#include "Studente.h"

int main() {
  // Oggetto istanza
  Studente pippo(1, "Pippo", "Baudo");
  Studente pluto(2, "Pluto", "Topolino");
  pippo.presentati();
  pluto.presentati();

  return 0;
}
