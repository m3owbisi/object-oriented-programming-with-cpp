#include <iostream.h>
#include <conio.h>
#include <string.h>

// First base class
class Animal {
protected:
    char name[50];

public:
    Animal(const char* animalName) {
        strcpy(name, animalName);
    }

    void eat() {
        cout << name << " is eating." << endl;
    }

    void sleep() {
        cout << name << " is sleeping." << endl;
    }
};

// Second base class
class Machine {
protected:
    char machineType[50];

public:
    Machine(const char* type) {
        strcpy(machineType, type);
    }

    void start() {
        cout << machineType << " is starting." << endl;
    }

    void stop() {
        cout << machineType << " is stopping." << endl;
    }
};

// Derived class inheriting from both Animal and Machine
class Robot : public Animal, public Machine {
public:
    Robot(const char* robotName, const char* robotType)
        : Animal(robotName), Machine(robotType) {}

    void work() {
        cout << name << " the " << machineType << " is working." << endl;
    }
};

int main() {
    clrscr(); // Clear the screen

    cout << "Hiral" << endl;
    cout << "239112" << endl;

// Create an instance of the derived class
    Robot robot("Robo", "Industrial Robot");

    // Access methods from both base classes
    robot.eat();    // From Animal
    robot.sleep();  // From Animal
    robot.start();  // From Machine
    robot.stop();   // From Machine
    robot.work();   // Specific to the derived class

    getch(); // Wait for a key press
    return 0;
}