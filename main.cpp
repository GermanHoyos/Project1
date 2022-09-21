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
	};

	Roster roster;

	for (int i = 0; i < 5; i++) { roster.parse(studentData[i]); }

	//roster.remove("A2");
	//roster.printAll();
	//roster.printAverageDaysInCourse("A1");
	//roster.printInvalidEmails();
	//roster.printByDegreeProgram(SOFTWARE);
	return 0;
}
