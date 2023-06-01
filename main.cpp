#include <iostream>
using namespace std;
#include <string>
#include "student.h"
#include "roster.h"
#include "degree.h"


int main() {
    cout << "Scripting and Programming: Applications (C867)" << endl;
    string studentData[] = {
    "A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Cole,Doty,cdoty12@wgu.edu,25,24,50,38,SOFTWARE"
    };
    int numStudents = sizeof(studentData) / sizeof(studentData[0]);
    Roster roster(studentData, numStudents);
    roster.add("A6", "Craig", "Miller", "craigmiller@msn.com", 30, 20, 30, 40, DegreeProgram::SOFTWARE);

    return 0;
}
