#include <iostream>
#include <string>

using namespace std;

// Defining a class called 'Resource'
class Resource {
private:
    string name;

public:
    // Constructor
    Resource(string n) {
        name = n;
        cout << "Resource '" << name << "' created." << endl;
    }

    // Destructor
    ~Resource() {
        cout << "Resource '" << name << "' destroyed." << endl;
    }
};

int main() {
    // Creating an object of the Resource class
    Resource* resource = new Resource("Memory");

    // Deleting the object manually
    delete resource;

    return 0;
}
