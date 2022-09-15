//main program file
#include <iostream>
#include <string>
#include "student.h"
#include "Roster.h"
#include "degree.h"
using namespace S;
using namespace D;
using namespace std;

int main() {
	// the entire student list will be stored
	// in one array of students called classRosterArray
	// "The data should be input as follows:"
	const string studentData[] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,German,Hoyos,ghoyos3@wgu.edu,38,30,35,40,SOFTWARE"
	};

	// get length of array
	int lngth = *(&studentData + 1) - studentData;
	cout << "studentData[] has: " << lngth << " indexes total" << endl << endl;

	// point to each indexes data and address
	const string* pointToStudDataIndex;
	pointToStudDataIndex = studentData;
	for (int n = 0; n < lngth; n++) {
		cout << "data at index:" << "["<< n <<"] " << pointToStudDataIndex[n] << endl;
	}
	cout << endl;
	for (int n = 0; n < lngth; n++) {
		cout << "address at index:" << "[" << n << "] " << &pointToStudDataIndex[n] << endl;
	}
	cout << endl;

	// parse all charectors in array and enclose with []
	for (int n = 0; n < lngth; n++) {
		for (char c : studentData[n]) {
			cout << "[" << c << "]";
		};  cout << endl << endl;
	}
	cout << endl; cout << endl;

	// find all commas in array and enclose with []
	for (int n = 0; n < lngth; n++) {
		for (char c : studentData[n]) {
			if (c == ',') 
				cout << " [" << c << "] ";
			else 
				cout << c;
		};  cout << endl << endl;
	}

	// get address of first index in studentData table
	cout << studentData;
	cout << endl << endl;

	// test student instantiation	
	Student inst_1("A1", "German", "Hoyos",
	"gh@gmail.com","34",DegreeProgram::SOFTWARE);
	inst_1.print();

	// test another student using default constructor
	Student inst_2;
	inst_2.print();

	// test another student and use single call of a setter
	Student inst_3;
	inst_3.set_student_ID("A4");
	inst_3.print();
	cout << endl;

	// test Roster instances / place student data into 
	// "classRosterArray"
	Roster inst_R1;
	for (int n = 0; n < lngth; n++) {
		string tempString = studentData[n];
		inst_R1.parseStudentData(n, tempString);
	}
	cout << endl;

	// pointer to the first address of studentData
	Roster inst_R2;
	const string* tempAddress = &studentData[1];
	cout << tempAddress << endl << endl;

	// build array with pointer to student data
	Roster inst_R3;
	for (int n = 0; n < lngth; n++) {
		const string* tempAddress_2 = &studentData[n];
		//cout << tempAddress_2 << endl;
		inst_R3.buildAddressList(n, tempAddress_2);
	}




	//inst_R1.parseStudentData(*studentData);
	cout << endl << endl;

	

	return 0;
}
