## Ejercicios Propuestos

1. **Condicional doble**: Escribe un programa que pregunte la edad y te indique si eres mayor o menor de edad.

2. **`if-else if-else`**: Crea un programa que evalúe la calificación de un alumno (0-5) e imprima: "Insuficiente", "Aceptable", "Sobresaliente", etc.

3. **Menú repetitivo**: Implementa un menú con al menos **cuatro** opciones y un bucle que permita seleccionar repetidamente cualquier opción hasta que se elija "Salir".


solucion

def ejercicio_1():
    edad = int(input("Ingresa tu edad: "))
    if edad >= 18:
        print("Eres mayor de edad.")
    else:
        print("Eres menor de edad.")

def ejercicio_2():
    calificacion = float(input("Ingresa la calificación (0-5): "))
    if calificacion < 3:
        print("Insuficiente")
    elif 3 <= calificacion < 4:
        print("Aceptable")
    elif 4 <= calificacion < 5:
        print("Sobresaliente")
    elif calificacion == 5:
        print("Excelente")
    else:
        print("Calificación fuera de rango.")

def menu():
    while True:
        print("\nMenú de opciones:")
        print("1. Evaluar edad")
        print("2. Evaluar calificación")
        print("3. Otra opción")
        print("4. Salir")
        opcion = input("Elige una opción: ")
        
        if opcion == "1":
            ejercicio_1()
        elif opcion == "2":
            ejercicio_2()
        elif opcion == "3":
            print("Opción en construcción...")
        elif opcion == "4":
            print("Saliendo del programa...")
            break
        else:
            print("Opción no válida, intenta de nuevo.")

menu()
