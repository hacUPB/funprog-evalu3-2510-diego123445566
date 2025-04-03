#include <stdio.h>

// Prototipos de las funciones
int mcd(int, int);
void simplificar(int, int, int);

int main(int argc, char const *argv[]) {
    int numerador, denominador, maximo;

    printf("Ingresa el numerador:\n");
    scanf("%d", &numerador);

    printf("Ingresa el denominador:\n");
    scanf("%d", &denominador);

    // Llamada a la función
    maximo = mcd(numerador, denominador);
    printf("M.C.D = %d\n", maximo);

    return 0;
}

// Definiciones de las funciones
int mcd(int num1, int num2) {
    int mayor, menor, comun;

    if (num1 == num2) {
        return num1;
    }

    if (num1 > num2) {
        mayor = num1;
        menor = num2;
    } else {
        mayor = num2;
        menor = num1;
    }

    do {
        comun = mayor % menor;
        mayor = menor;
        menor = comun;
    } while (comun != 0);

    return mayor;
}