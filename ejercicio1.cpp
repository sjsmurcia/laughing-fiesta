//ejercicio#1 
#include <iostream>
#include <vector>
using namespace std;

void seleecciondirecta(vector<int>& arr) {
    int n = arr.size();
    int c = 0, m = 0;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            m++;
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            m++;
        }
    }

    cout << "Comparaciones: " << c << endl;
    cout << "Movimientos: " << m << endl;
}
int main() {
    vector<int> arr = {1, 3, 40, 50, 80, 100, 120};
    seleecciondirecta(arr);

    cout << "Arreglo ordenado: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}