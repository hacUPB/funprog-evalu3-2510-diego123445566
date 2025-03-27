Este reto consiste en la creación de una calculadora de ingeniería que ofrecerá diversas funcionalidades clave. Entre ellas se incluirá lo siguiente:

1. Ley de Ohm, que permitirá a los estudiantes comprender y calcular los diferentes parámetros de esta importante Ley. 

2. Cálculo del factor de potencia, una medida crucial en la eficiencia energética de sistemas eléctricos. 

3. Resistencia de un conductor, una tarea fundamental en el diseño y análisis de circuitos eléctricos. 

4. Resistencia para LED, la calculadora proporcionará la posibilidad de calcular el valor de la resistencia requerida para limitar la corriente a través de un LED.

SOLUCION

1. Análisis del problema
Se requiere desarrollar una calculadora que ofrezca herramientas clave para estudiantes de ingeniería eléctrica o electrónica. Estas herramientas incluyen el cálculo de la Ley de Ohm, factor de potencia, resistencia de conductores y resistencias para LED.

2. Descomposición del problema en pequeñas partes
Cada función de la calculadora representa un subproblema independiente que debe analizarse y resolverse de forma modular:

Ley de Ohm: Se deben considerar variables como voltaje (V), corriente (I) y resistencia (R), así como la ecuación fundamental 
𝑉=𝐼⋅𝑅

Cálculo del factor de potencia:identificación de las variables de entrada

Potencia activa (P): Medida en vatios (W).
Potencia aparente (S): Medida en voltamperios (VA).
Ángulo de fase (𝜙): Se puede calcular a partir de P y S.

Cálculo del Factor de Potencia (FP)

Se obtiene mediante la fórmula:
𝐹𝑃=cos⁡(𝜙)=𝑃/𝑆
El programa debe calcular este valor y mostrarlo al usuario.

Cálculo de la Potencia Reactiva (Q)

La potencia reactiva se obtiene con:
𝑄=𝑆⋅sin(𝜙)

Se puede determinar a partir de la relación trigonométrica:
𝑄=sqrt(𝑆2−𝑃2)

Representación de los resultados

Después de realizar los cálculos, el programa debe mostrar:
El factor de potencia (FP = cos⁡(𝜙))
La potencia reactiva (Q)

Estructuras de control necesarias
Validaciones para evitar división por cero cuando 
𝑆=0.
Control de valores negativos o fuera de rango en las entradas.
Conversión de unidades si es necesario.
 
Esto es esencial en sistemas eléctricos para evaluar la eficiencia y el impacto de cargas inductivas o capacitivas.

Resistencia para LED: Es necesario aplicar la ecuación 
𝑅=𝑉𝑓𝑢𝑒𝑛𝑡𝑒−𝑉𝐿𝐸𝐷/ILED
para determinar el valor adecuado.

3. Identificación de las partes relevantes para cada módulo
Siguiendo el esquema de la imagen, para cada cálculo se deben identificar:

A.Variables de entrada: 

Ley de Ohm
Variables de entrada:

Voltaje (V)
Corriente (I)
Resistencia (R)

Variables de salida:

Voltaje (V), si se calcula con (V=I⋅R)
Corriente (I), si se calcula con (𝐼=𝑉/𝑅)
Resistencia (R), si se calcula con (𝑅=𝑉/𝐼)
​
B.Cálculo del Factor de Potencia
Variables de entrada:

Potencia activa (P)
Potencia aparente (S)
Ángulo de fase (𝜙)

Variables de salida:

Factor de potencia cos(𝜙)
Potencia reactiva (Q), calculada como sqrt(𝑄=𝑆2−𝑃2)

c.Resistencia de un conductor

Variables de entrada:

Resistividad del material (𝜌)
Longitud del conductor (L)
Área de la sección transversal (A)

Variables de salida:

Resistencia del conductor (R), calculada con 𝑅=𝜌𝐿/𝐴

D.Resistencia para LED

Variables de entrada:

Voltaje de la fuente (V𝑓𝑢𝑒𝑛𝑡e)
Voltaje del LED (V𝐿𝐸𝐷)
Corriente del LED (I𝐿𝐸𝐷)

Variables de salida:

Valor de la resistencia (R), calculada con 
𝑅=𝑉𝑓u𝑒𝑛𝑡𝑒−𝑉𝐿𝐸𝐷/ILED

#Primer menú

