#include <iostream>
using namespace std;

int main() {
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        a[i] = i;
        cout << "a[" << i << "] = "
             << a[i] << endl;
    }
    for(auto elem: a) {
        cout << elem << endl;
    }
    return 0;
}
