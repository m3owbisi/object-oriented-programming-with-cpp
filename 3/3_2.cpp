#include <iostream.h>
#include <conio.h>

class Geometry {
public:
    // Calculate area for 2D shapes (default implementation)
    float area() const {
        return 0.0;
    }

    // Calculate volume for 3D shapes (default implementation)
    float volume() const {
        return 0.0;
    }
};

// Overload area() for a rectangle
class Rectangle : public Geometry {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    // Overloaded area() for a rectangle
    float area() const {
        return length * width;
    }
};

// Overload area() for a circle
class Circle : public Geometry {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    // Overloaded area() for a circle
    float area() const {
        return 3.14159 * radius * radius;
    }
};

int main() {
    clrscr(); // Clear the screen

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    // Create objects of different shapes
    Rectangle rectangle(4.0, 5.0);
    Circle circle(3.0);

    // Display areas using the default area() from Geometry
    cout << "Default Area (Geometry class):\n";
    cout << "Rectangle: " << rectangle.area() << endl;
    cout << "Circle: " << circle.area() << endl;

    // Display areas using the overloaded area() functions
    cout << "\nOverloaded Area:\n";
    cout << "Rectangle: " << rectangle.area() << endl;
    cout << "Circle: " << circle.area() << endl;

    getch(); // Wait for a key press
    return 0;
}