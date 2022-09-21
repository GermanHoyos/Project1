#include "Roster.h"
#include <iostream>
#include <string>

using namespace D;
using namespace std;

void Roster::parse(string currentRow) {

	int spaces = currentRow.find(',');
	string student_ID = currentRow.substr(0, spaces);

	int startPos = spaces + 1;
	spaces = currentRow.find(',', startPos);
	string first_name = currentRow.substr(startPos, spaces - startPos);

	startPos = spaces + 1;
	spaces = currentRow.find(',', startPos);
	string last_name = currentRow.substr(startPos, spaces - startPos);

	startPos = spaces + 1;
	spaces = currentRow.find(',', startPos);
	string email = currentRow.substr(startPos, spaces - startPos);

	startPos = spaces + 1;
	spaces = currentRow.find(',', startPos);
	int age = stoi(currentRow.substr(startPos, spaces - startPos));

	for (int i = 0; i < 3; i++) {
		startPos = spaces + 1;
		spaces = currentRow.find(',', startPos);
		dArr[i] = stoi(currentRow.substr(startPos, spaces - startPos));
	}   
	
	int days_0 = dArr[0], days_1 = dArr[1], days_2 = dArr[2];

	startPos = spaces + 1;
	spaces = currentRow.find(',', startPos);
	string degreeStr = currentRow.substr(startPos, spaces - startPos);

	DegreeProgram degree = DegreeProgram::NETWORK;
	if (degreeStr == "SECURITY") { degree = DegreeProgram::SECURITY; };
	if (degreeStr == "NETWORK") { degree = DegreeProgram::NETWORK; };
	if (degreeStr == "SOFTWARE") { degree = DegreeProgram::SOFTWARE; };

	add(student_ID, first_name, last_name, email, age, days_0, days_1, days_2, degree);
};

void Roster::add(
	string student_ID, string first_name, string last_name,
	string email, int age, int day_0, int day_1, int day_2, 
	DegreeProgram degree
) {
	int days[3] = { day_0, day_1, day_2 };
	classRosterArray[++indexPosition] = new Student(student_ID, first_name, last_name, email, age, days, degree);
}

void Roster::remove(string student_ID) {
	bool found = false;
	for (int i = 0; i < 5; i++) {
		if (student_ID == Roster::classRosterArray[i]->getter_ID()) {
			found = true;
			Roster::classRosterArray[i]->setter_ID("[Removed]");
			Roster::classRosterArray[i]->setter_first_name("[Removed]");
			Roster::classRosterArray[i]->setter_last_name("[Removed]");
			Roster::classRosterArray[i]->setter_email("[Removed]");
			Roster::classRosterArray[i]->setter_age(0);
			int days[3] = { 0,0,0 }; 
			Roster::classRosterArray[i]->setter_days(days);
			DegreeProgram degree = DegreeProgram::NETWORK;
			Roster::classRosterArray[i]->setter_degree_program(degree);
		};
		Roster::classRosterArray[i]->print();
	}
	if (found == false) {
		cout << "Student not found.";
	};
}

void Roster::printAll() {
	for (int i = 0; i < 5; i++) {
		Roster::classRosterArray[i]->print();
	}
}

void Roster::printAverageDaysInCourse(string student_ID) {
	for (int i = 0; i < 5; i++) {
		if (student_ID == Roster::classRosterArray[i]->getter_ID()) {
			cout << Roster::classRosterArray[i]->getter_ID() << " ";
			for (int x = 0; x < 3; x++) { 
				cout << Roster::classRosterArray[i]->getter_days()[x] << " "; 
			};
		}
	}
}

void Roster::printInvalidEmails() {
	bool valid = false;
	string emailScan;
	for (int i = 0; i < 5; i++) {
		emailScan = Roster::classRosterArray[i]->getter_email();
		char ampersand = '@';
		char period = '.';
		char space = ' ';
		cout << emailScan;
		if (	emailScan.find(ampersand) != string::npos &&
				emailScan.find(period) != string::npos &&
				emailScan.find(space) == string::npos
		) {
				cout << ": valid";
		}
		else {
				cout << ": invalid";
		};		cout << endl;
	}	
}

void Roster::printByDegreeProgram(DegreeProgram degree) {
	if (degree == 0) {
		for (int i = 0; i < 5; i++) {
			if (Roster::classRosterArray[i]->getter_degree_program() == "SECURITY") {
				cout << Roster::classRosterArray[i]->getter_ID() << " ";
				cout << Roster::classRosterArray[i]->getter_degree_program() << endl;
			}	
		}		
	}
	if (degree == 1) {
		for (int i = 0; i < 5; i++) {
			if (Roster::classRosterArray[i]->getter_degree_program() == "NETWORK") {
				cout << Roster::classRosterArray[i]->getter_ID() << " ";
				cout << Roster::classRosterArray[i]->getter_degree_program() << endl;
			}
		}
	}
	if (degree == 2) {
		for (int i = 0; i < 5; i++) {
			if (Roster::classRosterArray[i]->getter_degree_program() == "SOFTWARE") {
				cout << Roster::classRosterArray[i]->getter_ID() << " ";
				cout << Roster::classRosterArray[i]->getter_degree_program() << endl;
			}
		}
	}
}

Roster::~Roster() {};
