// Fall2025FirstOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
     //cout << "Hello World!\n";

     Student student1;// object from class Student
     Student student2;  

     student1.setFirstName("Steve");
     student1.setLastName("Jobs");
     student1.setStudentID("123456");

     student1.printStudentInfo();

    // cout << student1.getFirstName() << endl;
}

