#include "student.h"
using namespace std;
#include <iostream>

Student::Student(const string studentID, const string firstName, const string lastName, const string emailAddress, const int age, const int daysInEachCourse[], const DegreeProgram degreeProgram):
    m_studentID(studentID),
    m_firstName(firstName), 
    m_lastName(lastName), 
    m_emailAddress(emailAddress), 
    m_age(age), 
    m_degreeProgram(degreeProgram),
    m_daysInCourse() {
    for (int i = 0; i < 3; i++) {
        m_daysInCourse[i] = daysInEachCourse[i];
    }
};

string Student::getStudentID() const {
    return m_studentID;
}

string Student::getFirstName() const {
    return m_firstName;
}

string Student::getLastName() const {
    return m_lastName;
}

string Student::getEmailAddress() const {
    return m_emailAddress;
}

int Student::getAge() const {
    return m_age;
}

const int* Student::getDaysInCourse() const {
    return m_daysInCourse;
}

DegreeProgram Student::getDegreeProgram() const {
    return m_degreeProgram;
}

void Student::setStudentID(const string studentID) {
    m_studentID = studentID;
}

void Student::setFirstName(const string firstName) {
    m_firstName = firstName;
}

void Student::setLastName(const string lastName) {
    m_lastName = lastName;
}

void Student::setEmailAddress(const string emailAddress) {
    m_emailAddress = emailAddress;
}

void Student::setAge(const int age) {
    m_age = age;
}

void Student::setDegreeProgram(const DegreeProgram degreeProgram) {
    m_degreeProgram = degreeProgram;
}

void Student::setDaysInCourse(int index, int daysInCourse) {
    m_daysInCourse[index] = daysInCourse;
}

void Student::print() const {
    cout << getStudentID() << "\t";
    cout << "First Name: " << getFirstName() << "\t";
    cout << "Last Name: " << getLastName() << "\t";
    cout << "Email Address: " << getEmailAddress() << "\t";
    cout << "Age: " << getAge() << "\t";
    cout << "daysInCourse: {" << getDaysInCourse()[0] << ", " << getDaysInCourse()[1] << ", " << getDaysInCourse()[2] << "} ";
    cout << "Degree Program: ";
    switch (getDegreeProgram()) {
        case DegreeProgram::SECURITY:
            cout << "SECURITY";
            break;
        case DegreeProgram::NETWORK:
            cout << "NETWORK";
            break;
        case DegreeProgram::SOFTWARE:
            cout << "SOFTWARE";
            break;
    }
    cout << endl;
}
