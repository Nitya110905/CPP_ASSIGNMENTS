// Write a program of to sort the array using templates 

#include <iostream>

using namespace std;

template <typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            
            if (arr[j] > arr[j + 1]) {
                
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int size) {
    cout << "[ ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

int main() {
    
    int intArr[] = {64, 34, 25, 12, 22, 11, 90};
   
    int intSize = sizeof(intArr) / sizeof(intArr[0]);

    cout << "--- Integer Array ---" << endl;
    cout << "Before sort: ";
    printArray(intArr, intSize);
    
    sortArray(intArr, intSize); 
    
    cout << "After sort:  ";
    printArray(intArr, intSize);

    double dblArr[] = {3.14, 1.2, 9.9, 0.5, 2.718};
    int dblSize = sizeof(dblArr) / sizeof(dblArr[0]);

    cout << "\n--- Double Array ---" << endl;
    cout << "Before sort: ";
    printArray(dblArr, dblSize);

    sortArray(dblArr, dblSize); 

    cout << "After sort:  ";
    printArray(dblArr, dblSize);

    char charArr[] = {'Z', 'B', 'X', 'A', 'M', 'P', 'L', 'E'};
    int charSize = sizeof(charArr) / sizeof(charArr[0]);

    cout << "\n--- Character Array ---" << endl;
    cout << "Before sort: ";
    printArray(charArr, charSize);

    sortArray(charArr, charSize); 

    cout << "After sort:  ";
    printArray(charArr, charSize);

    return 0;
}