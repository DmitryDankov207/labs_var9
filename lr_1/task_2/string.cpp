#include "string.h"

String& String::operator=(const String& right) {
        //проверка на самоприсваивание
        if (this == &right) {
            return *this;
        }
        value = right.value;
        return *this;
}
