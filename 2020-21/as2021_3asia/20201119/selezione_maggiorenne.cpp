#include <iostream>
#include <string>
using namespace std;

int main() {
    int anni;
    string stato;
    
    cout << "Quanti anni hai?" << endl;
    cin >> anni;
    if (anni < 18) {
        stato = "minorenne";
    } else {
        stato = "maggiorenne";
    }
    cout << "Sei " << stato << endl;
    return 0;
}
