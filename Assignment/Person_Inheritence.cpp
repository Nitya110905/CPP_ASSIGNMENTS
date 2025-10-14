// Create a class person having members name and age. Derive 
// a class student having member percentage. Derive another 
// class teacher having member salary. Write necessary 
// member function to initialize, read and write data. Write also 
// Main function (Multiple Inheritance)

// Virtual inheritance is an advanced feature in C++ specifically designed to solve a problem that arises in multiple inheritance scenarios known as the "Diamond Problem."

// The Diamond Problem occurs when a class inherits from two parent classes that both share the same common grandparent class. This creates a diamond-shaped inheritance diagram and leads to ambiguity.

#include <iostream>
#include <string>

// Use virtual inheritance to prevent duplicate Person subobjects
class Person {
protected:
    std::string name;
    int age;

public:
    void get_person_data() {
        std::cout << "Enter Name: ";
        // std::cin.ignore() is crucial to clear the buffer before getline
        std::cin.ignore(); 
        getline(std::cin, name);
        std::cout << "Enter Age: ";
        std::cin >> age;
    }

    void display_person_data() {
        std::cout << "\nName: " << name;
        std::cout << "\nAge: " << age;
    }
};

class Student : virtual public Person {
protected:
    float percentage;

public:
    void get_student_data() {
        std::cout << "\nEnter student's percentage: ";
        std::cin >> percentage;
    }

    void display_student_data() {
        std::cout << "\nPercentage: " << percentage;
    }
};

class Teacher : virtual public Person {
protected:
    float salary;

public:
    void get_teacher_data() {
        std::cout << "Enter teacher's salary: ";
        std::cin >> salary;
    }

    void display_teacher_data() {
        std::cout << "\nSalary: " << salary;
    }
};

class TeachingAssistant : public Student, public Teacher {
public:
    void get_all_data() {
        std::cout << "\n--- Enter Data for Teaching Assistant ---" << std::endl;
        get_person_data();
        get_student_data();
        get_teacher_data();
    }

    void display_all_data() {
        std::cout << "\n\n--- Teaching Assistant Details ---";
        display_person_data();
        display_student_data();
        display_teacher_data();
        std::cout << std::endl;
    }
};

int main() {
    TeachingAssistant ta;

    ta.get_all_data();
    ta.display_all_data();

    return 0;
}