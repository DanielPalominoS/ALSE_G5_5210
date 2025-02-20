#include <iostream>
#include <cmath> // Use <cmath> instead of <math.h>

int main()
{
    // 1. **Basic Pointer Usage**
    int number = 88;
    char *pChar;
    int *pNumber; //= &number; // Declare and assign the address of variable number to pointer pNumber

    pNumber = &number; // Declare and assign the address of variable number to pointer pNumber
    // Print the address of the variable number
    std::cout << "Dirección de number: " << &number << std::endl;
    // Print the content of the pointer variable, which contains an address
    std::cout << "El contenido de pNumber: " << pNumber << std::endl;
    // Print the address of the pointer variable itself
    std::cout << "La dirección de pNumber: " << &pNumber << std::endl;
    // Print the value "pointed to" by the pointer, which is an int (88)
    std::cout << "Contenido de a donde apunta pNumber: " << *pNumber << std::endl;

    *pNumber = 99; // number=99Assign a new value to where the pointer is pointing
    // Print the new value "pointed to" by the pointer (99)
    std::cout << *pNumber << std::endl;
    // The value of the variable number changes as well (99)
    std::cout << number << std::endl;

    // Danger: Moving the pointer to the next memory location
    pNumber++;
    std::cout << "Contenido siguiente a number: " << *pNumber << std::endl;
    std::cout << "Direccion siguiente a number: " << pNumber << std::endl;
    pNumber++;
    std::cout << "Contenido siguiente a number: " << *pNumber << std::endl;
    std::cout << "Direccion siguiente a number: " << pNumber << std::endl;
    pNumber++;
    std::cout << "Contenido siguiente a number: " << *pNumber << std::endl;
    std::cout << "Direccion siguiente a number: " << pNumber << std::endl;

    // 2. **Pointer and Arrays**
    double vec[20] = {0.0}; // Initialize an array of 20 doubles with 0.0

    // Print the address of the array and its elements
    std::cout << "Dirección del vector: " << vec << std::endl;
    std::cout << "Dirección del primer elemento del vector: " << &vec[0] << std::endl;
    std::cout << "Dirección del segundo elemento del vector: " << &vec[1] << std::endl;

    double *p = &vec[0];         // Pointer to the first element of the array
    for (int i = 0; i < 13; i++) // Move the pointer to the 13th element
        p++;

    *p = 89.78654; // Assign a value to the 13th element

    // Print the values of specific elements in the array
    std::cout << "El valor de vec[13] es: " << vec[13] << std::endl;
    std::cout << "El valor de vec[12] es: " << vec[12] << std::endl;
    std::cout << "El valor de vec[14] es: " << vec[14] << std::endl;
    int aux = (int)vec[13];
    // Pointer to the first element of the array, cast to float*
    float *pf = (float *)&vec[0];
    for (int i = 0; i < 13; i++) // Move the pointer to the 13th element
        pf++;

    *pf = 89.78654; // Assign a value to the 13th element (interpreted as float)

    // Print the values of all elements in the array
    for (int i = 0; i < 20; i++)
        std::cout << "El valor de vec[" << i << "] es: " << vec[i] << std::endl;

    // 3. **Null Pointer**
    int *nullPtr = nullptr;
    std::cout << "2. Null Pointer" << std::endl;
    // Dereferencing nullPtr will cause a segmentation fault
    // Uncomment the line below to see the crash (program will terminate)
    // std::cout << *nullPtr << std::endl; // Dangerous: Dereferencing a null pointer

    std::cout << "Pointer is null: " << (nullPtr == nullptr ? "Yes" : "No") << std::endl
              << std::endl;

    // 4. **Dangling Pointer** (Example of a dangerous pointer after memory is freed)
    int *danglingPtr = new int(5); // Dynamically allocated memory
    std::cout << "3. Dangling Pointer" << std::endl;
    std::cout << "Before delete: " << *danglingPtr << std::endl;
    delete danglingPtr; // Memory deallocated
    // Now danglingPtr points to deallocated memory (dangling pointer)
    // Uncomment the line below to see undefined behavior (program may crash)
    std::cout << "After delete (dangling): " << *danglingPtr << std::endl; // Dangerous!

    danglingPtr = nullptr; // Best practice: set the pointer to nullptr after deleting
    std::cout << "After delete, pointer is null: " << (danglingPtr == nullptr ? "Yes" : "No") << std::endl
              << std::endl;

    // 5. **Buffer Overflow**
    int arr[5] = {1, 2, 3, 4, 5};
    int *arrPtr = arr;
    std::cout << "4. Buffer Overflow" << std::endl;
    // Looping beyond array bounds (dangerous)
    for (int i = 0; i < 6; i++)
    {
        // Uncomment the line below to see a potential crash or undefined behavior
        std::cout << *(arrPtr + i) << std::endl; // Dangerous: Accessing beyond array bounds
    }
    std::cout << "Array values (safe): ";
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl
              << std::endl;

    // 6. **Memory Leak**
    int *memoryLeakPtr = new int(100); // Dynamically allocated memory
    std::cout << "5. Memory Leak" << std::endl;
    std::cout << "Before memory leak: " << *memoryLeakPtr << std::endl;
    // Forgot to delete memory, resulting in a memory leak:
    // memoryLeakPtr will still hold the address of the allocated memory but we can't free it.
    // In a larger program, this can cause memory to be consumed over time.
    // Uncomment the line below to simulate memory leak (program will not delete memory)
    // delete memoryLeakPtr;  // Best practice: delete memory when done

    return 0;
}