/*
* Name: Michelle Zhang
* Student ID: 2380210
* Chapman Email: mizhang@chapman.edu
* Course: CPSC 350-01
* Assignment: Assignment 6 - Building a Database with Binary Search Trees

* This is the header file for the Faculty Class.
* This class inherits from Person Class.
*/

#ifndef FACULTY_H // header guard
#define FACULTY_H

#include "Person.h"
#include "FacultyRecords.h"

class Faculty : public Person {
    public:
        Faculty(); // default constructor
        Faculty(int i, string n, string l, string d); // overloaded constructor
        ~Faculty(); // destructor

        // accessors
        string getDepartment();
        vector<int> getAdviseesIDs();

        // mutators
        void setDepartment(string d);
        void setAdviseesIDs(vector<int> *sid);

        // functions
        string getFacultyInfo();
        string getStringAdviseesIDs();
        void addAdvisee(int id);
        void removeAdvisee(int id);
        friend ostream& operator << (ostream &os, const Faculty &f);

    private:
        string department;
        vector<int> *studentIDs;
        FacultyRecords *fr;
};

#endif