// Assume that the test results of a batch of students are stored 
// in three different classes. Class Students are storing the roll 
// number. Class Test stores the marks obtained in two 
// subjects and class result contains the total marks obtained 
// in the test. The class result can inherit the details of the 
// marks obtained in the test and roll number of students. 
// (Multilevel Inheritance)

#include<iostream>
using namespace std;

class Student{
    public:
    int roll_no;
    void get_roll(){
        cout << "\nEnter roll no : ";
        cin >> roll_no;
    }
};

class Test : public Student{
    public:
    float sub1 , sub2;
    void get_marks(){
        cout << "\nEnter marks for sub1 : ";
        cin >> sub1;
        cout << "\nEnter marks for sub2 : ";
        cin >> sub2;
    }
};

class Result : public Test{
    public :
    float total , result;
    void get_all(){
        get_roll();
        get_marks();
    }

    void display(){
        cout << "-----Result-----";
        cout << "\nMarks for Sub1 : " << sub1;
        cout << "\nMarks for Sub2 : " << sub2;
        total = sub1 + sub2;
        cout << "\nTotal : " << total;
    }

};


int main(){
    Result r;
    r.get_all();
    r.display();
    
    return 0;
}