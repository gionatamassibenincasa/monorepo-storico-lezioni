#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int len;
    int sum = 0;
    int num;
    cout << "Immetti il numero di elementi della serie di dati: ";
    cin >> len;
    cout << endl;
    for(int i = 0; i < len;) {
            cout << "Inserisci il dato numero " << ++i << ": ";
            cin >> num;
            sum += num;
            cout << endl;
    }
    
    cout << "La somma dei numeri vale " << sum << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
