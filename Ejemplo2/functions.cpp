#include <iostream>
using namespace std;

// Function that takes an argument by value
void byValue(int a)
{
    a = a * 2; // This modification won't affect the original variable
    cout << "Inside byValue, a = " << a << endl;
    cout << "Local a address = " << &a << endl;
    // return;
}

// Function that takes an argument by reference
void byReference(int &b)
{
    b = b * 2; // This modification will affect the original variable
    cout << "Inside byReference, b = " << b << endl;
    cout << "Local b address = " << &b << endl;
}

// Function that takes an argument by reference but read-only
int byReferenceReadOnly(const int &c)
{
    // c = c * 2; // This line would cause a compilation error
    cout << "Inside byReferenceReadOnly, c = " << c << endl;
    cout << "Using b to compute square of c: " << c * c << endl;
    cout << "Local b address = " << &c << endl;
    return c * c;
}

double add(double a, double b);
double add(double a);

bool isPrime(int n);

int main()
{
    int num1 = 5;
    int num2 = 10;

    cout << "Before function calls:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    cout << "Local num1 address = " << &num1 << ", Local num2 address = " << &num2 << endl;
    // Call by value
    byValue(num1);

    // Call by reference
    byReference(num2);

    // Call by reference read-only
    int square = byReferenceReadOnly(num2);
    cout << "Square of num2: " << square << endl;

    cout << "After function calls:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // Demonstrate add function
    double result = add(3.5, 2.5);
    cout << "Result of add(3.5, 2.5) = " << result << endl;

    result = add(3.5); // Using default value for the second parameter
    cout << "Result of add(3.5) = " << 3.5 + add(3.5) << endl;

    // Demonstrate isPrime function
    if (isPrime(num1))
    {
        cout << num1 << " is a prime number." << endl;
    }
    else
    {
        cout << num1 << " is not a prime number." << endl;
    }

    if (isPrime(num2))
    {
        cout << num2 << " is a prime number." << endl;
    }
    else
    {
        cout << num2 << " is not a prime number." << endl;
    }

    return 0;
}

// Function that adds two numbers with a default value for the second parameter
double add(double a, double b = 1)
{
    return a + b;
}
double add(double a)
{
    return a + 1;
}
bool isPrime(int n)
{
    // Special cases for numbers less than 2
    if (n <= 1)
        return false;

    // Check divisibility up to sqrt(n)
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false; // n is divisible by i, so it's not prime
        }
    }
    return true; // n is prime
}