Como nos piden que desarrollemos un menú, la mejor opción para realizarlo sería usar un switch, para manejar las opciones.

Como nos piden que desarrollemos un menú, la mejor opción para realizarlo sería usar un switch, para manejar las opciones.

Por lo que aquí lo mejor para hacerlo. Sin tener en cuenta cada caso sería:

```c
do {
    printf("1. Calcular Ley de Ohm\n");
    printf("2. Calcular Factor de Potencia\n");
    printf("3. Calcular Resistencia de un Conductor\n");
    printf("4. Calcular Valor de la Resistencia para un LED\n");
    printf("5. Salir\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            break;
        default:
            printf("Opción inválida\n");
    }
} while (opcion != 5);




codigo de ley de ohm


#include <stdio.h>

// Función para calcular el voltaje (V = I * R)
void calcular_voltaje() {
    float I, R, V;
    printf("\nIngrese la corriente (A): ");
    scanf("%f", &I);
    printf("Ingrese la resistencia (Ohm): ");
    scanf("%f", &R);
    V = I * R; // Multiplicación
    printf("El voltaje es: %.2f V\n\n", V);
}

// Función para calcular la corriente (I = V / R)
void calcular_corriente() {
    float V, R, I;
    printf("\nIngrese el voltaje (V): ");
    scanf("%f", &V);
    printf("Ingrese la resistencia (Ohm): ");
    scanf("%f", &R);
    
    if (R == 0) { // Validar división por cero
        printf("Error: La resistencia no puede ser cero.\n\n");
        return;
    }
    
    I = V / R; // División
    printf("La corriente es: %.2f A\n\n", I);
}

// Función para calcular la resistencia (R = V / I)
void calcular_resistencia() {
    float V, I, R;
    printf("\nIngrese el voltaje (V): ");
    scanf("%f", &V);
    printf("Ingrese la corriente (A): ");
    scanf("%f", &I);
    
    if (I == 0) { // Validar división por cero
        printf("Error: La corriente no puede ser cero.\n\n");
        return;
    }
    
    R = V / I; // División
    printf("La resistencia es: %.2f Ohm\n\n", R);
}

// Función del menú principal
void menu() {
    int opcion;
    
    do {
        printf("===== Calculadora de la Ley de Ohm =====\n");
        printf("1. Calcular Voltaje (V)\n");
        printf("2. Calcular Corriente (I)\n");
        printf("3. Calcular Resistencia (R)\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                calcular_voltaje();
                break;
            case 2:
                calcular_corriente();
                break;
            case 3:
                calcular_resistencia();
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n\n");
        }
    } while (opcion != 4);
}

int main() {
    menu(); // Llamamos al menú principal
    return 0;
}



factor de potencia

#include <stdio.h>
#include <math.h> // Librería para sqrt()

// Función para calcular el Factor de Potencia
void calcular_factor_potencia() {
    float P, S, FP;
    printf("\nIngrese la Potencia Activa (W): ");
    scanf("%f", &P);
    printf("Ingrese la Potencia Aparente (VA): ");
    scanf("%f", &S);

    if (S == 0) { // Validar división por cero
        printf("Error: La Potencia Aparente no puede ser cero.\n\n");
        return;
    }

    FP = P / S; // División
    printf("El Factor de Potencia es: %.2f\n\n", FP);
}

// Función para calcular la Potencia Reactiva
void calcular_potencia_reactiva() {
    float P, S, Q;
    printf("\nIngrese la Potencia Activa (W): ");
    scanf("%f", &P);
    printf("Ingrese la Potencia Aparente (VA): ");
    scanf("%f", &S);

    if (S < P) { // Validar que S ≥ P
        printf("Error: La Potencia Aparente debe ser mayor o igual a la Potencia Activa.\n\n");
        return;
    }

    Q = sqrt((S * S) - (P * P)); // Potencia Reactiva
    printf("La Potencia Reactiva es: %.2f VAR\n\n", Q);
}

// Función del menú principal
void menu() {
    int opcion;

    do {
        printf("Calculadora de Factor de Potencia\n");
        printf("1. Calcular Factor de Potencia (FP)\n");
        printf("2. Calcular Potencia Reactiva (Q)\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                calcular_factor_potencia();
                break;
            case 2:
                calcular_potencia_reactiva();
                break;
            case 3:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n\n");
        }
    } while (opcion != 3);
}

int main() {
    menu(); // Llamamos al menú principal
    return 0;
}
