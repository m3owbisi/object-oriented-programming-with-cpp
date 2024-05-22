#include <iostream.h>
#include <stdio.h>
#include <conio.h>

const float PI = 3.14159;

// Forward declaration of Circle class
class Circle;

// Friend function declaration
float calculateArea(const Circle& c);

class Circle {
private:
    float radius;

public:
    // Constructor
    Circle(float r) : radius(r) {}

    // Accessor function for radius
    float getRadius() const {
        return radius;
    }

    // Friend function is declared as a friend inside the class
    friend float calculateArea(const Circle& c);
};

// Friend function definition for calculating the area of a circle
float calculateArea(const Circle& c) {
    // Access the private member radius of the Circle class
    float area = PI * c.radius * c.radius;
    return area;
}

int main() {
    // Create an instance of the Circle class
    Circle myCircle(5.0);

    clrscr(); // Clear the screen

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    // Display the radius
    cout << "Radius of the circle: " << myCircle.getRadius() << endl;

    // Use the friend function to calculate and display the area
    cout << "Area of the circle: " << calculateArea(myCircle) << endl;

    getch(); // Wait for a key press
    return 0;
}