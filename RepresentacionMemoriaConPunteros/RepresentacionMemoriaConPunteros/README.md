# Manejo de Arreglos y Punteros en C++

Este programa en C++ demuestra cómo trabajar con arreglos y punteros. El programa crea un arreglo de enteros, utiliza un puntero para acceder a los elementos del arreglo y muestra tanto los valores de los elementos como sus direcciones de memoria.

## Propósito del Código

El propósito principal del programa es ilustrar cómo se pueden utilizar punteros para acceder a los elementos de un arreglo. También muestra cómo imprimir tanto los valores de los elementos como las direcciones de memoria asociadas a ellos.

## ¿Qué incluye el código?

1. **Definición de un Arreglo**
   - Se define un arreglo de enteros `arr` con 3 elementos:
     ```cpp
     int arr[3] = {10, 20, 30};
     ```
   - El arreglo contiene los valores `10`, `20` y `30` en las posiciones 0, 1 y 2 respectivamente.

2. **Declaración de un Puntero**
   - Se declara un puntero `ptr` que apunta al primer elemento del arreglo `arr`:
     ```cpp
     int* ptr = arr;
     ```
   - Este puntero permite acceder a los elementos del arreglo mediante aritmética de punteros.

3. **Iteración y Acceso a Elementos del Arreglo**
   - Un bucle `for` recorre el arreglo y para cada elemento imprime:
     - El valor del arreglo en la posición `i`:
       ```cpp
       cout << "El valor de arr[" << i << "] es: " << arr[i] << endl;
       ```
     - La dirección de memoria de cada elemento usando el operador `&`:
       ```cpp
       cout << "La dirección de arr[" << i << "] es: " << &arr[i] << endl;
       ```
     - El valor apuntado por el puntero desplazado con `ptr + i` (acceso directo mediante puntero):
       ```cpp
       cout << "El valor apuntado por ptr + " << i << " es: " << *(ptr + i) << endl;
       ```

4. **Salida del Programa**
   - El programa imprime para cada índice `i` del arreglo:
     - El valor del arreglo `arr[i]`.
     - La dirección de memoria de `arr[i]`.
     - El valor al que apunta `ptr + i`.

   Ejemplo de salida:
   ```plaintext
   El valor de arr[0] es: 10
   La dirección de arr[0] es: 0x7ffeefbff5e0
   El valor apuntado por ptr + 0 es: 10

   El valor de arr[1] es: 20
   La dirección de arr[1] es: 0x7ffeefbff5e4
   El valor apuntado por ptr + 1 es: 20

   El valor de arr[2] es: 30
   La dirección de arr[2] es: 0x7ffeefbff5e8
   El valor apuntado por ptr + 2 es: 30
