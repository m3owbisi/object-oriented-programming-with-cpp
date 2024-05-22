
#include <iostream.h>
#include <conio.h>

class StaticDemo {
private:
    int instanceVariable;
    static int staticVariable; // Static variable shared among all instances

public:
    // Constructor to initialize instanceVariable
    StaticDemo(int value) : instanceVariable(value) {}

    // Static function to modify the static variable
    static void modifyStaticVariable(int value) {
        staticVariable = value;
    }

    // Display the values of instanceVariable and staticVariable
    void display() const {
        cout << "Instance Variable: " << instanceVariable << endl;
        cout << "Static Variable: " << staticVariable << endl;
    }
};

// Initialization of static variable
int StaticDemo::staticVariable = 0;

int main() {
    clrscr(); // Clear the screen

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    // Create two objects of StaticDemo class
    StaticDemo obj1(10);
    StaticDemo obj2(20);

    // Display initial values
    cout << "Initial Values:\n";
    obj1.display();
    obj2.display();

    // Modify the static variable using the static function
    StaticDemo::modifyStaticVariable(100);

    // Display values after modifying the static variable
    cout << "\nValues after modifying static variable:\n";
    obj1.display();
    obj2.display();

    getch(); // Wait for a key press
    return 0;
}
