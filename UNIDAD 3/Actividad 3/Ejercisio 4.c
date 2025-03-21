#include <stdio.h>

int main() {
    for (int i = 0; i <= 1000; i++) {
        if (i % 7 == 0 || i % 9 == 0) { // Verifica si el número es múltiplo de 7 y 9
            printf("%d\n", i);
        }
    }
    return 0;
}