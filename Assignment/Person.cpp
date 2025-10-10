// Write a C++ program to create a class called Person that 
// has private member variables for name, age and country. 
// Implement member functions to set and get the values of 
// these variables. 

#include<iostream>
using namespace std;

class Person{
    private:
    string name , country;
    int age;

    public:
    void set_values(string n , string c , int a){
        name = n;
        country = c;
        age = a;
    }

    void get_values(){
        cout << "Name : " << name;
        cout << endl;
        cout << "Country : " << country;
        cout << endl;
        cout << "Age : " << age;
    }
};

int main(){
    Person P;
    P.set_values("ABC" , "India" , 23);
    P.get_values();

    return 0;
}