#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a(10);
    for (int i = -1; i < 10; i++)
    {
        a[i] = i;
        cout << "a[" << i << "] = "
             << a[i] << endl;
    }
    /*
    for(auto elem: a) {
        cout << elem << endl;
    }
    */
    cout << "L'indice del valore 5 è: ";
    cout << *(find(a.begin(), a.end(), 5))
         << endl;
    return 0;
}
