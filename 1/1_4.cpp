#include <iostream.h>
#include <stdio.h>
#include <conio.h>

class MyClass
{
private:
	int privateVar;

public:
	// Constructor
	MyClass()
	{
		privateVar = 0;
	}

	// Member function declaration
	void setPrivateVar(int value);

	void displayPrivateVar();
};

// Member function definition outside the class
void MyClass::setPrivateVar(int value)
{
	privateVar = value;
}

void MyClass::displayPrivateVar()
{
	cout << "Private Variable: " << privateVar << endl;
}

int main()
{
    cout << "Hiral" << endl;
    cout << "239112" << endl;

	// Create an instance of the MyClass
	MyClass myObject;

	// Access class members using member functions
	myObject.setPrivateVar(42);
	myObject.displayPrivateVar();

	getch(); // Wait for a key press
	return 0;
}