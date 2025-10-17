// Write a program to Mathematic operation like Addition, 
// Subtraction, Multiplication, Division Of two number using 
// different parameters and Function Overloading 


#include <iostream>
int operation(int a, int b) {
    std::cout << "-> Using integer addition" << std::endl;
    return a + b;
}

double operation(double a, double b) {
    std::cout << "-> Using double addition" << std::endl;
    return a + b;
}

int operation(int a, int b, char op) {
    if (op == '-') {
        std::cout << "-> Using integer subtraction" << std::endl;
        return a - b;
    }
    return 0; 
}

double operation(double a, double b, char op) {
    if (op == '*') {
        std::cout << "-> Using double multiplication" << std::endl;
        return a * b;
    }
    if (op == '/') {
        std::cout << "-> Using double division" << std::endl;
        if (b != 0) {
            return a / b;
        } else {
            std::cout << "Error: Division by zero!" << std::endl;
            return 0.0;
        }
    }
    return 0.0;
}


int main() {
    std::cout << "## Addition ##" << std::endl;
    std::cout << "Sum of 10 and 20 is: " << operation(10, 20) << std::endl;       
    std::cout << "Sum of 5.5 and 4.3 is: " << operation(5.5, 4.3) << std::endl;

    std::cout << "## Subtraction ##" << std::endl;
    std::cout << "Difference of 30 and 10 is: " << operation(30, 10, '-') << std::endl;  

    std::cout << "## Multiplication & Division ##" << std::endl;
    std::cout << "Product of 7.5 and 2.0 is: " << operation(7.5, 2.0, '*') << std::endl; 
    std::cout << "Division of 15.0 by 3.0 is: " << operation(15.0, 3.0, '/') << std::endl; 
    std::cout << "Division of 8.0 by 0.0 is: " << operation(8.0, 0.0, '/') << std::endl; 

    return 0;
}