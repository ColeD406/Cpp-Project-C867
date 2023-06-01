#include <iostream>
#include "roster.h"
#include "student.h"

using namespace std;
#include <sstream>  

Roster::Roster(string studentData[], int n) {
    numStudents = n;
    Student** classRosterArray = rosterData(studentData, n);
}

Student::Student() {};

Student** Roster::rosterData(string studentData[], int n) {
    // split up the string by commas
    Student** classRosterArray = new Student*[n];
    for (int i=0; i < n; i++) {
        stringstream stream(studentData[i]);
        // store the 9 values in a new array
        string valuesOfStudentData[9];
        string tempString;
        int count = 0;

        while (getline(stream, tempString, ',')) {
            valuesOfStudentData[count] = tempString;
            count++;
        }

        // new student object
        Student* student = new Student();
        student->setStudentID(valuesOfStudentData[0]);
        student->setFirstName(valuesOfStudentData[1]);
        student->setLastName(valuesOfStudentData[2]);
        student->setEmailAddress(valuesOfStudentData[3]);
        student->setAge(stoi(valuesOfStudentData[4]));
        student->setDaysInCourse(0, stoi(valuesOfStudentData[5]));
        student->setDaysInCourse(1, stoi(valuesOfStudentData[6]));
        student->setDaysInCourse(2, stoi(valuesOfStudentData[7]));
        if (valuesOfStudentData[8] == "SECURITY") {
            student->setDegreeProgram(DegreeProgram::SECURITY);
        } else if (valuesOfStudentData[8] == "NETWORK") {
            student->setDegreeProgram(DegreeProgram::NETWORK);
        } else if (valuesOfStudentData[8] == "SOFTWARE") {
            student->setDegreeProgram(DegreeProgram::SOFTWARE);
        }
        classRosterArray[i] = student;
    }
    return classRosterArray;
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
    // Create a new Student object
    Student* student = new Student();
    student->setStudentID(studentID);
    student->setFirstName(firstName);
    student->setLastName(lastName);
    student->setEmailAddress(emailAddress);
    student->setAge(age);
    student->setDaysInCourse(0, daysInCourse1);
    student->setDaysInCourse(1, daysInCourse2);
    student->setDaysInCourse(2, daysInCourse3);
    student->setDegreeProgram(degreeprogram);

    // Increase the size of the classRosterArray by 1
    Student** newClassRosterArray = new Student*[numStudents + 1];

    // Copy existing students to the new array
    for (int i = 0; i < numStudents; i++) {
        newClassRosterArray[i] = classRosterArray[i];
    }

    // Add the new student to the new array
    newClassRosterArray[numStudents] = student;

    // Delete the old array and update the pointer
    delete[] classRosterArray;
    classRosterArray = newClassRosterArray;

    // Increment the number of students
    numStudents++;
}