#include <iostream>
#include <string>

using namespace std;

// Defining a class called 'DynamicArray'
class DynamicArray {
private:
    int* array; // Pointer to dynamically allocated array
    int size;   // Size of the array

public:
    // Constructor with dynamic memory allocation
    DynamicArray(int s) {
        size = s;
        array = new int[size]; // Allocating memory dynamically
        cout << "Dynamic array created with size: " << size << endl;
    }

    // Destructor to release dynamically allocated memory
    ~DynamicArray() {
        delete[] array; // Freeing allocated memory
        cout << "Dynamic array destroyed." << endl;
    }

    // Function to set value at a particular index in the array
    void setValue(int index, int value) {
        if (index >= 0 && index < size) {
            array[index] = value;
        } else {
            cout << "Invalid index." << endl;
        }
    }

    // Function to display the contents of the array
    void displayArray() {
        cout << "Array elements:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Creating an object of the DynamicArray class with size 5
    DynamicArray* dynamicArray = new DynamicArray(5);

    // Setting values in the array
    dynamicArray->setValue(0, 10);
    dynamicArray->setValue(1, 20);
    dynamicArray->setValue(2, 30);
    dynamicArray->setValue(3, 40);
    dynamicArray->setValue(4, 50);

    // Displaying the contents of the array
    dynamicArray->displayArray();

    // Deleting the object to release memory
    delete dynamicArray;

    return 0;
}
