template <class T>
class Vettore {
  private:
    T *p;
    int dim;
    int prossimaPosizione;
  public:
    Vettore(int d);
    ~Vettore();
    T elemento(int pos);
    bool inserisciInCoda(T valore);
};