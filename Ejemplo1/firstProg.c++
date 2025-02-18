#include <iostream> // Include the iostream library for input and output

int main()
{
  // Declare integer variables
  int x, y;
  int aux; // Auxiliary variable for swapping

  // Declare and initialize various types of variables
  float height = 1.6;    // Floating-point variable
  double pi = 3.1415;    // Double-precision floating-point variable
  char character = 'c';  // Character variable
  bool isStudent = true; // Boolean variable

  // Read values for x and y from standard input
  std::cin >> x >> y;

  // Swap the values of x and y using the auxiliary variable
  aux = x;
  x = y;
  y = aux;

  // Print the swapped values of x and y
  std::cout << "Swapped values: " << x << " " << y << "\n";

  // Print initialized variables
  /*
  Printing basic variables
  */
  std::cout << "Height: " << height << std::endl;
  std::cout << "Pi: " << pi << std::endl;
  std::cout << "Character: " << character << std::endl;
  std::cout << "Is student: " << isStudent << std::endl;

  // Declare and initialize integer variations
  short s = 100; // Short integer
  // Unsigned modifier to use positive values only
  unsigned int i = 200;        // Unsigned integer
  long l = 300;                // Long integer
  long long ll = 4000000000LL; // Long long integer

  // Declare and initialize floating-point variations
  float f = 3.14f;                        // Float variable
  double d = 3.1415926535;                // Double variable
  long double ld = 3.141592653589793238L; // Long double variable

  // Print floating-point variations
  std::cout << "Float: " << f << "\n";
  std::cout << "Double: " << d << "\n";
  std::cout << "Long Double: " << ld << "\n";

  // Print the address of the height variable
  std::cout << "Height address: " << &height << std::endl;

  return 0; // Return 0 to indicate successful execution
}