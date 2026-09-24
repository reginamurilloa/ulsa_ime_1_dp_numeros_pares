// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Por qué este include usa comillas y no < >?
#include "utilerias.h"

// ¿por qué debe existir la función main()?
int main() {
    // 1. Constante: cantidad de números a leer
    const int CANTIDAD = 5;
    int contador = 0;
    int pares[CANTIDAD];
    int totalPares = 0;
    
    // 2. Arreglo y contador (siempre inicializados)
    //    TODO: declara el arreglo pares. ¿De qué tamaño en el peor caso?
    //    TODO: declara totalPares. ¿Con qué valor empieza?

    std::cout << "Guardar los numeros pares  " << CANTIDAD << " numeros\n";
    while(contador < CANTIDAD) {
        int numero = leerEntero("Escribe un numero: ");
        if (numero % 2 == 0) {
            pares[totalPares] = numero;
            totalPares = totalPares + 1;
        }
        contador = contador + 1;
    }
    std::cout << "Los pares encontrados son: " << totalPares << " numeros pares\n";
    std::cout << "Valores: ";
    for (int i = 0; i < totalPares; i++) {
        std::cout << pares[i] << " ";
    }
        
    return 0;
}