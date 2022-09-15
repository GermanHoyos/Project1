#pragma once
#include <iostream>
#include <string>
#include "degree.h"
using namespace std;
//Do not put using statements in your header files

namespace D
{
	

	class Roster
	{
		private:
			string str_student_data;
			string classRosterArray[5]; // test
			string pointerToData[5];    // test

		public:
			void parseStudentData(int index, string input);
			void buildAddressList(int index, const string* input);
			void add(); 
			void remove();
			void printAll();
			void printAverageDaysInCourse();
			void printInvalidEmails();
			void printByDegreeProgram();
			
			// default constructor 
			Roster();
	};
}

