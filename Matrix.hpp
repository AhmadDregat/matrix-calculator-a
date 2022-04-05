#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

namespace zich
{

    class Matrix
    {
    private:
        size_t row, col;
        vector<vector<double>> myMatrix;

    public:
        //  Constructor

        Matrix(vector<double> Matrix, size_t row, size_t col);
        // math operators
        friend Matrix operator+(const Matrix &mat1, const Matrix &mat2);
        friend Matrix operator+(const Matrix &mat1); // unary
        friend void operator+=(const Matrix &mat1, const Matrix &mat2);
        friend Matrix operator+(const Matrix &mat, double scalar);
        friend Matrix operator+(double scalar, const Matrix &mat);
        friend void operator+=(const Matrix &mat, double scalar);
        friend Matrix operator-(const Matrix &mat1, const Matrix &mat2);
        friend Matrix operator-(const Matrix &mat1); // unary
        friend void operator-=(const Matrix &mat1, const Matrix &mat2);
        friend Matrix operator-(double scalar, const Matrix &mat);
        friend Matrix operator-(const Matrix &mat, double scalar);
        friend void operator-=(const Matrix &mat, double scalar);

        // multiplye operator
        friend Matrix operator*(const Matrix &mat1, const Matrix &mat2);
        friend void operator*=(Matrix &mat1, const Matrix &mat2);

        friend Matrix operator*(double scalar, const Matrix &mat);
        friend Matrix operator*(const Matrix &mat, double scalar);
        friend void operator*=(Matrix &mat, int scalar);

        // comprasion operator
        friend bool operator>(const Matrix &mat1, const Matrix &mat2);
        friend bool operator>=(const Matrix &mat1, const Matrix &mat2);
        friend bool operator==(const Matrix &mat1, const Matrix &mat2);
        friend bool operator!=(const Matrix &mat1, const Matrix &mat2);
        friend bool operator<(const Matrix &mat1, const Matrix &mat2);
        friend bool operator<=(const Matrix &mat1, const Matrix &mat2);

        // prefix && postfix
        friend void operator++(Matrix &mat);
        friend void operator--(Matrix &mat);
        // input && output
        friend istream &operator>>(istream &, Matrix &);
        friend ostream &operator<<(ostream &, const Matrix &);
    };
}