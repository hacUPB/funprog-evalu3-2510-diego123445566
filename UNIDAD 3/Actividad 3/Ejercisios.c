#include <stdio.h>

int main() {
    for (int i = 0; i <= 1000; i++) {
        switch (i % 2) { // Se usa el residuo para hacer una condición dentro del switch
            case 0:
            case 1:
                printf("%d\n", i);
                break;
        }
    }
    return 0;
}

