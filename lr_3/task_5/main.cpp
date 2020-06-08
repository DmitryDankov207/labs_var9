#include<iostream>
#include"matrix.h"

using namespace std;


template<typename T>
const Matrix<T> operator + (
    const Matrix<T>& left, 
    const Matrix<T>& right
) {
    T **data;
    size_t rows = CMP(left.rows, right.rows);
    size_t columns = CMP(left.columns, right.columns);
    data = new T*[rows]; 
    for(size_t i = 0; i < rows; i++) {
        data[i] = new T[columns];
        for(size_t j = 0; j < columns; j++) {
            if(left.rows <= i || left.columns <= j)
                data[i][j] = right.data[i][j];
            else if(left.rows <= i || left.columns <= j)
                data[i][j] = right.data[i][j];
            else
                data[i][j] = left.data[i][j] + right.data[i][j];
        }
    }
    return Matrix<T>(columns, rows, data);
}

template<typename T>
bool operator < (
    const Matrix<T>& left, 
    const Matrix<T>& right
) {
    for(size_t i = 0; i < left.rows; i++) {
        for(size_t j = 0; j < left.columns; j++) {
            if(left.data[i][j] >= right.data[i][j])
                return false;
        }
    }
    return true;
}

int main() {
    int **arr;
    arr = new int*[3];
    for(int i = 0; i < 3; i++) {
        arr[i] = new int[3];
        for(int j = 0; j < 3; j++)
            arr[i][j] = (i+1) * (j+1);
    }
    Matrix<int> mat(3, 3, arr);
    
    int** arr2;
    arr2 = new int*[3];
    for(int i = 0; i < 3; i++) {
        arr2[i] = new int[3];
        for(int j = 0; j < 3; j++)
            arr2[i][j] = (i+1) * (j+1) * 2;
    }
    Matrix<int> mat1(3, 3, arr2);
    
    cout << mat.data[0][1] << endl;
    cout << mat1.data[0][1] << endl;
    cout << (mat < mat1) << endl;
    cout << (mat + mat1).data[2][2] << endl;
    cout << "avg(mat): " << mat.avg() << endl;
    cout << "max(mat): " << mat.max() << endl;
    return 0;
}
