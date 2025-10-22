#include<iostream>
#include"student.h"
using namespace std;
int main() {
	cout << "----------------------------------" << endl;
	cout << "****Student Information System****" << endl;
	cout << "----------------------------------" << endl;
	student s1;
	//default constructor when values is not assigned
	s1.display();
	s1.calculategrade();
	//when we assigned values
	student s2("Asad", "L1F24BSDS0064", 21, 3.6);
	s2.display();
	s2.calculategrade();
	//when we assigned values 
	student s3("Bilal", "L1F24BSDS0100", 23, 3.0);
	s3.display();
	s3.calculategrade();
	//default constructor when value is assigned
	student s4;
	s4.setdata("Atir", "L1F24BSDS0063", 18, 3.7);
	s4.display();
	s4.calculategrade();
	cout << "----------------------------------" << endl;
	cout << "**********End Of Program**********" << endl;
	cout << "----------------------------------" << endl;
	return 0;
}