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
    std::cout << "Address of int: " << &a  << std::endl;
    int d=4,suma;
    suma=d+a;
    std::cout <<"Suma: " << suma<< std::endl; 
    std::cout <<"Suma int+double: " << b+c<< std::endl;
    int h=2;
    int k=h++;
    std::cout <<"k: " << k<< std::endl;
    int j=++h;
    std::cout <<"j: " << j<< std::endl;
    h+=8;//h=h+2+
    std::cout <<"h: " << h<< std::endl;
    h*=2;h=h*2;
    std::cout <<"h: " << h<< std::endl;
    h=h*2;
    std::cout <<"h: " << h<< std::endl;
    return 0;
}