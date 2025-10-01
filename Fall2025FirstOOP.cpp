// Fall2025FirstOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
     //cout << "Hello World!\n";

     //Student student1("12212","James","Gordon");// object from class Student
     //Student student2;  

     /*student1.setFirstName("Steve");
     student1.setLastName("Jobs");
     student1.setStudentID("123456");*/

    // student1.printStudentInfo();

    // student2.printStudentInfo();

    // cout << student1.getFirstName() << endl;

     //const int studentCount = 5;
     //Student studentList[studentCount];// array of student objects. 

     //string tempid, tempfn, templn;
     //for (int i = 0; i < 5; i++)
     //{
     //    cin >> tempid;
     //    cin >> tempfn;
     //    cin >> templn;
     //    /*studentList[i].setStudentID(tempid);
     //    studentList[i].setFirstName(tempfn);
     //    studentList[i].setLastName(templn);*/

     //    studentList[i] = Student(tempid, tempfn, templn);

     //    studentList[i].printStudentInfo();
     //}

    double* ptr = new double;

    cout << ptr << endl;

    ptr++;
    cout << ptr << endl;




     Student* student1ptr = new Student();

     Student* student2ptr = new Student(); 

     Student* student3ptr = student2ptr; 

     student3ptr->setFirstName("Mary");

     cout << student2ptr->getFirstName() << endl;

     
     student3ptr = NULL; 


     delete student1ptr;// delete the object 
     student1ptr = NULL; 

     int size;

     cin >> size;
     Student studentList[4]; 

    

     Student* studentListPtr = new Student[size];

     studentListPtr[0].setFirstName("Jason");

     delete[] studentListPtr;// delete the array from the heap

     cout << studentListPtr << endl; 
     cout << student1ptr << endl;


     int* array1 = new int[10];

     for (int  i = 0; i < 10; i++)
     {
         cout << array1[i] << endl;
         
         //cout << array1[0] << endl;
         //array1++;
     }


     // deep copy 
     Student* copyOfStudent = new Student();

     string fn = student1ptr->getFirstName();
     copyOfStudent->setFirstName(fn);


     Student* shallowCopy = student1ptr; // shallow copy 


}

