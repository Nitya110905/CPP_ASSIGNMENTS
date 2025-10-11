// Write a C++ program to implement a class called Date that has 
// private member variables for day, month, and year. Include 
// member functions to set and get these variables, as well as to 
// validate if the date is valid.

#include <iostream>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

    bool isLeapYear() const {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

public:
    // Default constructor
    Date() : day(1), month(1), year(2000) {}

    // Parameterized constructor that also validates
    Date(int d, int m, int y) {
        //setDate function to ensure validation logic is applied
        setDate(d, m, y);
    }

    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;

        // If the date is not valid, reset to a default safe date
        if (!isValid()) {
            cout << "Error: Invalid date provided (" << d << "/" << m << "/" << y << ").";
            cout << " Resetting to 1/1/2000." << endl;
            day = 1;
            month = 1;
            year = 2000;
        }
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    bool isValid() const {
        if (year <= 0 || month < 1 || month > 12 || day < 1) {
            return false;
        }

        int daysInMonth = 31; 

        if (month == 4 || month == 6 || month == 9 || month == 11) {
            daysInMonth = 30;
        } else if (month == 2) {
            daysInMonth = isLeapYear() ? 29 : 28;
        }

        return day <= daysInMonth;
    }

    void displayDate() const {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    cout << "Creating some Date objects..." << endl;
    
    Date today(11, 10, 2025);
    cout << "Date 'today' is: ";
    today.displayDate();

    Date invalidDay(32, 1, 2023);
    cout << "Date 'invalidDay' is: ";
    invalidDay.displayDate();

    Date invalidMonth(15, 13, 2023);
    cout << "Date 'invalidMonth' is: ";
    invalidMonth.displayDate();

    Date leapDate(29, 2, 2024);
    cout << "Date 'leapDate' is: ";
    leapDate.displayDate();
    
    Date nonLeapDate(29, 2, 2025);
    cout << "Date 'nonLeapDate' is: ";
    nonLeapDate.displayDate();

    cout << "\nUsing getter functions for 'today':";
    cout << "Day: " << today.getDay() << ", Month: " << today.getMonth() << ", Year: " << today.getYear() << endl;

    cout << "\nUsing setter to change 'today' to a valid date:" << endl;
    today.setDate(15, 8, 1947);
    cout << "New date for 'today' is: ";
    today.displayDate();
    
    return 0;
}