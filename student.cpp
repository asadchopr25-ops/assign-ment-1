#include"student.h"
#include<iostream>
using namespace std;
student::student() {
	// default constructor
	name = "Unknown";
	age = 0;
	gpa = 0.0;
	rollno = "Unknown";
	cout << "\nDefault constructor called\n";
}
//Parameterized constructor
	student::student(string n, string r, int a, float g) {
		name = n;
		rollno = r;
		gpa = g;
		age = a;
		cout << "\nParameterized constructor called\n";
	}
	// Destructor
	student::~student() {
		cout << "\nDestruter has been called for student " << name << endl;
	}
	//set and get and over loading
	void student::setdata(string n, string r, int a, float g)
	{
		name = n;
		rollno = r;
		gpa = g;
		age = a;
	}
	//dsplay 
	void student::display() {
		cout << "\n-----------------------------------" << endl;
		cout << "The Name of the student  " << name << endl;
		cout << "The Age of the student " << age << endl;
		cout << "The RollNo of the student " << rollno << endl;
		cout << "The Calculated GPA  " << gpa << endl;
	}
	// assigning grade
	void student::calculategrade() {
		if (gpa >= 3.5)
			cout << "Grade: A" << endl;
		else  if (gpa >= 3.0)
			cout << "Grade: B" << endl;
		else  if (gpa >= 2.5)
			cout << "Grade: C" << endl;
		else  if (gpa >= 2.2)
			cout << "Grade: D" << endl;
		else
			cout << "Grade: F" << endl;
	}