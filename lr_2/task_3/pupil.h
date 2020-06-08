#pragma once
#include <string>

using namespace std;

class Pupil
{
    string name;
    string surname;
    int age;

public:
    Pupil() {}
    
    Pupil(string n, string sn, int a): 
        name(n), surname(sn), age(a) 
    {}
    
    string getName();
    
    string getSurname();
    
    int getAge();
};
