#include <iostream>
#include "string.h"


const String operator+(const String& left, const String& right) {
    return String(left.value + right.value);
}

int main() {
    auto v = String("3");
    auto c = String("4");
    auto g = v + c;
    cout << g.value;
};
