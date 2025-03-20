#include <stdio.h>
int main(){ 
int secreto = 15;
int intento;

// Variable para almacenar el intento del usuario

printf("Adivina el numero!\n");
printf("Introduce tu intento:");
scanf("%d", &intento);

while (intento != secreto)
{
    if (intento < secreto)
        printf("El numero es mayor, intenta de nuevo:");
    else
        printf("El numero es menor, intenta de nuevo:");

    scanf("%d", &intento);
} // lo unico que cambie fue en los corchetes ya que en la hoja lo tenia partido y habia puesto varios corchetes en este lo puse todo en un solo corchete

printf("¡Felicidades has adivinado el numero!\n");

return 0;
}
