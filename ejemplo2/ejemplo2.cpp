#include <iostream>

int main() {
    int a = 42;
    double b = 3.14;
    char c = 'A';
    std::cout << "Size of int: " << sizeof(a) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(b) << " bytes" << std::endl;
    std::cout << "Size of char: " << sizeof(c) << " bytes" << std::endl;
    std::cout << "Address of char: " << c  << std::endl;
    std::cout << "Address of double: " << &b  << std::endl;
    std::cout << "Address of int: " << &a  << std::endl;+
    return 0;
}