#include <iostream>
#include "algorithms.h"

template<typename T>
struct Matrix
{
    T** m_array;
    T m_colum;
    T m_row;
    Matrix(T colum, T row);
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    T find_det(Matrix that, T m_size, T i = 0, T j = 0)
    {
        T result = 0;
        if(m_size == 1)
        {
            //  return that.m_array[0][0];
        }
        else
        {
            if(m_size == 2)
            {
                result = that.m_array[0][0] * that.m_array[1][1] - that.m_array[0][1] * that.m_array[1][0];
                //return result;
            }
            else
            {
                Matrix n(m_size - 1, m_size - 1);
                n = 0;
                T a = 0;
                T b = 0;
                for(T i = 0; i < m_size; i++)
                {
                    for(T j = 0; j < m_size; j++)
                    {
                        if(i != 0 && j != 0)
                        {
                            n.m_array[a][b] = that.m_array[i][j];
                            stu::check_true(b, a, m_size);
                            std::cout <<"a";
                        }
                    }
                }
               // result += stu::pow(-1, i + j + 2) * that.m_array[i][j];
               // result *= n.find_det(n, m_size - 1);
            }
        }
        return result;
    }
    Matrix operator*(const Matrix that);
    Matrix operator-(const Matrix that);
    Matrix operator+(const Matrix that);
    Matrix algebroic_add(T d_colum, T d_row);
    Matrix() = default;
    void pull_matrix();
    void print_matrix();
    void operator=(T value);
    void operator+(T value);
    void operator-(T value);
    void operator*(T value);
    void operator/(T value);
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    ~Matrix()
    {
        for(T i = 0; i < m_colum; ++i)
        {
            delete m_array[i];
        }
        delete[] m_array;
    }
};
template<typename T>
Matrix<T> Matrix<T>::algebroic_add(T d_colum, T d_row)
{
    Matrix result(m_row - 1, m_colum - 1);
    int c = 0;
    int r = 0;
    for(T i = 0; i != m_row; i++)
    {
        for(T j = 0; j != m_colum; j++)
        {
            if(c > m_colum - 2)
            {
                c = 0;
                r++;
            }
            if(i != d_row && j != d_colum)
            {
                result.m_array[r][c] = m_array[i][j];
                c++;
            }
        }
    }
    result * stu::pow(-1, d_colum + d_row);
    return result;
}

template<typename T>
Matrix<T> Matrix<T>::operator*(const Matrix<T> that)
{
    stu::check_consistency(m_colum, that.m_row);
    stu::check_consistency(that.m_colum, m_row);
    Matrix<T> result(that.m_colum, m_row);
    result = 0;
    for (T i = 0; i != m_row; i++)
    {
        for (T j = 0; j != that.m_colum; j++)
        {
            for (T k = 0; k != that.m_row; k++)
            {
                result.m_array[i][j] += m_array[i][k] * that.m_array[k][j];
            }
        }
    }
    return result;
}


template<typename T>
Matrix<T> Matrix<T>::operator+(const Matrix<T> that)
{
    stu::check_consistency(m_colum, that.m_colum);
    stu::check_consistency(that.m_row, m_row);
    Matrix<T> result(that.m_colum, m_row);
    for (T i = 0; i != m_row; i++)
    {
        for (T j = 0; j != m_colum; j++)
        {
            result.m_array[i][j] = m_array[i][j] + that.m_array[i][j];
        }
    }
    return result;
}

template<typename T>
Matrix<T> Matrix<T>::operator-(const Matrix<T> that)
{
    stu::check_consistency(m_colum, that.m_colum);
    stu::check_consistency(that.m_row, m_row);
    Matrix<T> result(that.m_colum, m_row);
    for (T i = 0; i != m_row; i++)
    {
        for (T j = 0; j != m_colum; j++)
        {
            result.m_array[i][j] = m_array[i][j] - that.m_array[i][j];
        }
    }
    return result;
}

template<typename T>
Matrix<T>::Matrix(T colum, T row): m_colum(colum), m_row(row)
{
    m_array = new T*[m_row];
    for(T i = 0; i != m_row; ++i)
    {
        m_array[i] = new int[m_colum];
    }
}

template<typename T>
void Matrix<T>::pull_matrix()
{
    T temp;
    for(T i = 0; i != m_row; ++i)
    {
        for(T j = 0; j != m_colum; ++j)
        {
            std::cin >> temp;
            m_array[i][j] = temp;
        }
    }
}

template<typename T>
void Matrix<T>::print_matrix()
{
    for(T i = 0; i != m_row; i++)
    {
        for(T j = 0; j != m_colum; j++)
        {
            std::cout << m_array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

template<typename T>
void Matrix<T>::operator=(T value)
{
    for(T i = 0; i != m_row; i++)
    {
        for(T j = 0; j != m_colum; j++)
        {
            m_array[i][j] = value;
        }
    }
}
template<typename T>
void Matrix<T>::operator+(T value)
{
    for(T i = 0; i != m_row; i++)
    {
        for(T j = 0; j != m_colum; j++)
        {
            m_array[i][j] += value;
        }
    }
}
template<typename T>
void Matrix<T>::operator-(T value)
{
    for(T i = 0; i != m_row; i++)
    {
        for(T j = 0; j != m_colum; j++)
        {
            m_array[i][j] -= value;
        }
    }
}
template<typename T>
void Matrix<T>::operator*(T value)
{
    for(T i = 0; i != m_row; i++)
    {
        for(T j = 0; j != m_colum; j++)
        {
            m_array[i][j] *= value;
        }
    }
}
template<typename T>
void Matrix<T>::operator/(T value)
{
    for(T i = 0; i != m_row; i++)
    {
        for(T j = 0; j != m_colum; j++)
        {
            m_array[i][j] /= value;
        }
    }
}








int main()
{
    Matrix<int> a(3, 3);
    a.pull_matrix();
    a.print_matrix();
    std::cout << std::endl;
    int temp = a.find_det(a, 3);
    std::cout << temp;



    return 0;
}
