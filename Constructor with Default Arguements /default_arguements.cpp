#include <iostream>
#include <string>

using namespace std;

// Defining a class called 'Rectangle'
class Rectangle {
private:
    int width;
    int height;

public:
    // Constructor with default arguments
    Rectangle(int w = 0, int h = 0) {
        width = w;
        height = h;
    }

    // Function to calculate and return the area of the rectangle
    int calculateArea() {
        return width * height;
    }
};

int main() {
    // Creating objects of the Rectangle class using constructor with default arguments
    Rectangle square; // Creating a square with default width and height (0x0)
    Rectangle rectangle(4, 6); // Creating a rectangle with specified width and height

    // Calculating and displaying the area of each shape
    cout << "Area of square: " << square.calculateArea() << endl;
    cout << "Area of rectangle: " << rectangle.calculateArea() << endl;

    return 0;
}
