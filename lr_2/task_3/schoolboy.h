#pragma once
#include "pupil.h"

class Schoolboy : public Pupil {
    int form;
public:
    Schoolboy(string n, string sn, int a, int f) : 
        Pupil(n, sn, a), form(f)
    {}
    
    int getForm();
};
