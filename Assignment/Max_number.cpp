//  Write a program to find the max number from given 
// two numbers using friend function
#include <iostream>

using namespace std;

class NumberPair {
private:
    int val1;
    int val2;
    int max;

public:
    NumberPair(int a, int b) {
        val1 = a;
        val2 = b;
    }

    void display() {
        cout << "val1 = " << val1 << ", val2 = " << val2 << endl;
        cout << "Max Number = " << max;
    }

    friend void maxNumber(NumberPair& obj);
};

void    maxNumber(NumberPair& obj) {
    if(obj.val1 > obj.val2){
        obj.max = obj.val1;
    }
    else{
        obj.max = obj.val2;
    }

}

int main() {
    int a, b;

    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;

    NumberPair myNumbers(a, b);

    maxNumber(myNumbers);

    myNumbers.display();

    return 0;
}
