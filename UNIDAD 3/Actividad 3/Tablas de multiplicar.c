#include <stdio.h>

int main() {
    int numero;
    
    // Pedimos al usuario el numero
    printf("Ingresa el numero para mostrar su tabla de multiplicar");
    scanf("%d", &numero);
    printf("\n tabla de multiplicar del %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}