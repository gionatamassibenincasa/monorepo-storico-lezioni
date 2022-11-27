/**
 * La classe Persona rappresenta una persona nel sistema informativo
 * di un ufficio anagrafe. 
 *
 * @file Persona.h
 * @author Massi Gionata 3B SIA
 */

#include <string>

class Persona {
    public:
        Persona(std::string c = "", std::string n = "", int aa = 0);
        std::string cognome();
        std::string nome();
        int annoDiNascita();
        void annoDiNascita(int aa);
        void stampaAnagrafica();

    private:
        std::string m_cognome;
        std::string m_nome;
        int m_annoDiNascita;
};
