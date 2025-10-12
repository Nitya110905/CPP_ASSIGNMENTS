// Assume a class cricketer is declared. Declare a derived class 
// batsman from cricketer. Data member of batsman. Total 
// runs, Average runs and best performance. Member functions 
// input data, calculate average runs, Display data. (Single 
// Inheritance)


#include <iostream>
#include <string>
using namespace std;

class cricketer {
protected:
    string name;
    int jersey_number;

public:
    void get_cricketer_data() {
        cout << "Enter player name: ";
        getline(cin, name);
        cout << "Enter jersey number: ";
        cin >> jersey_number;
    }

    void show_cricketer_data() {
        cout << "\n--- Player Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Jersey Number: " << jersey_number << endl;
    }
};

//#####################################################
//##                DERIVED CLASS                    ##
//#####################################################
// Derived class 'batsman' inherits publicly from 'cricketer'
class batsman : public cricketer {
private:
    int total_runs;
    float average_runs;
    int best_performance;
    int innings_played;

public:
    // Member function to input batsman-specific data
    void input_data() {
        // Call base class function to get name and jersey number
        get_cricketer_data(); 
        
        cout << "Enter total runs scored: ";
        cin >> total_runs;
        cout << "Enter best performance (highest score): ";
        cin >> best_performance;
        cout << "Enter number of innings played: ";
        cin >> innings_played;
    }

    // Member function to calculate the average runs
    void calculate_average_runs() {
        if (innings_played > 0) {
            // Use static_cast to ensure floating-point division
            average_runs = static_cast<float>(total_runs) / innings_played;
        } else {
            average_runs = 0;
        }
    }

    // Member function to display all data (base and derived)
    void display_data() {
        // Call base class function to display common data
        show_cricketer_data(); 
        
        cout << "Total Runs: " << total_runs << endl;
        cout << "Best Performance: " << best_performance << endl;
        cout << "Innings Played: " << innings_played << endl;
        cout << "Average Runs: " << average_runs << endl;
        cout << "----------------------" << endl;
    }
};


//#####################################################
//##               MAIN FUNCTION                     ##
//#####################################################
int main() {
    // Create an object of the derived class
    batsman b1;

    cout << "Enter Batsman Information:\n" << endl;
    
    // Input all data
    b1.input_data();

    // Calculate the average
    b1.calculate_average_runs();

    // Display the complete data
    b1.display_data();

    return 0;
}