#include<iostream>
#define CMP(x,y) x > y ? x : y

using namespace std;

template <typename T>
class Matrix {
public:
    T **data;
    size_t columns;
    size_t rows;
    
    Matrix<T>(int cs, int rs, T** d) :
        columns(cs), rows(rs), data(d) {}
    
    ~Matrix() {
        for(size_t i = 0; i < rows; i++)
            delete[] data[i];
        delete[] data;
    }
    
    T max() {
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
    
    T avg() {
        T sum = 0;
        for(size_t i = 0; i < rows; i++) {
            for(size_t j = 0; j < columns; j ++) {
                sum += data[i][j];
            }
        }
        return sum / (double)(rows*columns);
    }
    
    template<T>
    friend const Matrix<T> operator+(const Matrix<T>&, const Matrix<T>&);

    template<T>
    friend bool operator<(const Matrix<T>&, const Matrix<T>&);
};
