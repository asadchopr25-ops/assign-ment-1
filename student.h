#pragma once
#include<iostream>
#include <string>
using namespace std;
class student {
private:
	string name,rollno;
	int age;
	float gpa;
public:
	//constructor declare
	student();//default constructor
	student(string n, string r, int a, float g);//parametrized constructor
	~student();//destructor
	//set or Get data 
	void setdata(string n, string r, int a, float g);
	//display data or calculate grade
	void display();
	void calculategrade();
};