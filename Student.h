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
	string getStudentID()
	{
		return studentID;
	}

	void setStudentID(string sid)
	{   // TODO: add validation later 
		studentID = sid; 
	
	}
	// first name
	string getFirstName()
	{
		return firstName;
	}
	void setFirstName(string fn)
	{
		firstName = fn;
	}
    // last name
	string getLastName()
	{
		return lastName;
	}
	void setLastName(string ln)
	{
		lastName = ln;
	}

	void printStudentInfo()
	{
		cout << getFirstName()<<endl;
		cout << getLastName() << endl;
		cout << getStudentID() << endl;

	}
};

