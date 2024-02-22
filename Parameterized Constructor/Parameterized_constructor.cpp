#include <iostream>
#include <string>

using namespace std;

// Defining a class called 'Person'
class Person {
private:
    string name;
    int age;

public:
    // Parameterized constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Function to display person's details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Creating an object of the Person class using parameterized constructor
    Person person1("Alice", 30);

    // Displaying details of the person
    cout << "Details of Person 1:" << endl;
    person1.displayDetails();

    return 0;
}
