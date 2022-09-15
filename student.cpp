//public member function definitions and implementations
#include "student.h"
#include <iostream>
#include <string>
#include "degree.h"
using namespace S;
using namespace std;

// default constructor
Student::Student() 
{
	student_ID =	 "blank";
	first_name =	 "blank";
	last_name =		 "blank";
	email_address =  "blank";
	age =			 "blank";
	// Each Course: [10,4,22]
	degree_program = DegreeProgram::SECURITY;
}

// constructor fully paramatized
Student::Student(string student_ID, string first_name, string last_name,
				 string email_address, string age, // Each Course: [10,4,22]
				 DegreeProgram degree_program)
{
	this-> student_ID =		student_ID;
	this-> first_name =		first_name;
	this-> last_name =		last_name;
	this-> email_address =  email_address;
	this-> age =			age;
	// Each Course: [10,4,22]
	this-> degree_program = degree_program;
}

// destructor of class
// ~Student();

// setters
void Student::set_student_ID(string student_ID)					{ this->student_ID = student_ID; }
void Student::set_first_name(string first_name)					{ this->first_name = first_name; }
void Student::set_last_name(string last_name)					{ this->last_name = last_name; }
void Student::set_email_address(string email_address)			{ this->email_address = email_address; }
void Student::set_age(string age)								{ this->age = age; }
// Each Course: [10,4,22]
void Student::set_degree_program(DegreeProgram degree_program)	{ this->degree_program = degree_program; } 

// getters 
string Student::get_student_ID() const				{ return student_ID; }
string Student::get_first_name() const				{ return first_name; }
string Student::get_last_name() const				{ return last_name; }
string Student::get_email_address() const			{ return email_address; }
string Student::get_age() const						{ return age; }
// Each Course: [10,4,22]
DegreeProgram Student::get_degree_program() const	{ return degree_program; } 

// getter prints "specific student data"
void Student::print() { 
	cout << get_student_ID() << endl; 
	cout << get_first_name() << endl;
	cout << get_last_name() << endl;
	cout << get_email_address() << endl;
	cout << get_age() << endl;
	// Each Course: [10,4,22]
	cout << DegreeProgram_String_Array[get_degree_program()] << endl;
}






































































//void Student::print() { cout << //some data; }

/*
void student::studentID(string inpID) {
	student_ID = inpID;
}

void student::print() {
	cout << "Student ID is: " << student_ID << endl;
}

void student::setFirstName(string inpFirstName) {
	first_name = inpFirstName;
}


*/


















