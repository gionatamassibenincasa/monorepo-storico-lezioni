#include <string>
using namespace std;

class Persona {
  public:
    Persona(string n = "", string c = "");
    void stampaPersona();
  private:
    string nome;
    string cognome;
};