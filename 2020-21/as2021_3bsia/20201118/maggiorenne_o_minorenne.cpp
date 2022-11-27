#include <iostream>
using namespace std;

int main() {
    int eta;
    
    cout << "Quanti anni hai?" << endl;
    std::cin >> eta;
    if (eta >= 18) {
        std::cout << "Sei maggiorenne" << std::endl;
    } else {
        std::cout << "Sei minorenne" << std::endl;
    }
    return 0;
}
