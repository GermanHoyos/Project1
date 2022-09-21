#pragma once
#include <iostream>
#include <string>
#include "degree.h"

using namespace std;

namespace S
{
	class Student {
		private:
			string student_ID;
			string first_name; 
			string last_name; 
			string email; 
			int age;
			int days[3]; 
			DegreeProgram degree;
		public:
			void setter_ID(string student_ID);
			void setter_first_name(string first_name);
			void setter_last_name(string last_name);
			void setter_email(string email);
			void setter_age(int age);
			void setter_days(int days[]);
			void setter_degree_program(DegreeProgram degree);

			string getter_ID();
			string getter_first_name();
			string getter_last_name();
			string getter_email();
			int getter_age();
			int* getter_days();
			string getter_degree_program();

			Student();
			Student(string student_ID,
					string first_name, 
					string last_name,
					string email,		
					int age,        
					int days[],
					DegreeProgram degree
			);
			~Student();
			void print();
	};
}
