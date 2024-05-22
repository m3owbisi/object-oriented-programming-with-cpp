#include <iostream.h>
#include <stdio.h>
#include <conio.h>

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0.0, float i = 0.0) : real(r), imag(i) {}

    // Friend function declaration
    friend Complex addComplex(const Complex& c1, const Complex& c2);

    // Display the complex number
    void display() {
        cout << "Complex Number: " << real << " + " << imag << "i" << endl;
    }
};

// Friend function definition for adding two complex numbers
Complex addComplex(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    // Create two complex numbers
    Complex complex1(2.5, 3.0);
    Complex complex2(1.5, 2.5);

    // Display the original complex numbers
    clrscr(); // Clear the screen

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    cout << "Original Complex Numbers:\n";
    complex1.display();
    complex2.display();

    // Use the friend function to add complex numbers
    Complex sum = addComplex(complex1, complex2);

    // Display the result
    cout << "\nSum of Complex Numbers:\n";
    sum.display();

    getch(); // Wait for a key press
    return 0;
}