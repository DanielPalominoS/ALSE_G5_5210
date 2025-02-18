#include <iostream>

// Global variable declaration
int globalVar = 100;  // Global scope

// Function to demonstrate scope
void testScope() {
    // Local variable declaration
    int localVar = 50;  // Local scope
    std::cout << "Local Variable: " << localVar << " Address " << &localVar << "\n";
    
    // Modify global variable
    globalVar += 50;  // Equivalent to globalVar = globalVar + 50;
}

int main() {
    // Print global variable and its address
    std::cout << "Global Variable: " << globalVar << " Address " << &globalVar << "\n";
    
    // Call function to test scope
    testScope();
    
    // Print modified global variable
    std::cout << "Global Variable: " << globalVar << "\n";
    
    // Block scope
    {
        // Modify global variable within block
        globalVar = globalVar * 2;
        
        // Inner block local variable
        int inner = 2;
        std::cout << inner << " Address " << &inner << std::endl;
    }
    
    // Print global variable after block modification
    std::cout << "Global Variable: " << globalVar << "\n";
    
    // Uncommenting the following line will cause an error because 'inner' is not accessible here
    // std::cout << inner << std::endl;
    
    return 0;
}