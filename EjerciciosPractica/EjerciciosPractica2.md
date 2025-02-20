# Ejercicios de Práctica en C++

Este archivo contiene ejercicios prácticos de C++ organizados por complejidad creciente. Cada ejercicio ha sido diseñado para ayudarte a abordar problemas del mundo real, desarrollar habilidades para resolver problemas y fortalecer tus habilidades de programación.

## 1. Tipos de Datos Básicos y Operadores

### Ejercicio 1.1: Calculadora del Costo Total en una Tienda de Abastos
- **Objetivo**: Usar operadores aritméticos básicos y precisión en punto flotante.
- **Descripción**: Te han contratado para desarrollar una calculadora de costos sencilla para una tienda de abastos. Escribe un programa que calcule el costo total de una lista de compras. El programa debe tomar los precios y las cantidades de los productos como entrada, luego calcular el subtotal, el impuesto (8%) y el costo total (redondeado a dos decimales). Si el costo total es mayor a $100, aplica un descuento del 10%. Muestra el costo total, incluyendo el descuento si es aplicable.

### Ejercicio 1.2: Rastreador de Intereses de un Préstamo
- **Objetivo**: Aplicar operaciones con números de punto flotante y toma de decisiones.
- **Descripción**: Imagina que trabajas en un banco y se te ha asignado la tarea de escribir una herramienta para rastrear préstamos. Escribe un programa que calcule el interés compuesto de un préstamo, similar al ejercicio anterior, pero esta vez incluye una opción para que el usuario elija si quiere un interés compuesto mensual o anual. Compara los resultados para ambos casos y muestra cuál opción resulta en un monto final mayor.

---

## 2. Arreglos

### Ejercicio 2.1: Sistema de Gestión de Inventarios
- **Objetivo**: Practicar la manipulación de arreglos y la organización básica de datos.
- **Descripción**: Te han asignado la tarea de desarrollar un sistema sencillo de gestión de inventarios para un almacén. Crea un programa que almacene la cantidad de unidades disponibles de varios productos en un arreglo. El programa debe poder:
  - Mostrar la cantidad de productos disponibles.
  - Agregar o quitar unidades de un producto específico.
  - Mostrar el producto con la mayor cantidad disponible.
  - Ordenar los productos por cantidad de menor a mayor.

  El usuario debe poder interactuar con el sistema seleccionando opciones desde un menú.

### Ejercicio 2.2: Rastreador de Distancias para Conductores de Entregas
- **Objetivo**: Usar arreglos para almacenar datos y realizar cálculos.
- **Descripción**: Imagina que estás construyendo una herramienta de seguimiento de entregas para una flota de conductores. Crea un programa donde cada conductor registre la distancia que ha recorrido en un día específico. Almacena los datos para 10 conductores (usa un arreglo de flotantes para representar las distancias diarias). Calcula la distancia promedio recorrida por todos los conductores y muestra el conductor con la distancia máxima, además de la distancia total recorrida por todos los conductores.

---

## 3. Punteros

### Ejercicio 3.1: Memoria Dinámica para un Sistema de Reservas de Hotel
- **Objetivo**: Usar punteros para la asignación dinámica de memoria.
- **Descripción**: Estás trabajando en un sistema de reservas de hotel. Crea un programa que asigne dinámicamente memoria para un arreglo de habitaciones, donde cada habitación tenga un estado (reservada o disponible). Usa punteros para gestionar el arreglo, permitiendo al usuario reservar una habitación cambiando su estado. El programa también debe tener una opción para verificar si una habitación específica está disponible o ya está reservada.

### Ejercicio 3.2: Gestión de Estación de Combustible
- **Objetivo**: Usar punteros y referencias para modificar datos.
- **Descripción**: Imagina que estás desarrollando un software para una estación de combustible que rastrea el uso de combustible para diferentes tipos de vehículos. Escribe un programa que use punteros para modificar el nivel de combustible de un vehículo cuando se recarga, y devuelva el nivel de combustible actualizado después de la operación. El programa también debe incluir una función que verifique si el vehículo está listo para la carretera (es decir, si el nivel de combustible es más del 50% de la capacidad del tanque).

---

## 4. Gestión de Memoria (Memoria Estática vs Dinámica)

### Ejercicio 4.1: Sistema de Boletas de Calificaciones de Estudiantes
- **Objetivo**: Trabajar con memoria estática y dinámica para manejar datos.
- **Descripción**: Te han asignado la tarea de crear un sistema de boletas de calificaciones para una clase de estudiantes. Escribe un programa que use un arreglo estático para almacenar las calificaciones de 10 estudiantes. Después, asigna dinámicamente memoria para la boleta de 30 estudiantes (en caso de que el tamaño de la clase aumente). El programa debe permitir agregar calificaciones, calcular el promedio de las calificaciones y mostrar la calificación más alta y la más baja de la clase.

### Ejercicio 4.2: Arreglo Dinámico para Monitoreo de Temperaturas en Tiempo Real
- **Objetivo**: Comparar arreglos estáticos y dinámicos, y usar la memoria de manera eficiente.
- **Descripción**: Una estación meteorológica local necesita un software para registrar las lecturas de temperatura cada hora durante todo un día. Inicialmente, almacenarás los datos para 24 horas usando un arreglo estático. Luego, simula un sistema que reasigna dinámicamente memoria para el arreglo si el usuario solicita un período más largo (por ejemplo, una semana). Muestra las temperaturas y la temperatura máxima y mínima para el período solicitado.

---

## 5. Funciones de Retorno (Callbacks)

### Ejercicio 5.1: Procesador de Pagos con Callback
- **Objetivo**: Usar funciones de retorno (callbacks) para implementar comportamientos personalizados.
- **Descripción**: Estás desarrollando un sistema de procesamiento de pagos donde diferentes métodos de pago (por ejemplo, tarjeta de crédito, PayPal) tienen comportamientos distintos. Escribe una función `procesarPago` que acepte un puntero a una función que maneje el pago de un método específico. Por ejemplo, si el usuario elige tarjeta de crédito, el callback manejará el pago con tarjeta, mientras que si elige PayPal, el callback manejará el pago con PayPal. Asegúrate de que el sistema pueda manejar ambos métodos de pago mediante la función de retorno.

### Ejercicio 5.2: Ordenamiento de Pedidos de Clientes por Prioridad
- **Objetivo**: Usar callbacks para ordenar datos personalizados.
- **Descripción**: Estás desarrollando un sistema de gestión de pedidos para una tienda en línea. Cada pedido de cliente tiene una prioridad (por ejemplo, alta, media, baja). Escribe una función de ordenamiento que use un callback para ordenar los pedidos por prioridad. Pasa diferentes funciones de comparación para permitir ordenar de mayor a menor prioridad o de menor a mayor. El sistema debe mostrar los pedidos en el orden deseado después de realizar el ordenamiento.




