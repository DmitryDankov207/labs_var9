#pragma once
#include<string>
#define NAME_ERROR "Invalid name!"
#define COST_ERROR "Invalid cost!"

using namespace std;

class Product {
    string name;
    double cost;
public:
    Product(string n, double c) {
        setName(n);
        setCost(c);
    }
    
    void setName(string name) {
        this->name = name != "" ? name : throw NAME_ERROR;
    }
    
    void setCost(double cost) {
        this->cost = cost >= 0 ? cost : throw COST_ERROR;
    }
    
    string getName() {
        return name;
    }
    
    double getCost() {
        return cost;
    }
};
