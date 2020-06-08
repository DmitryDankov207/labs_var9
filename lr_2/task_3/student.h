#pragma once
#include "pupil.h"

class Student : public Pupil {
    int course;
public:
    Student(string n, string sn, int a, int c) : 
        Pupil(n, sn, a), course(c)
    {}

    int getCourse();
};
