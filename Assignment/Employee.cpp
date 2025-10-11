// Write a C++ program to implement a class called Employee 
// that has private member variables for name, employee ID, 
// and salary. Include member functions to calculate and set 
// salary based on employee performance. Using of 
// constructor 

#include <iostream>
#include <iomanip> // Required for formatting output (setprecision)

using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string empName, int empID, double baseSalary) {
        name = empName;
        employeeID = empID;
        salary = baseSalary;
    }

    void updateSalaryByPerformance(int rating) {
        double raisePercentage = 0.0;

        switch (rating) {
            case 5: 
                raisePercentage = 0.15; 
                break;
            case 4: 
                raisePercentage = 0.10; 
                break;
            case 3: 
                raisePercentage = 0.05; 
                break;
            case 2: 
                raisePercentage = 0.02; 
                break;
            case 1: 
                raisePercentage = 0.00; 
                break;
            default:
                cout << "Invalid rating for " << name << ". No change in salary." << endl;
                return; 
        }

        double raiseAmount = salary * raisePercentage;
        salary += raiseAmount;
        
        cout << "Salary updated for " << name << "." << endl;
    }

    void displayDetails() {
        cout << "------------------------" << endl;
        cout << "Employee ID:   " << employeeID << endl;
        cout << "Name:          " << name << endl;
        cout << "Current Salary: $" << fixed << setprecision(2) << salary << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    Employee emp1("Aarav Patel", 101, 60000.00);
    Employee emp2("Priya Sharma", 102, 75000.00);

    cout << "Initial Employee Details:" << endl;
    emp1.displayDetails();
    emp2.displayDetails();

    cout << "\n--- Annual Performance Review ---" << endl;
    emp1.updateSalaryByPerformance(5); 
    emp2.updateSalaryByPerformance(3);

    cout << "\nUpdated Employee Details:" << endl;
    emp1.displayDetails();
    emp2.displayDetails();

    return 0;
}