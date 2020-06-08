#include <iostream>
#include "schoolboy.h"
#include "student.h"
#include "pupil.h"


void printShoolboy() {
    auto schoolboy = Schoolboy("Fedor", "Ivanov", 15, 9);
    cout << "\nSchoolboy: " << endl;
    cout << "Name: " << schoolboy.getName() << endl;
    cout << "Surname: " << schoolboy.getSurname() << endl;
    cout << "Age: " << schoolboy.getAge() << endl;
    cout << "Form: " << schoolboy.getForm() << endl;
}

void printStudent() {
    auto student = Student("Fedor", "Ivanov", 15, 9);
    cout << "\nStudent: " << endl;
    cout << "Name: " << student.getName() << endl;
    cout << "Surname: " << student.getSurname() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "Course: " << student.getCourse() << endl;
}

void makePupilArr() {
    Pupil* pupils = new Pupil[2];
    
    pupils[0] = Pupil("Dmitry", "Dankov", 20);
    pupils[1] = Pupil("Vladislav", "Pokroev", 20);
    
    cout <<"\nPupils array:" << endl;
    for(size_t i = 0; i < 2; i++) {
        cout << "\nPupil["<< i + 1 << "]:" << endl;
        cout << "Name: " << pupils[i].getName() << endl;
        cout << "Surname: " << pupils[i].getSurname() << endl;
        cout << "Age: " << pupils[i].getAge() << endl;
    }
    
    delete[] pupils;
}

int main() {
    printShoolboy();
    printStudent();
    makePupilArr();
    return 0;
}
