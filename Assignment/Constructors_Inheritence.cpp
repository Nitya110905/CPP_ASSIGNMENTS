// Write a C++ Program to illustrates the use of Constructors 
// in multilevel inheritance

#include<iostream>

class one{
    public:
    one(){
      std:: cout << "Constructor one!";  
    }
};
class two:public one{
    public:
    two(){
      std:: cout << "\nConstructor two!";  
    }
};
class three: public two{
    public:
    three(){
      std:: cout << "\nConstructor three!";  
    }
};

int main(){
    three t;
    return 0;
}