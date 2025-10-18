//  Write a program to swap the two numbers using 
// friend function without using third variable 

#include <iostream>

using namespace std;

class NumberPair {
private:
    int val1;
    int val2;

public:
    NumberPair(int a, int b) {
        val1 = a;
        val2 = b;
    }

    void display() {
        cout << "val1 = " << val1 << ", val2 = " << val2 << endl;
    }

    friend void swapNumbers(NumberPair& obj);
};

void swapNumbers(NumberPair& obj) {
    cout << "\n--- Swapping in friend function... ---" << endl;

    // Because this is a friend, we can access private members
    // obj.val1 and obj.val2.

    obj.val1 = obj.val1 + obj.val2;
    obj.val2 = obj.val1 - obj.val2; 
    obj.val1 = obj.val1 - obj.val2; 

}

int main() {
    int a, b;

    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;

    NumberPair myNumbers(a, b);

    cout << "\nBefore swap:" << endl;
    myNumbers.display();

    // Call the friend function to perform the swap
    // We pass the object by reference
    swapNumbers(myNumbers);

    cout << "\nAfter swap:" << endl;
    myNumbers.display();

    return 0;
}
