#include "student.h"
#include <iostream>
#include <string>
#include "degree.h"

using namespace S;
using namespace std;

Student::Student() {
	this->student_ID = "Default";
	this->first_name = "Default";
	this->last_name = "Default";
	this->email = "Default";
	this->age = 1;
	for (int i = 0; i < 3; i++) {
		this->days[i] = 0;
	}
	this->degree = DegreeProgram::SOFTWARE;
}

Student::Student(string student_ID,
	string first_name,
	string last_name,
	string email,
	int age,
	int days[],
	DegreeProgram degree
) {
	this->student_ID = student_ID;
	this->first_name = first_name;
	this->last_name = last_name;
	this->email = email;
	this->age = age;
	for (int i = 0; i < 3; i++) {
		this->days[i] = days[i];
	}
	this->degree = degree;
};

void Student::setter_ID(string student_ID) { this->student_ID = student_ID; };
void Student::setter_first_name(string first_name) { this->first_name = first_name; };
void Student::setter_last_name(string last_name) { this->last_name = last_name; };
void Student::setter_email(string email) { this->email = email; };
void Student::setter_age(int age) { this->age = age; };
void Student::setter_days(int days[]) { 
	for (int i = 0; i < 3; i++) { this->days[i] = days[i]; };
};
void Student::setter_degree_program(DegreeProgram degree) { this->degree = degree; };

string Student::getter_ID() { return this->student_ID; };
string Student::getter_first_name() { return this->first_name; };
string Student::getter_last_name() { return this->last_name; };
string Student::getter_email() { return this->email; };
int Student::getter_age() { return this->age; };
int* Student::getter_days() { return this->days; };
string Student::getter_degree_program() { 
	if (this->degree == 0) { return "SECURITY"; };
	if (this->degree == 1) { return "NETWORK"; };
	if (this->degree == 2) { return "SOFTWARE"; };
};

Student::~Student() {};

//use getters and setters after written
void Student::print() {
	cout << getter_ID() << "\t"
		<< getter_first_name() << "\t"
		<< getter_last_name() << "\t"
		<< getter_email() << "\t"
		<< getter_age() << "\t"
		<< getter_days()[0] << "\t"
		<< getter_days()[1] << "\t"
		<< getter_days()[2] << "\t"
		<< getter_degree_program() << endl ;
};



