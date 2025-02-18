   
- Variable size and types.
    
    Data models c++: [https://en.cppreference.com/w/cpp/language/types](https://en.cppreference.com/w/cpp/language/types)
    
    [https://memext.wordpress.com/2016/11/27/c-data-models/](https://memext.wordpress.com/2016/11/27/c-data-models/)
    
    Varaible types
    
    ```cpp
    #include <iostream>
    
    int main() {
        int age = 25;
        float height = 5.9;
        double pi = 3.14159;
        char grade = 'A';
        bool isCodingFun = true;
        bool isStudent = true;
    
        std::cout << "Age: " << age << "\n";
        std::cout << "Height: " << height << "\n";
        std::cout << "Pi: " << pi << "\n";
        std::cout << "Grade: " << grade << "\n";    
        std::cout << "Is Student: " << isStudent << std::endl;
        std::cout << "Boolean: " << std::boolalpha << isCodingFun << "
        return 0;
    }
    ```
    
    ### **Integer Types**
    
    | Type | Size (Typical) | Range |
    | --- | --- | --- |
    | `short` | 2 bytes | -32,768 to 32,767 |
    | `int` | 4 bytes | -2,147,483,648 to 2,147,483,647 |
    | `long` | 4 or 8 bytes | -2^31 to 2^31-1 or -2^63 to 2^63-1 |
    | `long long` | 8 bytes | -9 quintillion to 9 quintillion |
    
    ```cpp
    #include <iostream>int main() {
        short s = 100;
        int i = 200;
        long l = 300;
        long long ll = 4000000000LL;
    
        std::cout << "Short: " << s << "\n";
        std::cout << "Int: " << i << "\n";
        std::cout << "Long: " << l << "\n";
        std::cout << "Long Long: " << ll << "\n";
    
        return 0;
    }
    ```
    
    ### **Floating-Point Types**
    
    | Type | Size | Precision | Example Value |
    | --- | --- | --- | --- |
    | `float` | 4 bytes | ~6-7 digits | 3.14159f |
    | `double` | 8 bytes | ~15-16 digits | 3.14159265358979 |
    | `long double` | 10-16 bytes | ~18-19 digits | 3.141592653589793238L |
    
    ```cpp
    #include <iostream>int main() {
        float f = 3.14f;
        double d = 3.1415926535;
        long double ld = 3.141592653589793238L;
    
        std::cout << "Float: " << f << "\n";
        std::cout << "Double: " << d << "\n";
        std::cout << "Long Double: " << ld << "\n";
    
        return 0;
    }
    
    ```
    
    ### **Floating-Point Representation (Mantissa & Exponent)**
    
    A floating-point number is represented as:
    
    ![image.png](image.png)
    
    Value=(−1)sign×mantissa×exponent
    
    For IEEE 754 standard:
    
    - **Float (32-bit)**
        - 1-bit **sign**
        - 8-bit **exponent** (biased by 127)
        - 23-bit **mantissa**
    - **Double (64-bit)**
        - 1-bit **sign**
        - 11-bit **exponent** (biased by 1023)
        - 52-bit **mantissa**
    
    Example: 32-bit float representation of `3.14`:
    
    ```
    Sign: 0  (positive)
    Exponent: 10000000 (biased 127 → actual exponent = 1)
    Mantissa: 10010001111010111000011 (normalized form)
    
    ```
    
    A practical check:
    
    This program converts a floating-point number (`3.14f`) into its **binary representation** using the **IEEE 754 single-precision floating-point format (32-bit)** and prints it.
    
    ```cpp
    #include <iostream>
    #include <bitset>
    int main() {
        float num = 3.14f;
        int* ptr = reinterpret_cast<int*>(&num);
        std::cout << "Float in binary: " << std::bitset<32>(*ptr) << "\n";
        return 0;
    }
    
    ```
    
    ## **Custom Data Types**
    
    C++ allows defining new data types using `struct`, `class`, `enum`, and `typedef/using`.
    
    ### **Using `struct` (Custom Data Type)**
    
    ```cpp
    
    #include <iostream>struct Point {
        int x, y;
    };
    
    int main() {
        Point p1 = {10, 20};
        std::cout << "Point (" << p1.x << ", " << p1.y << ")\n";
        return 0;
    }
    
    ```
    
    **Variable Declaration and Scope**
    
    **Scope** refers to the visibility of a variable within different parts of a program.
    
    ### **Global vs Local Variables**
    
    ```cpp
    
    #include <iostream>int globalVar = 100;  // Global scope
    
    void testScope() {
        int localVar = 50;  // Local scope
        std::cout << "Local Variable: " << localVar << "\n";
    }
    
    int main() {
        std::cout << "Global Variable: " << globalVar << "\n";
        testScope();
        // std::cout << localVar;  // Error: localVar is not accessible here
        return 0;
    }
    
    ```