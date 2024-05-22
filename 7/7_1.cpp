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
class Dog : public Animal {
public:
    Dog(const char* dogName) : Animal(dogName) {}

    void bark() {
        cout << name << " is barking." << endl;
    }
};

// Second derived class
class Cat : public Animal {
public:
    Cat(const char* catName) : Animal(catName) {}

    void meow() {
        cout << name << " is meowing." << endl;
    }
};

int main() {
    clrscr(); // Clear the screen

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    // Create an instance of the first derived class
    Dog myDog("Buddy");
    myDog.eat();   // From Animal
    myDog.sleep(); // From Animal
    myDog.bark();  // Specific to the first derived class

    cout << endl;

    // Create an instance of the second derived class
    Cat myCat("Whiskers");
    myCat.eat();   // From Animal
    myCat.sleep(); // From Animal
    myCat.meow();  // Specific to the second derived class

    getch(); // Wait for a key press
    return 0;
}