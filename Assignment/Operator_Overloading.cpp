// Write a Program of Two 1D Matrix Addition using Operator 
// Overloading 

#include <iostream>
using namespace std;

class Matrix1D {
private:
    int *data; 
    int size;  

public:
    Matrix1D(int s) {
        size = s;
        data = new int[size]; // Allocate memory on the heap
        
        for (int i = 0; i < size; i++) {
            data[i] = 0;
        }
    }

    ~Matrix1D() {
        delete[] data; // Free the heap memory
    }

    // Copy Constructor (Part of the Rule of Three)
    // Creates a new object as a deep copy of an existing one
    Matrix1D(const Matrix1D& other) {
        size = other.size;
        data = new int[size]; // Allocate *new* memory
        
        // Copy elements from the other object to this one
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }
    }

    // Copy Assignment Operator (Part of the Rule of Three)
    // Handles assignment like m3 = m1;
    Matrix1D& operator=(const Matrix1D& other) {
        // Check for self-assignment (e.g., m1 = m1)
        if (this == &other) {
            return *this;
        }

        // Deallocate existing memory
        delete[] data;

        // Allocate new memory and copy data
        size = other.size;
        data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }

        // Return a reference to this object
        return *this;
    }

    void getData() {
        cout << "Enter " << size << " elements:" << endl;
        for (int i = 0; i < size; i++) {
            cout << "  Element [" << i << "]: ";
            cin >> data[i];
        }
    }

    // Function to display the matrix elements
    void displayData() {
        cout << "[ ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << "]" << endl;
    }

    Matrix1D operator+(const Matrix1D& other) const {
        // We assume matrices are the same size for this example.
        // A robust program would add a size check.
        
        // Create a new result matrix of the same size
        Matrix1D result(size);

        // Perform element-wise addition
        for (int i = 0; i < size; i++) {
            result.data[i] = this->data[i] + other.data[i];
        }

        // Return the new result matrix
        return result;
    }
};

int main() {
    int s;
    cout << "Enter the size for the 1D matrices: ";
    cin >> s;

    if (s <= 0) {
        cout << "Error: Size must be a positive number." << endl;
        return 1; // Exit with an error
    }

    Matrix1D m1(s);
    Matrix1D m2(s);

    cout << "\n--- Enter Data for Matrix 1 ---" << endl;
    m1.getData();

    cout << "\n--- Enter Data for Matrix 2 ---" << endl;
    m2.getData();

    // --- This is the key line ---
    // Perform addition using the overloaded '+' operator.
    // This calls m1.operator+(m2) and creates a new object 'm3'.
    Matrix1D m3 = m1 + m2;

    cout << "\n--- Results ---" << endl;
    cout << "Matrix 1: ";
    m1.displayData();

    cout << "Matrix 2: ";
    m2.displayData();

    cout << "Result (M1 + M2): ";
    m3.displayData();

    return 0; 
}