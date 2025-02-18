#include <iostream> // Include the iostream library for input and output

int main()
{
    // Declare and initialize variables of different types
    int a = 42;      // Integer variable
    double b = 3.14; // Double-precision floating-point variable
    char c = 'A';    // Character variable

    // Print the size of each variable type
    std::cout << "Size of int: " << sizeof(a) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(b) << " bytes" << std::endl;
    std::cout << "Size of char: " << sizeof(c) << " bytes" << std::endl;

    // Print the address of each variable
    std::cout << "Address of char: " << static_cast<void *>(&c) << std::endl;
    std::cout << "Address of double: " << &b << std::endl;
    std::cout << "Address of int: " << &a << std::endl;

    // Arithmetic operations
    int d = 4;
    int suma = d + a; // Addition
    std::cout << "Sum of d and a: " << suma << std::endl;

    double sumDoubleChar = b + c; // Addition of double and char (char is implicitly converted to int)
    std::cout << "Sum of b and c: " << sumDoubleChar << std::endl;

    // Increment and decrement operators
    int h = 2;
    int k = h++; // Post-increment: k is assigned the value of h, then h is incremented
    std::cout << "Value of k after post-increment: " << k << std::endl;

    int j = ++h; // Pre-increment: h is incremented, then j is assigned the value of h
    std::cout << "Value of j after pre-increment: " << j << std::endl;

    // Compound assignment operators
    h += 8; // Equivalent to h = h + 8
    std::cout << "Value of h after h += 8: " << h << std::endl;

    h *= 2; // Equivalent to h = h * 2
    std::cout << "Value of h after h *= 2: " << h << std::endl;

    h = h * 2; // Multiplication
    std::cout << "Value of h after h = h * 2: " << h << std::endl;

    // Additional operators
    int m = 10;
    int n = 3;
    int mod = m % n; // Modulus operator
    std::cout << "Modulus of m and n: " << mod << std::endl;

    bool isEqual = (a == d); // Equality operator
    std::cout << "Is a equal to d? " << std::boolalpha << isEqual << std::endl;

    bool isGreater = (a > d); // Greater than operator
    std::cout << "Is a greater than d? " << std::boolalpha << isGreater << std::endl;

    // Binary operators
    int bin1 = 5;                  // 0101 in binary
    int bin2 = 3;                  // 0011 in binary
    int binAnd = bin1 & bin2;      // Binary AND
    int binOr = bin1 | bin2;       // Binary OR
    int binXor = bin1 ^ bin2;      // Binary XOR
    int binNot = ~bin1;            // Binary NOT
    int binShiftLeft = bin1 << 1;  // Left shift
    int binShiftRight = bin1 >> 1; // Right shift

    std::cout << "Binary AND of bin1 and bin2: " << binAnd << std::endl;
    std::cout << "Binary OR of bin1 and bin2: " << binOr << std::endl;
    std::cout << "Binary XOR of bin1 and bin2: " << binXor << std::endl;
    std::cout << "Binary NOT of bin1: " << binNot << std::endl;
    std::cout << "Left shift of bin1: " << binShiftLeft << std::endl;
    std::cout << "Right shift of bin1: " << binShiftRight << std::endl;

    // Logical operators
    bool log1 = true;
    bool log2 = false;
    bool logAnd = log1 && log2; // Logical AND
    bool logOr = log1 || log2;  // Logical OR
    bool logNot = !log1;        // Logical NOT

    std::cout << "Logical AND of log1 and log2: " << std::boolalpha << logAnd << std::endl;
    std::cout << "Logical OR of log1 and log2: " << std::boolalpha << logOr << std::endl;
    std::cout << "Logical NOT of log1: " << std::boolalpha << logNot << std::endl;

    // Ternary operator
    int ternaryResult = (a > d) ? a : d; // If a is greater than d, assign a to ternaryResult, otherwise assign d
    std::cout << "Ternary operator result (a > d ? a : d): " << ternaryResult << std::endl;

    return 0; // Return 0 to indicate successful execution
}