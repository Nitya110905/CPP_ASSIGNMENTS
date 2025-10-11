// Write a C++ program to create a class called Triangle that has 
// private member variables for the lengths of its three sides. 
// Implement member functions to determine if the triangle is 
// equilateral, isosceles, or scalene.

#include<iostream>
using namespace std;

class Triangle{
    private:
    int l1 , l2 ,l3;
    public:
    Triangle(int a ,int  b ,int  c){
        l1 = a;
        l2 = b;
        l3 = c;
        
        if(l1 == l2 && l2 == l3){
            cout << "Given Triangle is Equilateral!\n";
        }
        else if (l1 == l2 || l2 == l3 || l3 == l1){
            cout << "Given Triangle is Isosceles!\n";
        }
        else{
            cout << "Given Triangle is Scalar!\n";
        }
    }
};

int main(){
    Triangle t1(5 , 6 , 7);
    Triangle t2(1 , 2 , 1);
    Triangle t3(9 , 9 , 9);
    return 0;
}