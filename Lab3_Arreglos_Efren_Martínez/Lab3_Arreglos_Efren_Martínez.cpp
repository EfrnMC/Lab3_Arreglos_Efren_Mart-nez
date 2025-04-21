#include <iostream>
using namespace std;

int main() {
    int numeros[10];  // Declaramos un arreglo de 10 enteros

    // Llenamos el arreglo con los números del 1 al 10
    for (int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }

    // Imprimimos cada valor con su índice correspondiente
    for (int i = 0; i < 10; i++) {
        cout << "Índice " << i << ": " << numeros[i] << endl;
    }

    return 0;
}
