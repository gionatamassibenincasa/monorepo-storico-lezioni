/* Ricerca dell'elemento mediano */

#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
    cout << "Immetti un numero dispari: ";
    int len;
    cin >> len;
    int serie[len];
    for(int j = 0; j < len; j++) {
        cin >> serie[j];
    }
    
    sort(serie, serie + len);
    
    cout << "L'elemento mediano vale " << serie[len/2] << endl;
    
    return EXIT_SUCCESS;
}