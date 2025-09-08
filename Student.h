#pragma once
#include <string>
#include <iostream>
using namespace std;
class Student
{
// data 
private: 
	string studentID; 
	string firstName;
	string lastName; 

// functions 
public: 
	// Set and get functions 
	// student ID
	string getStudentID();
	void setStudentID(string sid);
	
	// first name
	string getFirstName();
	
	void setFirstName(string fn);
	
    // last name
	string getLastName();
	
	void setLastName(string ln);
	void printStudentInfo();
	
};

