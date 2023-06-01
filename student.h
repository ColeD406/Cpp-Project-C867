#ifndef STUDENT_H
#define STUDENT_H

using namespace std;
#include <string>
#include "degree.h"

class Student {
    private:
        string m_studentID;
        string m_firstName;
        string m_lastName;
        string m_emailAddress;
        int m_age;
        int m_daysInCourse[3];
        DegreeProgram m_degreeProgram;

    public:
        Student();
        Student(const string studentID, const string firstName, const string lastName, const string emailAddress, const int age, const int daysInCourse[], const DegreeProgram degreeProgram);

        string getStudentID() const;
        string getFirstName() const;
        string getLastName() const;
        string getEmailAddress() const;
        int getAge() const;
        const int* getDaysInCourse() const;
        DegreeProgram getDegreeProgram() const;

        void setStudentID(const string studentID);
        void setFirstName(const string firstName);
        void setLastName(const string lastName);
        void setEmailAddress(const string emailAddress);
        void setAge(const int age);
        void setDegreeProgram(const DegreeProgram degreeProgram);
        void setDaysInCourse(int index, int daysInCourse);
        void print() const;
};

#endif
