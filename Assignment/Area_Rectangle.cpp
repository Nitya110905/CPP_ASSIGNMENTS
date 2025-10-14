// Write a C++ Program to find Area of Rectangle using inheritance


#include <iostream>

// Base class
class RectangleData {
protected:
    float length;
    float breadth;

public:
    void get_data() {
        std::cout << "Enter the length of the rectangle: ";
        std::cin >> length;
        std::cout << "Enter the breadth of the rectangle: ";
        std::cin >> breadth;
    }
};

class Area : public RectangleData {
public:
    void display_area() {
        float rect_area = length * breadth;
        std::cout << "\nArea of the rectangle is: " << rect_area << std::endl;
    }
};

int main() {
    Area rectangle;

    rectangle.get_data();
    rectangle.display_area();

    return 0;
}