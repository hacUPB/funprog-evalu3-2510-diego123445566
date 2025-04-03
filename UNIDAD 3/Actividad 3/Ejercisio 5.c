#include <stdio.h>

int main() {
    int inicio, fin;
    
    // Pedimos al usuario el rango
    printf("Ingrese el inicio del rango: ");
    scanf("%d", &inicio);
    printf("Ingrese el fin del rango: ");
    scanf("%d", &fin);
    
    for (int i = inicio; i <= fin; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("BuzzBiss\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else if (i % 3 == 0) {
            printf("Biss\n");
        } else {
            printf("%d\n", i);
        }
        inicio ++;
    }
    return 0;
}
