#include <iostream>
#include <string>
#include "student.h"
#include "Roster.h"
#include "degree.h"
using namespace S;
using namespace D;
using namespace std;

int main() {
	const string studentData[5] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,German,Hoyos,ghoyos3@wgu.edu,38,30,35,40,SOFTWARE"
	};  //Main::parse -> Roster::add -> Student::print

	//1
	cout << "C867 " << "C++ " << "ID: 010096988 " << "German Hoyos " << endl << endl;

	//2
	Roster classRoster;

	//3
	for (int i = 0; i < 5; i++) { classRoster.parse(studentData[i]); };

	//4
	classRoster.printAll();  cout << endl;

	//4a
	classRoster.printInvalidEmails();  cout << endl;
	
	//4b
	for (int i = 0; i < 5; i++) {
		classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getter_ID());
	}; cout << endl;

	//4c
	classRoster.printByDegreeProgram(SOFTWARE);

	//4d
	classRoster.remove("A3"); cout << endl;

	//4e
	classRoster.printAll();  cout << endl;

	//4f
	classRoster.remove("A3"); cout << endl;
	
	//5
	//Method is called implicitly

	return 0;
}
/*
*  WGU "REQUIREMENTS"
* 
1 - print course info

2 - instantiate classRoster

3 - add student objects

4 - printAll

	4a - print invalid emails

	4b - loop and print avg days in course (show id)

	4c - classRoster.printByDegreeProgram(SOFTWARE);

	4d - classRoster.remove("A3");

	4e - classRoster.printAll();

	4f - classRoster.remove("A3"); (show id wasnt found)

5 - build destructor method for Roster

*/