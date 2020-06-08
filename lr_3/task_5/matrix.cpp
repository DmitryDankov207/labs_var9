#include "matrix.h"

template <typename T> T Matrix<T>::max() {
    if(columns <= 0 || rows <= 0)
        perror("invalid data!");
    T max = data[0][0];
    for(size_t i = 0; i < rows; i++) {
        for(size_t j = 0; j < columns; j ++) {
            if(max < data[i][j]) max = data[i][j];
        }
    }
    return max;
}


template <typename T> T Matrix<T>::avg() {
    T sum = 0;
    for(size_t i = 0; i < rows; i++) {
        for(size_t j = 0; j < columns; j ++) {
            sum += data[i][j];
        }
    }
    return sum / (double)(rows*columns);
}

