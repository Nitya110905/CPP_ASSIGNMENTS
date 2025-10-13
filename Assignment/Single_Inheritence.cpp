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

class batsman : public cricketer {
private:
    int total_runs;
    float average_runs;
    int best_performance;
    int innings_played;

public:
    void input_data() {
        get_cricketer_data(); 
        
        cout << "Enter total runs scored: ";
        cin >> total_runs;
        cout << "Enter best performance (highest score): ";
        cin >> best_performance;
        cout << "Enter number of innings played: ";
        cin >> innings_played;
    }

    void calculate_average_runs() {
        if (innings_played > 0) {
            average_runs = static_cast<float>(total_runs) / innings_played;
        } else {
            average_runs = 0;
        }
    }

    void display_data() {
        show_cricketer_data(); 
        
        cout << "Total Runs: " << total_runs << endl;
        cout << "Best Performance: " << best_performance << endl;
        cout << "Innings Played: " << innings_played << endl;
        cout << "Average Runs: " << average_runs << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    batsman b1;
    
    cout << "Enter Batsman Information:\n" << endl;

    b1.input_data();
    b1.calculate_average_runs();
    b1.display_data();

    return 0;
}