#include <iostream>
using namespace std;

// Callback functions for different operations
int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int subtract(int a, int b)
{
    return a - b;
}

// Function that performs an operation using a callback
void performOperation(int (*callback)(int, int), int x, int y)
{
    cout << "The result of the operation is: " << callback(x, y) << endl;
}

int main()
{
    // Passing different functions as callbacks
    cout << "Addition: ";
    performOperation(add, 10, 5);

    cout << "Multiplication: ";
    performOperation(multiply, 10, 5);

    cout << "Subtraction: ";
    performOperation(subtract, 10, 5);

    int (*operations[])(int, int) = {add, multiply, subtract};
    // Iterate over the array and call each operation
    for (int i = 0; i < 3; ++i)
    {
        cout << "Operation " << i + 1 << ": ";
        performOperation(operations[i], 5, 10);
    }
    return 0;
}