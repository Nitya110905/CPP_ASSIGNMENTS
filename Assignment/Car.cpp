// Write a C++ program to create a class called Car that has 
// private member variables for company, model, and year. 
// Implement member functions to get and set these variables. 

#include<iostream>
using namespace std;

class Person{
    private:
    string c_name , model;
    int year;

    public:
    void set_values(string n , string c , int a){
        c_name = n;
        model = c;
        year = a;
    }

    void get_values(){
        cout << "Company name : " << c_name;
        cout << endl;
        cout << "Model : " << model;
        cout << endl;
        cout << "Year : " << year;
    }
};

int main(){
    Person P;
    P.set_values("Rolls Royce" , "Boat Tail" , 23);
    P.get_values();

    return 0;
}