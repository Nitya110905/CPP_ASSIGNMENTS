// Write a C++ program to implement a class called Student that 
// has private member variables for name, class, roll number, and 
// marks. Include member functions to calculate the grade based 
// on the marks and display the student's information. Accept 
// address from each student implement using of aggregation 

// Aggregation is used in programming to model a "has-a" relationship where one class includes another class as a member variable, but the two classes have independent lifecycles.

// Its main advantage is creating a flexible and loosely coupled relationship between objects, which improves code reusability and maintainability


#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Address {
private:
    string street;
    string city;
    string state;
    int pinCode;

public:
    Address(string street, string city, string state, int pinCode) {
        this->street = street;
        this->city = city;
        this->state = state;
        this->pinCode = pinCode;
    }

    void displayAddress() const {
        cout << "Address: " << street << ", " << city << ", " << state << " - " << pinCode << endl;
    }
};

class Student {
private:
    string name;
    string className;
    int rollNumber;
    double marks;
    Address* address; // Aggregation: Student has an Address

public:
    Student(string name, string className, int rollNumber, double marks, Address* address) {
        this->name = name;
        this->className = className;
        this->rollNumber = rollNumber;
        this->marks = marks;
        this->address = address;
    }

    char calculateGrade() const {
        if (marks >= 90) return 'A';
        if (marks >= 80) return 'B';
        if (marks >= 70) return 'C';
        if (marks >= 60) return 'D';
        if (marks >= 50) return 'E';
        return 'F';
    }

    void displayStudentInfo() const {
        cout << "----------------------------------" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name:        " << name << endl;
        cout << "Class:       " << className << endl;
        cout << "Marks:       " << marks << "%" << endl;
        cout << "Grade:       " << calculateGrade() << endl;
        if (address != nullptr) {
            address->displayAddress();
        }
        cout << "----------------------------------" << endl;
    }

    // Destructor to clean up memory
    ~Student() {
        // In pure aggregation, the Student class does not delete the address.
        // The object that created the Address is responsible for deleting it.
    }
};

int main() {
    Address addr1("123, Science City Rd", "Ahmedabad", "Gujarat", 380060);
    Address addr2("456, SG Highway", "Ahmedabad", "Gujarat", 380015);

    Student student1("Aarav Sharma", "12th Grade", 101, 92.5, &addr1);
    Student student2("Priya Patel", "12th Grade", 102, 78.0, &addr2);

    cout << "Displaying Student Information:" << endl;
    student1.displayStudentInfo();
    student2.displayStudentInfo();

    // Since main created the Address objects, main is responsible for their lifecycle.
    // In this case, they are stack-allocated, so they are automatically destroyed.
    // If we had used 'new Address(...)', we would need to 'delete' them here.

    return 0;
}