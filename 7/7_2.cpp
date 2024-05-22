#include <iostream.h>
#include <conio.h>
#include <string.h>

// Base class
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

// First derived class (Hierarchical Inheritance)
class Dog : public Animal {
public:
    Dog(const char* dogName) : Animal(dogName) {}

    void bark() {
        cout << name << " is barking." << endl;
    }
};

// Second derived class (Hierarchical Inheritance)
class Cat : public Animal {
public:
    Cat(const char* catName) : Animal(catName) {}

    void meow() {
        cout << name << " is meowing." << endl;
    }
};

// Third derived class (Multiple Inheritance)
class Robot {
protected:
    char robotName[50];

public:
    Robot(const char* robotName) {
        strcpy(this->robotName, robotName);
    }

    void work() {
        cout << robotName << " is working." << endl;
    }
};

// Fourth derived class (Hybrid Inheritance)
class RoboDog : public Dog, public Robot {
public:
    RoboDog(const char* dogName, const char* robotName)
        : Dog(dogName), Robot(robotName) {}

    void guard() {
        cout << Dog::name << " the RoboDog is guarding." << endl;
    }
};

int main() {
    clrscr(); // Clear the screen

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    // Create an instance of the hybrid derived class
    RoboDog myRoboDog("Buddy", "RoboBuddy");
    myRoboDog.eat();   // From Animal (Hierarchical Inheritance)
    myRoboDog.sleep(); // From Animal (Hierarchical Inheritance)
    myRoboDog.bark();  // Specific to the first derived class (Hierarchical Inheritance)
    myRoboDog.work();  // From Robot (Multiple Inheritance)
    myRoboDog.guard(); // Specific to the fourth derived class (Hybrid Inheritance)

    getch(); // Wait for a key press
    return 0;
}