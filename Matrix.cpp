#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Matrix.hpp"

using namespace std;

namespace zich
{

        //  Constructor

        Matrix::Matrix(vector<double> Matrix, size_t row, size_t col) {}

        // math operators
        Matrix operator+(const Matrix &mat1, const Matrix &mat2) { return mat1; }
        Matrix operator+(const Matrix &mat) { return mat; } // unary
        void operator+=(const Matrix &mat1, const Matrix &mat2) {}
        Matrix operator+(const Matrix &mat, double scalar) { return mat; }
        Matrix operator+(double scalar, const Matrix &mat) { return mat; }
        void operator+=(const Matrix &mat, double scalar) {}
        Matrix operator-(const Matrix &mat1, const Matrix &mat2) { return mat1; }
        Matrix operator-(const Matrix &mat) { return mat; } // unary
        void operator-=(const Matrix &mat1, const Matrix &mat2) {}
        Matrix operator-(double scalar, const Matrix &mat) { return mat; }
        Matrix operator-(const Matrix &mat, double scalar) { return mat; }
        void operator-=(const Matrix &mat, double scalar) {}

        // multiplye operator
        Matrix operator*(const Matrix &mat1, const Matrix &mat2) { return mat1; }
        void operator*=(Matrix &mat1, const Matrix &mat2) {}

        Matrix operator*(double scalar, const Matrix &mat) { return mat; }
        Matrix operator*(const Matrix &mat, double scalar) { return mat; }
        void operator*=(Matrix &mat, int scalar) {}

        // comprasion operator
        bool operator>(const Matrix &mat1, const Matrix &mat2) { return true; }
        bool operator>=(const Matrix &mat1, const Matrix &mat2) { return true; }
        bool operator==(const Matrix &mat1, const Matrix &mat2) { return true; }
        bool operator!=(const Matrix &mat1, const Matrix &mat2) { return true; }

        bool operator<(const Matrix &mat1, const Matrix &mat2) { return true; }
        bool operator<=(const Matrix &mat1, const Matrix &mat2) { return true; }
        // prefix && postfix
        void operator++(Matrix &mat) {}
        void operator--(Matrix &mat) {}
        // input && output
        istream &operator>>(istream &in, const Matrix &mat) { return in; }
        ostream &operator<<(ostream &out, const Matrix &mat) { return out; }
}