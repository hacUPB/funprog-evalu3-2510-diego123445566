#include <stdio.h>
#include <math.h> // Para sqrt()

// ===== FUNCIONES DE LA LEY DE OHM =====
void calcular_voltaje() {
    float I, R, V;
    printf("\nIngrese la corriente (A): ");
    scanf("%f", &I);
    printf("Ingrese la resistencia (Ohm): ");
    scanf("%f", &R);
    V = I * R;
    printf("El voltaje es: %.2f V\n\n", V);
}

void calcular_corriente() {
    float V, R, I;
    printf("\nIngrese el voltaje (V): ");
    scanf("%f", &V);
    printf("Ingrese la resistencia (Ohm): ");
    scanf("%f", &R);
    if (R == 0) {
        printf("Error: La resistencia no puede ser cero.\n\n");
        return;
    }
    I = V / R;
    printf("La corriente es: %.2f A\n\n", I);
}

void calcular_resistencia() {
    float V, I, R;
    printf("\nIngrese el voltaje (V): ");
    scanf("%f", &V);
    printf("Ingrese la corriente (A): ");
    scanf("%f", &I);
    if (I == 0) {
        printf("Error: La corriente no puede ser cero.\n\n");
        return;
    }
    R = V / I;
    printf("La resistencia es: %.2f Ohm\n\n", R);
}

void menu_ley_ohm() {
    int opcion;
    do {
        printf("===== Calculadora de la Ley de Ohm =====\n");
        printf("1. Calcular Voltaje (V)\n");
        printf("2. Calcular Corriente (I)\n");
        printf("3. Calcular Resistencia (R)\n");
        printf("4. Volver al menú principal\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: calcular_voltaje(); break;
            case 2: calcular_corriente(); break;
            case 3: calcular_resistencia(); break;
            case 4: printf("Regresando al menú principal...\n\n"); break;
            default: printf("Opción no válida. Intente de nuevo.\n\n");
        }
    } while (opcion != 4);
}

// ===== FUNCIONES DEL FACTOR DE POTENCIA =====
void calcular_factor_potencia() {
    float P, S, FP;
    printf("\nIngrese la Potencia Activa (W): ");
    scanf("%f", &P);
    printf("Ingrese la Potencia Aparente (VA): ");
    scanf("%f", &S);
    if (S == 0) {
        printf("Error: La Potencia Aparente no puede ser cero.\n\n");
        return;
    }
    FP = P / S;
    printf("El Factor de Potencia es: %.2f\n\n", FP);
}

void calcular_potencia_reactiva() {
    float P, S, Q;
    printf("\nIngrese la Potencia Activa (W): ");
    scanf("%f", &P);
    printf("Ingrese la Potencia Aparente (VA): ");
    scanf("%f", &S);
    if (S < P) {
        printf("Error: La Potencia Aparente debe ser mayor o igual a la Potencia Activa.\n\n");
        return;
    }
    Q = sqrt((S * S) - (P * P));
    printf("La Potencia Reactiva es: %.2f VAR\n\n", Q);
}

void menu_factor_potencia() {
    int opcion;
    do {
        printf("===== Calculadora de Factor de Potencia =====\n");
        printf("1. Calcular Factor de Potencia (FP)\n");
        printf("2. Calcular Potencia Reactiva (Q)\n");
        printf("3. Volver al menú principal\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: calcular_factor_potencia(); break;
            case 2: calcular_potencia_reactiva(); break;
            case 3: printf("Regresando al menú principal...\n\n"); break;
            default: printf("Opción no válida. Intente de nuevo.\n\n");
        }
    } while (opcion != 3);
}

// ===== MENÚ PRINCIPAL =====
void menu_principal() {
    int opcion;
    do {
        printf("===== MENÚ PRINCIPAL =====\n");
        printf("1. Calcular Ley de Ohm\n");
        printf("2. Calcular Factor de Potencia\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: menu_ley_ohm(); break;
            case 2: menu_factor_potencia(); break;
            case 3: printf("Saliendo del programa...\n"); break;
            default: printf("Opción no válida. Intente de nuevo.\n\n");
        }
    } while (opcion != 3);
}



#include <stdio.h>

