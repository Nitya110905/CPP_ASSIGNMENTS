// Write a C++ Program to show access to Private Public and 
// Protected using Inheritance

#include <iostream>

class Base {
private:
    int private_var = 1;

protected:
    int protected_var = 2;

public:
    int public_var = 3;

    void display_from_base() {
        std::cout << "--- Inside Base Class ---" << std::endl;
        std::cout << "Private variable: " << private_var << " (Accessible)" << std::endl;
        std::cout << "Protected variable: " << protected_var << " (Accessible)" << std::endl;
        std::cout << "Public variable: " << public_var << " (Accessible)" << std::endl;
    }
};

class Derived : public Base {
public:
    void access_base_members() {
        std::cout << "\n--- Inside Derived Class ---" << std::endl;
        std::cout << "Private variable: (Not Accessible from Derived)" << std::endl;

        std::cout << "Protected variable: " << protected_var << " (Accessible)" << std::endl;
        
        std::cout << "Public variable: " << public_var << " (Accessible)" << std::endl;
    }
};

int main() {
    Derived d_obj;

    std::cout << "--- Accessing from an object in main() ---" << std::endl;
    
    std::cout << "Public variable: " << d_obj.public_var << " (Accessible)" << std::endl;

    d_obj.access_base_members();

    return 0;
}