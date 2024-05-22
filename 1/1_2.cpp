#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class Student
{
private:
	char name[50];
	int age;
	double grade;

	void getInfo()
	{
		clrscr();

		cout << "Enter Student Name: ";
		gets(name);

		cout << "Enter Student Age: ";
		cin >> age;

		cout << "Enter Student Grade: ";
		cin >> grade;
	}

public:
	void displayInfo()
	{
		getInfo();
		clrscr();
		cout << "\nEmployee information:\n";
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Grade: " << grade << endl;

		getch();
	}
};

void main()
{
    cout << "Hiral" << endl;
    cout << "239112" << endl;

	Student student;
	student.displayInfo();
	getch();
}