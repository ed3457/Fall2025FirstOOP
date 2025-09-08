// Fall2025FirstOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
     //cout << "Hello World!\n";

     Student student1("12212","James","Gordon");// object from class Student
     Student student2;  

     /*student1.setFirstName("Steve");
     student1.setLastName("Jobs");
     student1.setStudentID("123456");*/

    // student1.printStudentInfo();

    // student2.printStudentInfo();

    // cout << student1.getFirstName() << endl;

     const int studentCount = 5;
     Student studentList[studentCount];// array of student objects. 

     string tempid, tempfn, templn;
     for (int i = 0; i < 5; i++)
     {
         cin >> tempid;
         cin >> tempfn;
         cin >> templn;
         /*studentList[i].setStudentID(tempid);
         studentList[i].setFirstName(tempfn);
         studentList[i].setLastName(templn);*/

         studentList[i] = Student(tempid, tempfn, templn);

         studentList[i].printStudentInfo();
     }
}

