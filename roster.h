#ifndef ROSTER_H
#define ROSTER_H
using namespace std;

#include "student.h"

class Roster
{
private:
    int numStudents;
    Student** classRosterArray;
    Student** rosterData(string studentData[], int n);

public:
    Roster(string studentData[], int n);
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
};

#endif