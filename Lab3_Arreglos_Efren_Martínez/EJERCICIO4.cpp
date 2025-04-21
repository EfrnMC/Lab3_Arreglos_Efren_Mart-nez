#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int TAM = 15;

// Funcion para ingresar numeros
void ingresarNumeros(int arr[]) {
    cout << "Ingrese " << TAM << " numeros enteros:\n";
    for (int i = 0; i < TAM; i++) {
        cin >> arr[i];
    }
}

// Funcion para calcular el promedio
double calcularPromedio(int arr[]) {
    int suma = 0;
    for (int i = 0; i < TAM; i++) {
        suma += arr[i];
    }
    return static_cast<double>(suma) / TAM;
}

// Funcion para crear un nuevo arreglo con valores mayores al promedio
vector<int> mayoresAlPromedio(int arr[], double promedio) {
    vector<int> mayores;
    for (int i = 0; i < TAM; i++) {
        if (arr[i] > promedio) {
            mayores.push_back(arr[i]);
        }
    }
    return mayores;
}

// Funcion para ordenar el arreglo de mayor a menor
void ordenarDescendente(vector<int>& arr) {
    sort(arr.begin(), arr.end(), greater<int>());
}

// Funcion para imprimir un arreglo
void imprimirArreglo(const int arr[], int tam) {
    cout << "Arreglo original:\n";
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Funcion para imprimir un vector
void imprimirVector(const vector<int>& arr) {
    cout << "Arreglo de numeros mayores al promedio:\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int numeros[TAM];

    ingresarNumeros(numeros);

    double promedio = calcularPromedio(numeros);
    vector<int> mayores = mayoresAlPromedio(numeros, promedio);

    imprimirArreglo(numeros, TAM);
    imprimirVector(mayores);

    // Extra: Ordenar el nuevo arreglo si hay elementos en el
    if (!mayores.empty()) {
        ordenarDescendente(mayores);
        cout << "\nArreglo ordenado de mayor a menor:\n";
        imprimirVector(mayores);
    }

    return 0;
}
