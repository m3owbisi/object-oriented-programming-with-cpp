#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class Employee
{
private:
	char name[50];
	int age;
	double salary;

	void getInfo()
	{
		clrscr();

		cout << "Enter Employee Name: ";
		gets(name);

		cout << "Enter Employee Age: ";
		cin >> age;

		cout << "Enter Employee Salary: ";
		cin >> salary;
	}

public:
	void displayInfo()
	{
		getInfo();
		clrscr();
		cout << "\nEmployee information:\n";
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Salary: $" << salary << endl;

		getch();
	}
};

void main()
{
    cout << "Hiral" << endl;
    cout << "239112" << endl;

	Employee emp;
	emp.displayInfo();
	getch();
}