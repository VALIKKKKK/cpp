#include <iostream>
#include <stdexcept>
template<class T>
struct vector
{
    using value_type = T;
    using size_type = unsigned long long int;
    using difference_type = long long int;
    using reference = T&;
    value_type* arr;
    size_type m_capacity = 10;
    size_type m_size = 0;
    vector();
    void push_back(T value);
    void pop_back();
    T& operator[](size_type index);
    T& at(size_type index);
    void m_resize();

};
template<typename T>
vector<T>::vector()
{
    arr = new T[m_capacity];
}
template<typename T>
void vector<T>::push_back(T value)
{
    if (m_size == m_capacity)
    {
        m_resize();
    }
    arr[m_size++] = value;
}
template<typename T>
void vector<T>::pop_back()
{
    --m_size;
}
template<typename T>
T& vector<T>::operator[](typename vector<T>::size_type index)
{
    return arr[index];
}
template<typename T>
T& vector<T>::at(typename vector<T>::size_type index)
{
    if (index >= m_size)
    {
        throw std::out_of_range("index >= m_size");
    }
    return arr[index];
}
template<typename T>
void vector<T>::m_resize()
{
    T* temp = new value_type [m_capacity * 2];
    for(int i = 0; i < m_capacity; ++i)
    {
        temp[i] = arr[i];
    }
    delete [] arr;
    arr = temp;
    m_capacity *= 2;
}

int main()
{
    //std::cout << "Hello world!" << std::endl;
    return 0;
}
