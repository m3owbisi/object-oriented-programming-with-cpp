#include <iostream.h>
#include <conio.h>

// Pair class template
template <class T1, class T2>
class Pair {
private:
    T1 first;   // First element of the pair
    T2 second;  // Second element of the pair

public:
    // Constructor to initialize the pair with given values
    Pair(T1 f, T2 s) : first(f), second(s) {}

    // Method to display the pair
    void display() {
        cout << "(" << first << ", " << second << ")" << endl;
    }
};

int main() {
    clrscr(); // Clear the screen

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    // Create a pair of integers and float
    Pair<int, float> pair1(10, 3.14f);
    pair1.display(); // Display the pair: (10, 3.14)

    // Create a pair of character and string
    Pair<char, const char*> pair2('a', "Hello");
    pair2.display(); // Display the pair: (a, Hello)

    getch(); // Wait for a key press
    return 0;
}