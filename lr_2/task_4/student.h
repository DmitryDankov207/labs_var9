#pragma once
#include <string>

using namespace std;

class Student {
protected:
    virtual bool graduated() = 0;
public:
    virtual string getInfo() = 0;
};
