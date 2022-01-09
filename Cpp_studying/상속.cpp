#include<iostream>
#include"Student.h"
#include"Teacher.h"

using namespace std;

int main() {

	Student std("KIM");
	std.setName("KIM2");
	cout << std.getName() << endl;

	Teacher tch("Dr.K");
	tch.setName("Dr.K2");
	cout << tch.getName() << endl;

	cout << std << endl;
	cout << tch << endl;

	cout << endl;

	std.doNothing();
	tch.doNothing();

	cout << endl;

	std.study();
	tch.teach();

	Person person;
	person.setName("Park");
	person.getName();
	//cout << person <<endl;
	
	return 0;
}