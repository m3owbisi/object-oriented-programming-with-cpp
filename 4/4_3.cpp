#include <iostream.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>

class MyString {
private:
    char* str;

public:
    // Constructor
    MyString(const char* s) {
	str = new char[strlen(s) + 1];
	strcpy(str, s);
    }

    // Overload + operator for string concatenation
    MyString operator+(const MyString& other) const {
	char* result = new char[strlen(str) + strlen(other.str) + 1];
	strcpy(result, str);
	strcat(result, other.str);

	return MyString(result);
    }

    // Display the string
    void display() const {
	cout << "String: " << str << endl;
    }

    // Destructor to free memory
    ~MyString() {
	delete[] str;
    }
};

int main() {
    clrscr();  // Clear the screen

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    // Create two MyString objects
    MyString str1("Py");
    MyString str2("thon");

    // Display original strings
    cout << "String 1:\n";
    str1.display();
    cout << "\nString 2:\n";
    str2.display();

    // Use the overloaded + operator to concatenate strings
    MyString result = str1 + str2;

    // Display the concatenated string
    cout << "\nConcatenated String:\n";
    result.display();

    getch();  // Wait for a key press
    return 0;
}