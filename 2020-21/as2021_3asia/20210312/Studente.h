#include <string>
class Studente {
  // Attributi
  int matricola;
  std::string nome;
  std::string cognome;
  public:
    // Metodi (funzioni membro)
    Studente(int m, std::string n, std::string c);
    void presentati();
};