#include "Student.h"

string Student::getStudentID()
{
	return studentID;
}

void Student::setStudentID(string sid)
{   // TODO: add validation later 
	studentID = sid;

}

string Student::getFirstName()
{
	return firstName;
}

void Student::setFirstName(string fn)
{
	firstName = fn;
}

string Student::getLastName()
{
	return lastName;
}

void Student::setLastName(string ln)
{
	lastName = ln;
}

void Student::printStudentInfo()
{
	cout << getFirstName() << endl;
	cout << getLastName() << endl;
	cout << getStudentID() << endl;

}
