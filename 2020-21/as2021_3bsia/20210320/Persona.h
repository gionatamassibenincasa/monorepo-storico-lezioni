#include <string>

class Persona {
  private:
    std::string m_cognome;
    std::string m_nome;
    int m_anno_di_nascita;
  public:
    // Costruttore
    Persona(std::string c = "", std::string n = "", int aa = 0);
    // Accessor in lettura
    std::string cognome() const;
    std::string nome() const;
    int annoDiNascita() const;
    // Accessor in scrittura
    void annoDiNascita(int aa);
    // Altri metodi
    void stampa_anagrafica() const;
};
