#include "persona.h"

class Anagrafe {
  public:
    Anagrafe();
    void inserisciDaTerminale();
    void stampaAnagrafica();

  private:
    static const int maxPersone = 10;
    Persona registro[maxPersone];
    int prossimaPosizione;
};