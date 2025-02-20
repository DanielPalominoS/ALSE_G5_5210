#include <iostream>
#include <array> // Include the array headerusing namespace std;
#include <vector>
using namespace std;

int main()
{
    /*
    ARRAYS
    An array is a collection of elements of the same data type.
    The elements of an array are stored in contiguous memory locations.
    The size of an array must be a constant value.
    The elements of an array can be accessed using an index.
    The index of the first element is 0.
    */
    // Declare a basic array of integers with size 5
    int arr[5] = {10, 20, 30, 40, 50};

    // Access and print elements of the array
    for (int i = 0; i < 5; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    // Modify an element in the array
    arr[2] = 100;
    cout << "Modified arr[2]: " << arr[2] << endl;
    // Access and print elements of the array
    for (int i = 0; i < 5; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    // Declare a std::array of integers with size 5
    array<int, 5> stdArr = {10, 20, 30, 40, 50};

    // Access and print elements of the array using a range-based for loop
    for (int i : stdArr)
    {
        cout << i << endl;
    }

    /*
    STD ARRAY
    std::array is a container that encapsulates fixed size arrays.
    It is a part of the C++ standard library.
    It is a template class that takes two parameters:
    1. The data type of the array elements.
    2. The size of the array.
    */

    // Modify an element in the array
    stdArr[2] = 100;
    cout << "Modified arr[2]: " << stdArr[2] << endl;

    // Use the at() function for bounds-checked access
    cout << "arr.at(2): " << stdArr.at(2) << endl;

    // Try accessing an out-of-bounds index (throws an exception)
    try
    {
        cout << stdArr.at(10) << endl; // This will throw an exception
    }
    catch (const out_of_range &e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    /*
    VECTORS
    A vector is a sequence container that encapsulates dynamic size arrays.
    It is a part of the C++ standard library.
    It is a template class that takes three parameters:
    1. The data type of the vector elements.
    2. The allocator class.
    3. The size of the vector.
    */
    // Creating a vector of integers
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Accessing vector elements
    cout << "The first element is: " << numbers[0] << endl;
    cout << "The second element is: " << numbers[1] << endl;
    cout << "The third element is: " << numbers[2] << endl;

    // Adding a new element to the vector
    numbers.push_back(60);

    // Printing the modified vector
    cout << "The modified vector is: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Removing an element from the vector
    numbers.pop_back();

    // Printing the vector after removal
    cout << "The vector after pop_back() is: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    // Adding elements to the vector
    for (int i = 1; i <= 10; i++)
    {
        numbers.push_back(i * 10);
        cout << "Added " << i * 10 << " to the vector. Current size: " << numbers.size() << endl;
    }

    cout << "\nFinal vector contents: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}