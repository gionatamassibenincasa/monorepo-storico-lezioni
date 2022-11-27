/**
 * La classe Autoveicolo rappresenta un autoveicolo in sistema di simulazione
 * del traffico. 
 *
 * @file Autoveicolo.h
 * @author Massi Gionata 3B SIA
 */

#include <string>

enum StatoMotore {
    SPENTO = 0,
    ACCESO
};

class Autoveicolo {
    public:
        Autoveicolo(std::string mar, std::string mod, int vm);
        std::string marca();
        std::string modello();
        int velocitaMassima();
        int velocita();
        StatoMotore statoMotore();
        void accendi();
        void spegni();
        void accelera(int d);
        void frena(int d);
        void stampa();

    private:
        std::string m_marca;
        std::string m_modello;
        int m_velocitaMassima;
        int m_velocita;
        StatoMotore m_statoMotore;
};
