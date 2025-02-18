#include <iostream> // Incluir la biblioteca iostream para entrada y salida

int main()
{
    // Declarar e inicializar variables de diferentes tipos
    int a = 42;      // Variable entera
    double b = 3.14; // Variable de punto flotante de doble precisión
    char c = 'A';    // Variable de carácter

    // Imprimir el tamaño de cada tipo de variable
    std::cout << "Tamaño de int: " << sizeof(a) << " bytes" << std::endl;
    std::cout << "Tamaño de double: " << sizeof(b) << " bytes" << std::endl;
    std::cout << "Tamaño de char: " << sizeof(c) << " bytes" << std::endl;

    // Imprimir la dirección de cada variable
    std::cout << "Dirección de char: " << static_cast<void *>(&c) << std::endl;
    std::cout << "Dirección de double: " << &b << std::endl;
    std::cout << "Dirección de int: " << &a << std::endl;

    // Operaciones aritméticas
    int d = 4;
    int suma = d + a; // Suma
    std::cout << "Suma de d y a: " << suma << std::endl;

    double sumDoubleChar = b + c; // Suma de double y char (char se convierte implícitamente a int)
    std::cout << "Suma de b y c: " << sumDoubleChar << std::endl;

    // Operadores de incremento y decremento
    int h = 2;
    int k = h++; // Post-incremento: k se asigna el valor de h, luego h se incrementa
    std::cout << "Valor de k después de post-incremento: " << k << std::endl;

    int j = ++h; // Pre-incremento: h se incrementa, luego j se asigna el valor de h
    std::cout << "Valor de j después de pre-incremento: " << j << std::endl;

    // Operadores de asignación compuesta
    h += 8; // Equivalente a h = h + 8
    std::cout << "Valor de h después de h += 8: " << h << std::endl;

    h *= 2; // Equivalente a h = h * 2
    std::cout << "Valor de h después de h *= 2: " << h << std::endl;

    h = h * 2; // Multiplicación
    std::cout << "Valor de h después de h = h * 2: " << h << std::endl;

    // Operadores adicionales
    int m = 10;
    int n = 3;
    int mod = m % n; // Operador de módulo
    std::cout << "Módulo de m y n: " << mod << std::endl;

    bool isEqual = (a == d); // Operador de igualdad
    std::cout << "¿a es igual a d? " << std::boolalpha << isEqual << std::endl;

    bool isGreater = (a > d); // Operador mayor que
    std::cout << "¿a es mayor que d? " << std::boolalpha << isGreater << std::endl;

    // Operadores binarios
    int bin1 = 5;                  // 0101 en binario
    int bin2 = 3;                  // 0011 en binario
    int binAnd = bin1 & bin2;      // AND binario
    int binOr = bin1 | bin2;       // OR binario
    int binXor = bin1 ^ bin2;      // XOR binario
    int binNot = ~bin1;            // NOT binario
    int binShiftLeft = bin1 << 1;  // Desplazamiento a la izquierda
    int binShiftRight = bin1 >> 1; // Desplazamiento a la derecha

    std::cout << "AND binario de bin1 y bin2: " << binAnd << std::endl;
    std::cout << "OR binario de bin1 y bin2: " << binOr << std::endl;
    std::cout << "XOR binario de bin1 y bin2: " << binXor << std::endl;
    std::cout << "NOT binario de bin1: " << binNot << std::endl;
    std::cout << "Desplazamiento a la izquierda de bin1: " << binShiftLeft << std::endl;
    std::cout << "Desplazamiento a la derecha de bin1: " << binShiftRight << std::endl;

    // Operadores lógicos
    bool log1 = true;
    bool log2 = false;
    bool logAnd = log1 && log2; // AND lógico
    bool logOr = log1 || log2;  // OR lógico
    bool logNot = !log1;        // NOT lógico

    std::cout << "AND lógico de log1 y log2: " << std::boolalpha << logAnd << std::endl;
    std::cout << "OR lógico de log1 y log2: " << std::boolalpha << logOr << std::endl;
    std::cout << "NOT lógico de log1: " << std::boolalpha << logNot << std::endl;

    // Operador ternario
    int ternaryResult = (a > d) ? a : d; // Si a es mayor que d, asignar a a ternaryResult, de lo contrario asignar d
    std::cout << "Resultado del operador ternario (a > d ? a : d): " << ternaryResult << std::endl;

    return 0; // Retornar 0 para indicar ejecución exitosa
}