// Classes.cpp : Defines the entry point for the console application.

/*
Dean Hartfield

10-29-2015

Module 04 Assignment - Create and Use Classes

Create a class of students in a college. Make sure you include the following instance/member variables:

	-Name
	-Phone Number
	-Student Number
	-Current GPA

1. Create the default constructor. Assign some default values to the instance variables.
2. Create a non-default constructor. This non-default constructor will take all four variables as parameters,
   and set them to the instance variables.
3. Create a "displayValues()" member function in the class. This class will display the instance variables.
4. Finally, in the "main()" function, declare two Student objects, one that uses the default constructor,
   and one that uses the non-default constructor. Then, use the objects to call the "displayValues()" function
   to display the values of the student objects.
*/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

// Student class
class Student {
	string name;
	string phoneNum;
	int studentNum;
	double currentGPA;
public:
	Student();
	Student(string inName, string inPhoneNum, int inStudentNum, double inCurrentGPA);
	~Student();
	void displayValues();
};

// Default constructor
Student::Student() {
	name = "Unknown";
	phoneNum = "555-555-5555";
	studentNum = 1;
	currentGPA = 4.00;
}

// Overridden constructor
Student::Student(string inName, string inPhoneNum, int inStudentNum, double inCurrentGPA) {
	name = inName;
	phoneNum = inPhoneNum;
	studentNum = inStudentNum;
	currentGPA = inCurrentGPA;
}

// Destructor
Student::~Student() {
	
}

// Public method for displaying the class member values
void Student::displayValues() {
	cout << "Student name: " << name << endl;
	cout << "Phone number: " << phoneNum << endl;
	cout << "Student number: " << studentNum << endl;
	cout << "Current GPA: " << currentGPA << endl;
	cout << endl;
	cout << endl;
}

int main()
{
	// Create the student objects
	Student student1;
	Student student2("Dean Hartfield", "555-123-4567", 34, 3.95);
	Student student3("John Doe", "555-987-6543", 55, 3.45);

	// Display the values
	student1.displayValues();
	student2.displayValues();
	student3.displayValues();

	system("pause");
	return 0;
}
