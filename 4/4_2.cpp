#include <iostream.h>
#include <conio.h>

class Clock {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor
    Clock(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Overload + operator to add two Clock objects
    Clock operator+(const Clock& other) const {
        int totalSeconds = seconds + other.seconds + 60 * (minutes + other.minutes) + 3600 * (hours + other.hours);
        int newHours = totalSeconds / 3600;
        int remainingSeconds = totalSeconds % 3600;
        int newMinutes = remainingSeconds / 60;
        int newSeconds = remainingSeconds % 60;

        return Clock(newHours, newMinutes, newSeconds);
    }

    // Display the time
    void display() const {
        cout << "Time: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    }
};

int main() {
    clrscr();  // Clear the screen

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    // Create two Clock objects
    Clock time1(2, 30, 45);
    Clock time2(1, 45, 20);

    // Display original timings
    cout << "Time 1:\n";
    time1.display();
    cout << "\nTime 2:\n";
    time2.display();

    // Use the overloaded + operator to add timings
    Clock sum = time1 + time2;

    // Display the sum of timings
    cout << "\nSum of Timings:\n";
    sum.display();

    getch();  // Wait for a key press
    return 0;
}