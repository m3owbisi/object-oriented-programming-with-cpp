#include <iostream.h>
#include <stdio.h>
#include <conio.h>

class SumDistance;  // Forward declaration

class Distance {
private:
    int feet;
    float inches;

public:
    // Constructor
    Distance(int f, float in) : feet(f), inches(in) {}

    // Friend function declaration
    friend SumDistance addDistances(const Distance& d1, const Distance& d2);

    // Display the distance
    void display() {
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }
};

class SumDistance {
private:
    int feet;
    float inches;

public:
    // Constructor
    SumDistance() : feet(0), inches(0.0) {}

    // Friend function declaration
    friend SumDistance addDistances(const Distance& d1, const Distance& d2);

    // Display the sum distance
    void display() {
        cout << "Sum Distance: " << feet << " feet " << inches << " inches" << endl;
    }
};

// Friend function definition for adding two different distances
SumDistance addDistances(const Distance& d1, const Distance& d2) {
    SumDistance result;

    // Add the feet and inches separately
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    // If the sum of inches exceeds 12, adjust feet and inches
    if (result.inches >= 12.0) {
        result.inches -= 12.0;
        result.feet++;
    }

    return result;
}

int main() {
    // Create two Distance objects
    Distance distance1(3, 6.5);
    Distance distance2(2, 8.3);

    // Use the friend function to add distances
    SumDistance sum = addDistances(distance1, distance2);

    // Display the original distances
    clrscr(); // Clear the screen

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    cout << "Distance 1: ";
    distance1.display();
    cout << "Distance 2: ";
    distance2.display();

    // Display the sum of distances
    cout << "\nSum of Distances:\n";
    sum.display();

    getch(); // Wait for a key press
    return 0;
}