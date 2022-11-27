/*
 * semifinali_min.cpp
 * 
 * Legge in input il valore di 4 elementi.
 * Calcola l'elemento minimo e lo stampa a video.
 */
 
 #include <iostream>
 
 using namespace std;
 
 int main()
 {
    int a, b, c, d, //< i 4 valori
        e,         //< il min tra a e b
        f,         //< il min tra c e d
        m;          // il minimo = min(min(a,b), min(c,d))

    cout << "Immetti 4 valori: ";
    cin >> a >> b >> c >> d;
    
    if (a <= b)
        e = a;
    else
        e = b;
        
    if (c <= d)
        f = c;
    else
        f = d;
        
    if (e <= f)
        m = e;
    else
        m = f;
    
    
    cout << "Il minimo vale: " << m << endl;
    
    return 0; // EXIT_SUCCESS    
 }
 