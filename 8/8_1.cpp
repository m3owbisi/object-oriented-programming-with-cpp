#include <iostream.h>
#include <conio.h>
#include <string.h>

// Base class
class Base {
public:
    virtual void show() {
        cout << "Base class show() function" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Overriding the show() method of the Base class
    void show() {
        cout << "Derived class show() function" << endl;
    }
};

int main() {
    clrscr(); // Clear the screen

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    Base baseObj;
    Derived derivedObj;

    // Call the show() function of Base class
    baseObj.show();  // Output: Base class show() function

    // Call the show() function of Derived class
    derivedObj.show();  // Output: Derived class show() function

    getch(); // Wait for a key press
    return 0;
}