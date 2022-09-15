#include "Roster.h"
#include <iostream>
#include <string>
//implementation file

using namespace D;
using namespace std;


// default constructor
Roster::Roster() {}

// paramatized constructor


// setters
void Roster::parseStudentData(int index, string input) {
	classRosterArray[index] = input;
	cout << "classRosterArray[" << index << "]: " << classRosterArray[index];
	cout << endl;
};

/*void Roster::buildAddressList(int index, const string* input) {
	//cout << "[" << index << "]:" << input << endl;
	pointerToData[index] = *input;
	cout <<"pointer to data: " << pointerToData[index] << endl;

}*/

void Roster::buildAddressList(int index, const string* input) {
	const string* tempAddress = input;
	
	//cout << "pointer to data: " << pointerToData[index] << endl;
}


void Roster::add() {};


// getters

