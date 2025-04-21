#include <iostream>

using namespace std;

const int TAM = 10;

// Funci�n para ingresar n�meros
void ingresarNumeros(int arr[]) {
    cout << "Ingrese " << TAM << " numeros enteros:\n";
    for (int i = 0; i < TAM; i++) {
        cin >> arr[i];
    }
}

// Funci�n para calcular la suma total
int calcularSuma(int arr[]) {
    int suma = 0;
    for (int i = 0; i < TAM; i++) {
        suma += arr[i];
    }
    return suma;
}

// Funci�n para calcular el promedio
double calcularPromedio(int suma) {
    return static_cast<double>(suma) / TAM;
}

// Funci�n para encontrar el valor m�ximo y m�nimo
void encontrarMaxMin(int arr[], int& max, int& min) {
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < TAM; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
}

// Funci�n para contar n�meros pares e impares
void contarParesImpares(int arr[], int& pares, int& impares) {
    pares = 0;
    impares = 0;
    for (int i = 0; i < TAM; i++) {
        if (arr[i] % 2 == 0) {
            pares++;
        }
        else {
            impares++;
        }
    }
}

int main() {
    int numeros[TAM], maximo, minimo, pares, impares;

    ingresarNumeros(numeros);

    int suma = calcularSuma(numeros);
    double promedio = calcularPromedio(suma);
    encontrarMaxMin(numeros, maximo, minimo);
    contarParesImpares(numeros, pares, impares);

    cout << "\nResultados:\n";
    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Maximo: " << maximo << endl;
    cout << "Minimo: " << minimo << endl;
    cout << "Cantidad de numeros pares: " << pares << endl;
    cout << "Cantidad de numeros impares: " << impares << endl;

    return 0;
}
