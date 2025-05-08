#include <stdio.h>

int main() {
    for (int i = 0; i <= 1000; i++) {
        if (i % 7 == 0) { // Verifica si el número es múltiplo de 7
            printf("%d\n", i);
        }
    }
    return 0;
}