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
			string email_address;
			string age;
			int days_in_course[3]; // Each Course: [10,4,22]
			DegreeProgram degree_program; 
		
		public:
			void set_student_ID(string student_ID);
			void set_first_name(string first_name);
			void set_last_name(string last_name);
			void set_email_address(string email_address);
			void set_age(string age);
			// Each Course: [10,4,22]
			void set_degree_program(DegreeProgram degree_program); 
			
			string get_student_ID() const;
			string get_first_name() const;
			string get_last_name() const;
			string get_email_address() const;
			string get_age() const;
			// Each Course: [10,4,22]
			DegreeProgram get_degree_program() const; 
		
			// inline function to print all instance variables
			void print();
		
			// default constructor
			Student();
			
			// constructor fully paramatized
			Student(string student_ID, string first_name,
					string last_name, string email_address,
					string age, /*// Each Course: [10,4,22],*/ 
					DegreeProgram degree_program);
			
			// destructor
			//~Student();
	};
}

	
























































/*
	class student
	{
	// public, private or protected
	// public member function prototypes
	public:
		// mutator setter
		void studentID(string inpID);
		// accessor getter
		void print();
		// inline function defined and implemented from within class
		void do_something() {
			cout << "inline function called" << endl;
		};
		// mutator setter
		void setFirstName(string inpFirstName);
		// accessor getter
		string GetFirstName() const;

	// private data member only accessible from
	// public member functions
	// in .js variables are usualy declared first
	private:
		string student_ID;
		string first_name;
		string last_name;
		string email_address;
		string age;
		//int array[]
		string degree_program;
	};

*/