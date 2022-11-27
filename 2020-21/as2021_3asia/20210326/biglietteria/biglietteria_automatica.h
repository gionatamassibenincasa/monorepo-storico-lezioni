class BiglietteriaAutomatica {
  public:
    // Costruttore
    BiglietteriaAutomatica(double prezzo);
    double prezzo();
    double saldoCorrente();
    void inserisciDenaro(double d);
    void stampaBiglietto();
  private:
    double m_prezzo;
    double m_saldo_corrente;
    double m_totale;
};