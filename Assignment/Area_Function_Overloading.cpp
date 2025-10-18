// Write a program to calculate the area of circle, 
// rectangle and triangle using Function Overloading 
// Rectangle: Area * 
// breadth Triangle: ½ 
// *Area* breadth 
// Circle: Pi * Area 
// *Area 

#include<iostream>

class Area{
    public:
     Area(int l ,int b){
        std::cout << "\nArea of Rectangle : " << l*b;
    }
    Area(double b , float h){
        std::cout << "\nArea of Triangle : " << 0.5*b*h;
    }
    Area(float r){
        std::cout << "\nArea of Circle : " << 3.14 * r * r ;
    }
};

int main(){
    Area a(5);
    Area a1(1 , 2);
    Area a2(6.7 ,8.9f);
    
    return 0;
}

// In C++, when you write a number with a decimal point, the compiler treats it as a double by default.

// 6.7 is a double.

// 8.9 is a double.

// To make it a float, you must add an f at the end: 8.9f.