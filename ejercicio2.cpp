//ejercicio 2
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  
    int n = 25;
    int log = n * log2(n); 
    int directo = n * n;   

    cout << "Comparaciones Algoritmo A (logarítmico): " << log << endl;
    cout << "Comparaciones Algoritmo B (directo): " << directo << endl;
  system("pause");
    if (log < directo) {
        cout << "El algoritmo A es más eficiente.\n";
    } else {
        cout << "El algoritmo B es más eficiente.\n";
    }
    return 0;
    system("pause");
}