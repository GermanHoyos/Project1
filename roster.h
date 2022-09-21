#pragma once
#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"

using namespace std;
using namespace S;

namespace D
{
	class Roster {
		public:
			int dArr[3];
			int indexPosition = -1;
			Student* classRosterArray[5];
		public:
			void parse(	string currentRow );
			void add(	string student_ID,
						string first_name,	
						string last_name,
						string email,
						int age,
						int day_1,
						int day_2,
						int day_3,
						DegreeProgram degree
			);
			void remove(string student_ID);
			void printAll();
			void printAverageDaysInCourse(string student_ID);
			void printInvalidEmails();
			void printByDegreeProgram(DegreeProgram degree);
			~Roster();
	};
}

