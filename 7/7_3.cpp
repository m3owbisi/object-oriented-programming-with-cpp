#include <iostream.h>
#include <conio.h>
#include <string.h>

// Base class
class Base {
public:
    int publicVar;

    Base() : publicVar(0) {}

    void publicFunction() {
        cout << "Public function in Base class." << endl;
    }

protected:
    int protectedVar;

    void protectedFunction() {
        cout << "Protected function in Base class." << endl;
    }

private:
    int privateVar;

    void privateFunction() {
        cout << "Private function in Base class." << endl;
    }
};

// Derived class with public inheritance
class PublicDerived : public Base {
public:
    void accessBaseMembers() {
        cout << "Accessing Base class members in PublicDerived class." << endl;
        publicVar = 1;          // Accessible
        protectedVar = 2;       // Accessible
        // privateVar is not accessible
        publicFunction();       // Accessible
        protectedFunction();    // Accessible
        // privateFunction() is not accessible
    }
};

// Derived class with protected inheritance
class ProtectedDerived : protected Base {
protected:
    void accessBaseMembers() {
        cout << "Accessing Base class members in ProtectedDerived class." << endl;
        publicVar = 1;          // Accessible
        protectedVar = 2;       // Accessible
        // privateVar is not accessible
        publicFunction();       // Accessible
        protectedFunction();    // Accessible
        // privateFunction() is not accessible
    }
};

// Derived class with private inheritance
class PrivateDerived : private Base {
private:
    void accessBaseMembers() {
        cout << "Accessing Base class members in PrivateDerived class." << endl;
        publicVar = 1;          // Accessible
        protectedVar = 2;       // Accessible
        // privateVar is not accessible
        publicFunction();       // Accessible
        protectedFunction();    // Accessible
        // privateFunction() is not accessible
    }
};

int main() {
    clrscr(); // Clear the screen

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    // Example of public inheritance
    PublicDerived publicDerivedObj;
    publicDerivedObj.accessBaseMembers();

    // Example of protected inheritance
    ProtectedDerived protectedDerivedObj;
    // protectedDerivedObj.accessBaseMembers(); // Error: Access is protected

    // Example of private inheritance
    PrivateDerived privateDerivedObj;
    // privateDerivedObj.accessBaseMembers();   // Error: Access is private

    getch(); // Wait for a key press
    return 0;
}