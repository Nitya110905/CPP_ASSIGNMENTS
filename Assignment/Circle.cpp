// Write a C++ program to implement a class called Circle that 
// has private member variables for radius. Include member 
// functions to calculate the circle's area and circumference. 


#include<iostream>
using namespace std;

class Circle{
    private:
    int radius;
    public:
    Circle(int r) {
        radius = r;
    }

    float area(){
        return 3.14 * radius * radius;
    }

    float circumference(){
        return 2 * 3.14 * radius;
    }
};

int main(){
    Circle c(5);
    cout << "Area : " << c.area();
    cout << endl;
    cout << "Circumference : " << c.circumference();

    return 0;
}