// Función para calcular la resistencia de un conductor
void calcular_resistencia_conductor() {
    float resistividad, longitud, area, resistencia;

    // Solicitar datos al usuario
    printf("\nIngrese la resistividad del material (Ohm·m): ");
    scanf("%f", &resistividad);
    printf("Ingrese la longitud del conductor (m): ");
    scanf("%f", &longitud);
    printf("Ingrese el área de la sección transversal (m^2): ");
    scanf("%f", &area);

    // Validaciones
    if (area == 0) {
        printf("Error: El área de la sección no puede ser cero.\n\n");
        return;
    }

    // Cálculo de la resistencia
    resistencia = (resistividad * longitud) / area;
    printf("La resistencia del conductor es: %.4f Ohmios\n\n", resistencia);
}

// Menú de resistencia del conductor
void menu_resistencia_conductor() {
    int opcion;
    do {
        printf("===== Cálculo de Resistencia de un Conductor =====\n");
        printf("1. Calcular Resistencia de un Conductor\n");
        printf("2. Volver al menú principal\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: calcular_resistencia_conductor(); break;
            case 2: printf("Regresando al menú principal...\n\n"); break;
            default: printf("Opción no válida. Intente de nuevo.\n\n");
        }
    } while (opcion != 2);
}

// ===== MENÚ PRINCIPAL =====
void menu_principal() {
    int opcion;
    do {
        printf("===== MENÚ PRINCIPAL =====\n");
        printf("1. Calcular Ley de Ohm\n");
        printf("2. Calcular Factor de Potencia\n");
        printf("3. Calcular Resistencia de un Conductor\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: menu_ley_ohm(); break;
            case 2: menu_factor_potencia(); break;
            case 3: menu_resistencia_conductor(); break;
            case 4: printf("Saliendo del programa...\n"); break;
            default: printf("Opción no válida. Intente de nuevo.\n\n");
        }
    } while (opcion != 4);
}

// ===== FUNCIÓN PRINCIPAL (MAIN) =====
int main() {
    menu_principal();
    return 0;
}

#include <stdio.h>

// Función para calcular la resistencia de un LED
void calcular_resistencia_led() {
    float V_fuente, V_led, I_led, R;

    // Solicitar datos al usuario
    printf("\nIngrese el voltaje de la fuente (V): ");
    scanf("%f", &V_fuente);
    printf("Ingrese el voltaje del LED (V): ");
    scanf("%f", &V_led);
    printf("Ingrese la corriente del LED (A): ");
    scanf("%f", &I_led);

    // Validaciones
    if (I_led == 0) {
        printf("Error: La corriente no puede ser cero.\n\n");
        return;
    }
    if (V_fuente < V_led) {
        printf("Error: El voltaje de la fuente debe ser mayor al voltaje del LED.\n\n");
        return;
    }

    // Cálculo de la resistencia
    R = (V_fuente - V_led) / I_led;
    printf("La resistencia necesaria es: %.2f Ohmios\n\n", R);
}

// Menú de resistencia para LED
void menu_resistencia_led() {
    int opcion;
    do {
        printf("===== Cálculo de Resistencia para LED =====\n");
        printf("1. Calcular Resistencia para LED\n");
        printf("2. Volver al menú principal\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: calcular_resistencia_led(); break;
            case 2: printf("Regresando al menú principal...\n\n"); break;
            default: printf("Opción no válida. Intente de nuevo.\n\n");
        }
    } while (opcion != 2);
}

// ===== MENÚ PRINCIPAL =====
void menu_principal() {
    int opcion;
    do {
        printf("===== MENÚ PRINCIPAL =====\n");
        printf("1. Calcular Ley de Ohm\n");
        printf("2. Calcular Factor de Potencia\n");
        printf("3. Calcular Resistencia de un Conductor\n");
        printf("4. Calcular Resistencia para LED\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: menu_ley_ohm(); break;
            case 2: menu_factor_potencia(); break;
            case 3: menu_resistencia_conductor(); break;
            case 4: menu_resistencia_led(); break;
            case 5: printf("Saliendo del programa...\n"); break;
            default: printf("Opción no válida. Intente de nuevo.\n\n");
        }
    } while (opcion != 5);
}

// ===== FUNCIÓN PRINCIPAL (MAIN) =====
int main() {
    menu_principal();
    return 0;
}
