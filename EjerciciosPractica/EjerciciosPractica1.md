# Ejercicios propuestos en C++

## 1. Tipos de Variable

### Ejercicio 1.1: Operaciones básicas con enteros
Escribe un programa que declare dos variables enteras (`int`), las inicialice con valores dados y luego imprima el resultado de las operaciones de suma, resta, multiplicación y división entre ellas.

### Ejercicio 1.2: Uso de variables de tipo `double` y `char`
Crea un programa que declare una variable de tipo `double` para almacenar una temperatura y otra de tipo `char` para almacenar la unidad de medida (`'C'` o `'F'`). Imprime ambos valores en la consola.

---

## 2. Operadores

### Ejercicio 2.1: Operadores aritméticos
Crea un programa que pida dos números enteros al usuario y luego calcule el área de un rectángulo utilizando los operadores aritméticos básicos.

### Ejercicio 2.2: Operadores lógicos
Escribe un programa que utilice operadores lógicos (`&&`, `||`, `!`) para determinar si un número es par y positivo.

---

## 3. Tipos de Memoria

### Ejercicio 3.1: Memoria local
Declara una variable dentro de una función y muestra cómo la variable es accesible solo dentro de esa función.

### Ejercicio 3.2: Memoria estática
Escribe un programa donde declares una variable estática dentro de una función. Luego, llama a la función varias veces y observa cómo el valor de la variable se mantiene entre las llamadas.

### Ejercicio 3.3: Memoria dinámica
Crea un programa que utilice `new` y `delete` para asignar y liberar memoria para un arreglo de enteros. Asegúrate de liberar la memoria correctamente al final del programa.

---

## 4. Arreglos

### Ejercicio 4.1: Sumar los elementos de un arreglo
Escribe un programa que declare un arreglo de 5 enteros y calcule la suma de todos sus elementos.

### Ejercicio 4.2: Buscar un elemento en un arreglo
Crea un programa que pida al usuario un número y luego busque ese número en un arreglo de 10 elementos, imprimiendo si el número está presente o no.

---

## 5. Punteros

### Ejercicio 5.1: Punteros y variables
Escribe un programa que declare una variable entera, luego cree un puntero que apunte a esa variable y modifique el valor de la variable a través del puntero.

### Ejercicio 5.2: Intercambio de valores utilizando punteros
Crea un programa que utilice punteros para intercambiar los valores de dos variables.

---

## 6. Funciones

### Ejercicio 6.1: Función simple
Escribe una función que reciba dos números como parámetros y retorne su producto.

### Ejercicio 6.2: Función con retorno de múltiples valores
Crea una función que reciba dos números enteros y calcule el cociente y el residuo de la división. La función debe retornar ambos valores utilizando referencias.

---

## 7. Callbacks

### Ejercicio 7.1: Función callback simple
Escribe un programa que defina una función que reciba otra función como parámetro. La función callback debe imprimir un mensaje al ser llamada.

### Ejercicio 7.2: Operaciones matemáticas utilizando callbacks
Crea un programa que reciba una operación matemática como función callback (suma, resta, multiplicación, división) y aplique esa operación a dos números dados por el usuario.

---

## 8. Cálculo de Interés Compuesto

### Ejercicio 8.1: Interés Compuesto
Escribe un programa que calcule el **interés compuesto**. La fórmula es la siguiente:

$$
A = P \left(1 + \frac{r}{n}\right)^{nt}
$$

Donde:
- `A` es el monto final
- `P` es el principal (la cantidad inicial invertida)
- `r` es la tasa de interés anual (en decimal)
- `n` es el número de veces que se aplica el interés al año
- `t` es el número de años

El programa debe pedir estos valores al usuario y luego imprimir el monto final.

---

## 9. Máximo Común Divisor (MCD)

### Ejercicio 9.1: Cálculo del MCD
Escribe un programa que calcule el **máximo común divisor (MCD)** de dos números.  El programa debe pedir dos números al usuario y luego imprimir el MCD de ambos.

