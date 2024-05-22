//Design a class Complex for adding the two complex numbers and also show the use of constructor.

#include <iostream.h>
#include <conio.h>

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor with default values
    Complex(float r = 0.0, float i = 0.0) : real(r), imag(i) {}

    // Member function to add two complex numbers
    Complex add(const Complex& other) const {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }

    // Display the complex number
    void display() const {
        cout << "Complex Number: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    // Create two instances of the Complex class using the constructor
    Complex complex1(2.5, 3.0);
    Complex complex2(1.5, 2.5);

    clrscr(); // Clear the screen

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    // Display the original complex numbers
    cout << "Original Complex Numbers:\n";
    complex1.display();
    complex2.display();

    // Use the add function to add complex numbers
    Complex sum = complex1.add(complex2);

    // Display the result
    cout << "\nSum of Complex Numbers:\n";
    sum.display();

    getch(); // Wait for a key press
    return 0;
}