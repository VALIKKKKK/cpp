#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
template<class T>
struct Vector
{
    T* m_arr;
    unsigned int size;
    unsigned int capacity;
    Vector()
    {
        size = 0;
        capacity = 200;
        m_arr = new T[capacity];

    }
    void push_back(T value)
    {
        m_arr[size++] = value;

    }
    void pop_back(T value)
    {
        m_arr[size--] = value;
    }
    T& operator[](int index)
    {
        return m_arr[index];
    }
};
#endif // VECTOR_H_INCLUDED
