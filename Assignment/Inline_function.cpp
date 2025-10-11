// Write a program to find the multiplication values and the 
// cubic values using inline function

// -> Instead of generating code to call the function, the compiler is asked to insert the code of the function's body directly at the point where the function is called. This process is known as inlining.

#include <iostream>

// Declaration and definition of an inline function
inline int multiply(int a, int b) {
    return a * b;
}

inline int cube(int a){
    return a * a * a;
}

int main() {
    int x = 5;
    int y = 10;

    int product = multiply(x, y);
    int ans = cube(x);

    std::cout << "The Product is: " << product << std::endl;
    std::cout << "The Cube is: " << ans << std::endl;

    return 0;
}