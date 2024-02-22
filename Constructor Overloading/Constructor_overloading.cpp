#include <iostream>
#include <string>

using namespace std;

// Defining a class called 'Rectangle'
class Rectangle {
private:
    int width;
    int height;

public:
    // Default constructor
    Rectangle() {
        width = 0;
        height = 0;
    }

    // Parameterized constructor with one parameter
    Rectangle(int side) {
        width = side;
        height = side;
    }

    // Parameterized constructor with two parameters
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    // Function to calculate and return the area of the rectangle
    int calculateArea() {
        return width * height;
    }
};

int main() {
    // Creating objects of the Rectangle class using different constructors
    Rectangle square; // Using default constructor
    Rectangle square2(5); // Using parameterized constructor with one parameter (creates a square)
    Rectangle rectangle(4, 6); // Using parameterized constructor with two parameters (creates a rectangle)

    // Calculating and displaying the area of each shape
    cout << "Area of square: " << square.calculateArea() << endl;
    cout << "Area of square2: " << square2.calculateArea() << endl;
    cout << "Area of rectangle: " << rectangle.calculateArea() << endl;

    return 0;
}
