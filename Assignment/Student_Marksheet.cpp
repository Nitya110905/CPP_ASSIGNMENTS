// Write a C++ Program display Student Mark sheet using Multiple 
// inheritance 

#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    int enroll;

    void get_basics(){
        cout << "\nEnter Name : ";
        getline(cin , name);
        cout << "\nEnter Enrollment No. : ";
        cin >> enroll;
    }
    void display_basics(){
        cout << "\nName: " << name;
        cout << "\nEnrollment No.: " << enroll;
    }
};

class Result {
    public:
    int total , sub1 , sub2 , sub3;
    float pr;

    void get_marks(){
        cout << "\nEnter the marks for sub1 : ";
        cin >> sub1;
        cout << "\nEnter the marks for sub2 : ";
        cin >> sub2;
        cout << "\nEnter the marks for sub3 : ";
        cin >> sub3;
    }
    void calculation(){
        total = sub1 + sub2 + sub3;
        pr = (total / 300.00) * 100;
        cout << "\nTotal : " << total << "/300";
        cout << "\n Percentage : " << pr;
    }
};

class Marksheet: public Student ,public Result{
    public:
    void get_data(){
        get_basics();
        get_marks();
    }
    void display_data(){
        cout << "-----Marksheet-----";
        display_basics();
        calculation();
    }

};

int main(){
    Marksheet m;
    m.get_data();
    m.display_data();
    return 0;
}


