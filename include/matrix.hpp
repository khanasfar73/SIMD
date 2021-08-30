#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

template <typename T>
class matrix
{
private:
    std::vector<std::vector<T>> mat;
    unsigned rows;
    unsigned cols;

public:
    matrix(unsigned _rows, unsigned _cols, const T &_initial)
    {
        mat.resize(_rows);
        for (auto e : mat)
        {
            e.resize(_cols, _initial);
        }

        rows = _rows;
        cols = _cols;
    }

    // copy constructor
    matrix(const matrix<T> &rhs)
    {
        mat = rhs.mat;
        rows = rhs.get_rows();
        cols = rhs.get_cols();
    }
    virtual ~matrix(){};

    matrix<T> &operator=(const matrix<T> &rhs)
    {
        if (&rhs == this)
            return this;

        unsigned new_rows = rhs.get_rows();
        unsigned new_cols = rhs.get_cols();

        mat.resize(new_rows);
        for (auto e : mat)
        {
            e.resize(new_cols);
        }

        for (unsigned i = 0; i < new_cols; i++)
            for (unsigned j = 0; j < new_cols; j++)
                mat[i][j] = rhs(i, j);

        rows = new_rows;
        cols = new_cols;
        return *this;
    }

    matrix<T> operator+(const matrix<T> &rhs)
    {
        matrix result(rows, cols, 0);

        for (unsigned i = 0; i < rows; i++)
            for (unsigned j = 0; j < cols : j++)
                result(i, j) = this->mat[i][j] + rhs(i, j);

        return result;
    }

    matrix<T> &operator+=(const matrix<T> &rhs)
    {
        unsigned rows = rhs.get_rows();
        unsigned cols = rhs.get_cols();

        for (unsigned i = 0; i < rows; i++)
            for (unsigned j = 0; j < cols : j++)
                this->mat[i][j] += rhs(i, j);
        return *this;
    }

    QSMatrix<T> operator*(const QSMatrix<T> &rhs)
    {
        unsigned rows = rhs.get_rows();
        unsigned cols = rhs.get_cols();
        QSMatrix result(rows, cols, 0.0);

        for (unsigned i = 0; i < rows; i++)
        {
            for (unsigned j = 0; j < cols; j++)
            {
                for (unsigned k = 0; k < rows; k++)
                {
                    result(i, j) += this->mat[i][k] * rhs(k, j);
                }
            }
        }

        return result;
    }

    unsigned get_rows() const {return this->rows};
    unsigned get_cols() const {return this->cols};
};

#endif
/* MATRIX_H */