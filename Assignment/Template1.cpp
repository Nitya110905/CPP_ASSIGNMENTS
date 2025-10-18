// Write a program of to swap the two values using template

#include <iostream>

using namespace std;

template <typename T>
void swapValues(T &a, T &b) { 
    
    T temp = a;
    a = b;
    b = temp;
    
}

int main() { 

    int int1 = 10;
    int int2 = 25;

    cout << "--- Integer Swap ---" << endl;
    cout << "Before: int1 = " << int1 << ", int2 = " << int2 << endl;
    
    swapValues(int1, int2); 
    
    cout << "After:  int1 = " << int1 << ", int2 = " << int2 << endl;

    double dbl1 = 5.55;
    double dbl2 = 9.99;

    cout << "\n--- Double Swap ---" << endl;
    cout << "Before: dbl1 = " << dbl1 << ", dbl2 = " << dbl2 << endl;
    
    swapValues(dbl1, dbl2); 
    
    cout << "After:  dbl1 = " << dbl1 << ", dbl2 = " << dbl2 << endl;
    char char1 = 'A';
    char char2 = 'Z';

    cout << "\n--- Character Swap ---" << endl;
    cout << "Before: char1 = " << char1 << ", char2 = " << char2 << endl;
    
    swapValues(char1, char2); 
    
    cout << "After:  char1 = '" << char1 << "', char2 = '" << char2 << "'" << endl;

    return 0;
    
} 