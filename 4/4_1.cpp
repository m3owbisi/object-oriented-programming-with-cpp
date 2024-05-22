#include <iostream.h>
#include <conio.h>

class MyNumber {
private:
    int value;

public:
    // Constructor
    MyNumber(int val) : value(val) {}

    // Overload unary - operator
    MyNumber operator-() const {
        return MyNumber(-value);
    }

    // Display the value
    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    clrscr();  // Clear the screen

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    // Create an object of MyNumber class
    MyNumber num1(10);

    // Display original value
    cout << "Original Value:\n";
    num1.display();

    // Use the overloaded unary - operator
    MyNumber num2 = -num1;

    // Display the negated value
    cout << "\nNegated Value:\n";
    num2.display();

    getch();  // Wait for a key press
    return 0;
}