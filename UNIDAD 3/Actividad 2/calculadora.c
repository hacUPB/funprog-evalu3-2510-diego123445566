
#include <stdio.h>


int main() {
    int operador;
    float num1, num2, resultado;
    
    do {
        printf("\nIngrese el primer número: ");
        scanf("%f", &num1);
        printf("Ingrese el segundo número: ");
        scanf("%f", &num2);

        printf("\nSeleccione una operación:\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicación\n");
        printf("4. División\n");
        printf("5. Salir\n");
        printf("Ingrese su opción: ");
        scanf("%d", &operador);

        switch(operador) {
            case 1:
                resultado = num1 + num2;
                break;
            case 2:
                resultado = num1 - num2;               
                break;
            case 3:
                resultado = num1 * num2;
              
                break;
            case 4:
                resultado = num1 / num2;
                  break;
             
            default:
                printf("operacion no validad\n");
                break;
        }
        printf("%f", resultado);
    } while (operador != 5);
    return 0;
}
