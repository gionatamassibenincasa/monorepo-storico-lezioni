template<class T>
class BiglietteriaAutomatica {
  public:
    // Costruttore
    BiglietteriaAutomatica(T prezzo);
    T prezzo();
    T saldoCorrente();
    void inserisciDenaro(T d);
    void stampaBiglietto();
  private:
    T m_prezzo;
    T m_saldo_corrente;
    T m_totale;
};
