#include <iostream.h>
#include <conio.h>

// Box class template
template <class T>
class Box {
private:
    T length;
    T width;
    T height;

public:
    // Constructor to initialize the box dimensions
    Box(T l, T w, T h) : length(l), width(w), height(h) {}

    // Method to calculate and return the volume of the box
    T volume() {
        return length * width * height;
    }
};

int main() {
    clrscr(); // Clear the screen

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    // Create a box of integers
    Box<int> intBox(2, 3, 4);
    cout << "Volume of intBox: " << intBox.volume() << endl; // Output: 24

    // Create a box of floats
    Box<float> floatBox(1.5f, 2.5f, 3.5f);
    cout << "Volume of floatBox: " << floatBox.volume() << endl; // Output: 13.125

    getch(); // Wait for a key press
    return 0;
}