#include<iostream.h> // For Turbo C++
#include<stdio.h>
#include<conio.h>
#include<math.h>
class Demo {
private:
	int number;
	// Private method to read a number
	int readNo() {
		cout << "Enter a number: ";
		cin >> number;
		return number;
	}
public:
	void getNumber(){
		int num = readNo();
		cout << "You entered: " << num << endl;
	}
    // Method to calculate the factorial of a number
    long factorial() {
	long fact = 1;
	for (int i = 1; i <= number; ++i) {
	    fact *= i;
	}
	return fact;
    }

    // Method to reverse the given number
    int reverseNo() {
	int reversed = 0;
	int remainder;
	int originalNumber = number;

	while (originalNumber != 0) {
	    remainder = originalNumber % 10;
	    reversed = reversed * 10 + remainder;
	    originalNumber /= 10;
	}

	return reversed;
    }

    // Method to check if the given number is palindrome
    int isPalindrome() {
	return (number == reverseNo());
    }

    // Method to check if the given number is Armstrong
    int isArmstrong() {
	int originalNumber = number;
	int numDigits = 0;
	int sum = 0;

	// Count the number of digits
	while (originalNumber != 0) {
	    originalNumber /= 10;
	    numDigits++;
	}

	// Reset originalNumber
	originalNumber = number;

	// Calculate Armstrong sum
	while (originalNumber != 0) {
	    int digit = originalNumber % 10;
	    sum += pow(digit, numDigits);
	    originalNumber /= 10;
	}

	return (sum == number);
    }
};

int main() {
    Demo demoObj;

    clrscr();

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    // Call the private method to read a number
    demoObj.getNumber();

    // Test the other methods
    cout << "Factorial: " << demoObj.factorial() << endl;
    cout << "Reversed Number: " << demoObj.reverseNo() << endl;
    cout << "Is Palindrome: " << (demoObj.isPalindrome() ? "Yes" : "No") << endl;
    cout << "Is Armstrong: " << (demoObj.isArmstrong() ? "Yes" : "No") << endl;

    getch();

    return 0;
}