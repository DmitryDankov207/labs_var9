#include <iostream>
#include "grad_student.h"
#include "ungrad_student.h"


int main() {
    auto gr_st = GradStudent("Evgeniy Koslov", 2017, 2021);
    cout << gr_st.getInfo() << endl;
    auto ungr_st = UngradStudent("Evgeniy Koslov", 2017, 4);
    cout << ungr_st.getInfo() << endl;
}
