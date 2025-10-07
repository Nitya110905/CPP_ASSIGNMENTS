// WAP to create simple calculator using class


#include <iostream>

class Calculator {
public:
    float add(float num1, float num2) {
        return num1 + num2;
    }

    float subtract(float num1, float num2) {
        return num1 - num2;
    }

    float multiply(float num1, float num2) {
        return num1 * num2;
    }

    float divide(float num1, float num2) {
        if (num2 == 0) {
            std::cout << "Error! Division by zero is not allowed." << std::endl;
            return 0;
        }
        return num1 / num2;
    }
};

int main() {
    Calculator myCalc;

    char op;
    float num1, num2;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    switch (op) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << myCalc.add(num1, num2) << std::endl;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << myCalc.subtract(num1, num2) << std::endl;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << myCalc.multiply(num1, num2) << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << num1 << " / " << num2 << " = " << myCalc.divide(num1, num2) << std::endl;
            }
            break;
        default:
            std::cout << "Error! The operator is not correct." << std::endl;
            break;
    }

    return 0;
}