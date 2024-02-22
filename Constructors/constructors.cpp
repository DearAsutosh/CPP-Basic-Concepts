#include <iostream>
#include <string>

using namespace std;

// Defining a class called 'Car'
class Car {
private:
    string brand;
    string model;
    int year;

public:
    // Constructor without parameters (default constructor)
    Car() {
        brand = "Unknown";
        model = "Unknown";
        year = 0;
    }

    // Constructor with parameters (parameterized constructor)
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    // Function to display car details
    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Creating objects of the Car class using different constructors
    Car car1; // Using default constructor
    Car car2("Toyota", "Corolla", 2022); // Using parameterized constructor

    // Displaying details of cars
    cout << "Details of Car 1:" << endl;
    car1.displayDetails();
    cout << endl;

    cout << "Details of Car 2:" << endl;
    car2.displayDetails();

    return 0;
}
