#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 5;
    int num1, num2;

    // 1. if-else statement

    // Check if the number is even or odd using if statement
    if (x > y)
    {
        cout << "x is greater than y." << endl;
    }
    else if (x < y)
    {
        cout << "x is less than y." << endl;
    }
    else
    {
        cout << "x is equal to y." << endl;
    }
    if (x > 0)
    {
        cout << "x is positive." << endl;
    }
    // Ask user for input
    cout << "Enter a number: ";
    cin >> num1;
    // Check if the number is even or odd using if-else statement
    if (num1 % 2 == 0)
    {
        cout << "The number " << num1 << " is even." << endl;
    }
    else
    {
        cout << "The number " << num1 << " is odd." << endl;
    }

    // 2. while loop
    cout << "Counting down with while loop:" << endl;
    while (x > 0)
    {
        cout << "x = " << x << endl;
        x--;
    }
    // Calculate factorial using a while loop
    int i = 1;
    int factorial = 1;
    while (i <= num1)
    {
        factorial *= i;
        i++;
    }
    cout << "The factorial of " << num1 << " is: " << factorial << endl;
    cout << "ingrese un numero" << endl;
    cin >> num1;
    while (1)
    {
        /* code */
        cout << "num1 positive" << endl;
        cin >> num1;
        if (num1 < 0)
        {
            break;
        }
    }

    // 3. for loop
    cout << "Counting up with for loop:" << endl;
    for (int j = 1; j <= 5; j++)
    {
        cout << "j = " << j << endl;
    }
    // Use a for loop to calculate the sum of the first N numbers
    int sum = 0;
    for (int i = 1; i <= num1; i++)
    {
        sum += i; // sum=sum+i
    }
    cout << "The sum of the first " << num1 << " numbers is: " << sum << endl;

    // 4. do-while loop
    cout << "Counting up with do-while loop:" << endl;
    int z = 6;
    do
    {
        cout << "z = " << z << endl;
        z++;
    } while (z <= 5);

    // Calculate the sum of two numbers using a do-while loop
    char choice;
    choice = 'n';
    do
    {
        // Ask user for input
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        // Calculate and display the sum
        cout << "The sum is: " << num1 + num2 << endl;

        // Ask user if they want to continue
        cout << "Do you want to add more numbers (y/n)? ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    // 5. switch statement
    cout << "Switch statement example:" << endl;
    int day = 1;
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid day" << endl;
        break;
    }

    // Ask user for input
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Ask user to choose an operation
    cout << "Choose an operation (+, -, *, /): ";
    cin >> choice;

    // Perform operation using switch statement
    switch (choice)
    {
    case '+':
        cout << "The result is: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "The result is: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "The result is: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << "The result is: " << num1 / num2 << endl;
        }
        else
        {
            cout << "Error: Division by zero." << endl;
        }
        break;
    default:
        cout << "Invalid operation!" << endl;
    }

    return 0;
}
