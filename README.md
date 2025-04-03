[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=18559866&assignment_repo_type=AssignmentRepo)
# Unidad No. 
## Información del estudiante  
Nombre del estudiante:  DIEGO ALEJANDRO ALVARADO MONTOYA 
Id.:000483783
---
# Preguntas de Control de Comprensión

1. ¿Cuál es la función principal del **preprocesador** en C?

2. ¿Por qué se dice que el **código objeto** (.o) no es directamente ejecutable?

3. ¿Qué diferencia existe entre el **código ensamblador** (.s) y el **código objeto** (.o)?

4. ¿Para qué sirve la opción `S` en GCC?

5. ¿Qué sucede si omitimos la etapa de **linker**?

solucion

1. Función del preprocesador en C:
El preprocesador en C se encarga de procesar directivas como #include, #define, #ifdef, y otras antes de que el código pase a la etapa de compilación. Expande macros, reemplaza #include por el contenido de los archivos correspondientes y realiza otras transformaciones.

2. Razón por la que el código objeto (.o) no es ejecutable:
Un archivo .o contiene código máquina generado a partir del código fuente en C, pero no es directamente ejecutable porque aún no está enlazado con otras dependencias necesarias, como bibliotecas y otros archivos objeto, que son necesarias para formar un ejecutable completo.

3. Diferencia entre código ensamblador (.s) y código objeto (.o):

El código ensamblador (.s) es una representación en lenguaje ensamblador del programa, que todavía es legible por humanos y necesita ser ensamblado.
El código objeto (.o) es el resultado de ensamblar el código en lenguaje ensamblador, ya convertido a instrucciones en lenguaje 
máquina, pero sin estar completamente enlazado con otros módulos.

4. Propósito de la opción -S en GCC:
La opción -S en GCC genera el código ensamblador a partir del código fuente en C, en lugar de compilarlo completamente. Esto permite analizar la conversión de C a ensamblador sin generar un archivo objeto.

5. Consecuencias de omitir la etapa de linker:
Si se omite la etapa de linker, no se podrán combinar los diferentes archivos objeto y bibliotecas necesarias para formar un ejecutable. Como resultado, el programa no podrá ejecutarse, ya que no existiría un archivo ejecutable .exe (en Windows) o sin extensión (en Linux/Mac) listo para ser ejecutado.