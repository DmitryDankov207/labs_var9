#pragma once
#include "student.h"

class GradStudent : public Student {
    string fio;
    int entryDate;
    int gradeDate;
protected:
    bool graduated() {
        return true;
    }
public:
    GradStudent(string init, int entr, int g) :
        fio(init), entryDate(entr), gradeDate(g)
    { }
    
    string getInfo() {
        return "\nStudent: \n" + fio + 
            "\nEntry Date: " + to_string(entryDate) +
            "\nGraduated: " + (graduated() ? to_string(gradeDate) : "no");
    }
};
