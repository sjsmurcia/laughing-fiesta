// Ejercicio 3: Ordenar con el algoritmo más eficiente
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void efficientSort(vector<int>& arr) {
    int n = arr.size();
    int comparacion = 0;
    
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            comparacion++;
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }

        // Mostrar el arreglo tras cada iteración
        cout << "Iteración " << i + 1 << ": ";
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }

    cout << "Comparaciones realizadas: " << comparacion << endl;
}

int main() {
    vector<int> arr = {36, 41, 10, 2, 25, 1};
    cout << "Ordenando ascendentemente con el algoritmo más eficiente (Selección Directa):\n";
    efficientSort(arr);

    cout << "Arreglo ordenado: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Orden descendente
    vector<int> arrDesc = {85, 76, 60, 54, 31, 7, 1, 0};
    cout << "\nOrdenando descendentemente con el algoritmo más eficiente (Selección Directa):\n";
    efficientSort(arrDesc);
    reverse(arrDesc.begin(), arrDesc.end()); 

    cout << "Arreglo ordenado descendentemente: ";
    for (int num : arrDesc) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
