#include <stdio.h>

int main() {
    int n;
    printf("Ingrese un número entero: ");
    scanf("%d", &n);
    // Patron ascendente
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    // Patrón descendente
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

