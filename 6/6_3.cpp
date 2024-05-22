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

// First derived class
class Mammal : public Animal {
public:
    Mammal(const char* mammalName) : Animal(mammalName) {}

    void giveBirth() {
        cout << name << " is giving birth." << endl;
    }
};

// Second derived class
class Dog : public Mammal {
public:
    Dog(const char* dogName) : Mammal(dogName) {}

    void bark() {
        cout << name << " is barking." << endl;
    }
};

int main() {
    clrscr(); // Clear the screen

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    // Create an instance of the most derived class
    Dog myDog("Buddy");

    // Access methods from all levels of inheritance
    myDog.eat();        // From Animal
    myDog.sleep();      // From Animal
    myDog.giveBirth();  // From Mammal
    myDog.bark();       // Specific to the derived class

    getch(); // Wait for a key press
    return 0;
}