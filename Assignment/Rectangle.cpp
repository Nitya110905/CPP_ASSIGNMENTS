// Write a C++ program to create a class called Rectangle that 
// has private member variables for length and width. Implement 
// member functions to calculate the rectangle's area and 
// perimeter. 

#include<iostream>
using namespace std;

class Rectangle{
    private:
    int l , b;
    public:
    Rectangle(int l , int b) {
        this->l = l;
        this->b = b;
    }

    float area(){
        return l * b;
    }

    float perimeter(){
        return 2 * (l + b);
    }
};

int main(){
    Rectangle r(5 , 10);
    cout << "Area : " << r.area();
    cout << endl;
    cout << "Perimeter : " << r.perimeter();

    return 0;
}