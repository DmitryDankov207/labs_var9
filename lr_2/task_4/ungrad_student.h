#pragma once
#include "student.h"


class UngradStudent : public Student {
    string fio;
    int entryDate;
    int course;
protected:
    bool graduated() {
        return false;
    }
public:
    UngradStudent(string init, int entr, int c) :
        fio(init), entryDate(entr), course(c)
    { }
    
    string getInfo() {
        return "\nStudent: \n" + fio + 
            "\nEntry Date: " + to_string(entryDate) + 
            "\nCourse: " + to_string(course) +
            "\nGraduated: " + (graduated() ? "yes" : "no");
    }
};
