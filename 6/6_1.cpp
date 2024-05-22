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

// Derived class
class Dog : public Animal {
public:
    Dog(const char* dogName) : Animal(dogName) {}

    void bark() {
        cout << name << " is barking." << endl;
    }
};

int main() {
    clrscr(); // Clear the screen

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    // Create an instance of the base class
    Animal genericAnimal("Generic Animal");
    genericAnimal.eat();
    genericAnimal.sleep();

    cout << endl;

    // Create an instance of the derived class
    Dog myDog("Buddy");
    myDog.eat();   // Inherited from the base class
    myDog.sleep(); // Inherited from the base class
    myDog.bark();  // Specific to the derived class

    getch(); // Wait for a key press
    return 0;
}