#include "anagrafe.h"

int main() {
  Anagrafe anagrafe;
  // Inserisci due cittadini
  anagrafe.inserisciDaTerminale();
  anagrafe.inserisciDaTerminale();
  // Stampa il registro
  anagrafe.stampaAnagrafica();

  return 0;
}