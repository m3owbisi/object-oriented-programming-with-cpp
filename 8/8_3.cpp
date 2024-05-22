#include <iostream.h>
#include <conio.h>
#include <string.h>

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual float area() = 0;
};

// Derived class 1: Rectangle
class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    // Implementation of the pure virtual function
    float area() {
        return length * width;
    }
};

// Derived class 2: Circle
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    // Implementation of the pure virtual function
    float area() {
        return 3.14 * radius * radius;
    }
};

int main() {
    clrscr(); // Clear the screen

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    // Creating objects of derived classes
    Rectangle rect(5, 3);
    Circle circle(4);

    // Calling area() method on objects of derived classes
    cout << "Area of Rectangle: " << rect.area() << endl;
    cout << "Area of Circle: " << circle.area() << endl;

    getch(); // Wait for a key press
    return 0;
}