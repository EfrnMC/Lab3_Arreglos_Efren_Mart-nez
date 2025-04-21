#include <iostream>
using namespace std;

int main() {
    int numeros[15], mayores[15];
    int suma = 0, j = 0;

    // Ingreso de los números
    cout << "Ingrese 15 numeros:\n";
    for (int i = 0; i < 15; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    float promedio = suma / 15.0;

    // Filtrar mayores al promedio
    for (int i = 0; i < 15; i++) {
        if (numeros[i] > promedio) {
            mayores[j++] = numeros[i];
        }
    }

    // Ordenar los mayores al promedio (de mayor a menor)
    for (int i = 0; i < j - 1; i++) {
        for (int k = i + 1; k < j; k++) {
            if (mayores[i] < mayores[k]) {
                int temp = mayores[i];
                mayores[i] = mayores[k];
                mayores[k] = temp;
            }
        }
    }

    // Mostrar resultados
    cout << "\nPromedio: " << promedio << endl;

    cout << "Arreglo original: ";
    for (int i = 0; i < 15; i++) {
        cout << numeros[i] << " ";
    }

    cout << "\nMayores al promedio (ordenados): ";
    for (int i = 0; i < j; i++) {
        cout << mayores[i] << " ";
    }

    cout << endl;
    return 0;
}
