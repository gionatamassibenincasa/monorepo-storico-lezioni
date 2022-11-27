# Codici sorgenti di esempio

---

## Compito

* Compila?
* Cosa fa/scrive?
* Quali costrutti del linguaggio usa?

---

## Ridotto

* nome del progetto: `ridotto`
* nome del file: `ridotto.cpp`
* nome dell'eseguibile:  `ridotto.exe`

```cpp
int main() {}
```

---

## Ciao mondo

* nome del progetto: `ciaomondo`
* nome del file: `ciaomondo.cpp`
* nome dell'eseguibile:  `ciaomondo.exe`

```cpp
#include <iostream>

int main()
{
	std::cout << "Ciao mondo!\n";
}
```

---

## Quadrato

```cpp
#include <iostream>
using namespace std;

double quadrato(double x) {
	return x * x;
}

void stampa_quadrato(double x) {
	cout << "Il quadrato di " << x << " è "
             << quadrato(x) << endl;
}

int main() {
	stampa_quadrato(1.234);
}
```

---

## Sistema

```cpp
#include <cstdlib>

int main() {
	system("pause");
	return 0;
}
```
