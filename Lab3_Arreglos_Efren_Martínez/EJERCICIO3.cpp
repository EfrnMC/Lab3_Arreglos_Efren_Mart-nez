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

// Funci�n para imprimir el arreglo en orden inverso usando punteros
void imprimirInverso(int* arr, int tam) {
    cout << "Arreglo en orden inverso:\n";
    for (int i = tam - 1; i >= 0; i--) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    int numeros[TAM];

    ingresarNumeros(numeros);
    imprimirInverso(numeros, TAM);

    return 0;
}
