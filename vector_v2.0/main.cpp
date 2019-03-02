#include <iostream>
#include <stdexcept>
using namespace std;
template<typename T>
class vector
{
public:
    using value_type = T;
    using size_type = unsigned long long int;
    using difference_type = long long int;
    value_type* arr;
    size_type m_capacity = 10;
    size_type m_size = 0;
    vector();
    //operator=;
/*void assign( size_type count, const T& value );
template< class InputIt >
void assign( InputIt first, InputIt last );
void assign( std::initializer_list<T> ilist );
reference  at( size_type pos );
reference  operator[]( size_type pos );
reference front();
reference back();
T* data() noexcept;
iterator end();
reverse_iterator rbegin();
reverse_iterator rend();
iterator begin();
bool empty() const;
size_type size() const;
size_type max_size() const;
void reserve( size_type new_cap );
size_type capacity() const;
void clear();
iterator insert( iterator pos, const T& value );
iterator erase( iterator pos );
void push_back( const T& value );
template< class... Args >
void emplace_back( Args&&... args );
*/

};
template<typename T>
vector<T>::vector()
{
    arr = new T[m_capacity];
}

void vector<T>::push_back(T value)
{
    if (m_size == m_capacity)
    {
        m_resize();
    }
    arr[m_size++] = value;
}
void vector::print_array()
{
    cout << "print arr : " ;
    for (int i = 0 ; i < m_capacity; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0 ; i < m_size; ++i)
    {
        cout << arr[i] << " ";
    }
}
T& operator[](T index)
{
    return arr[index];
}
T& at(int index)
{
    if (index >= m_size)
    {
        throw std::out_of_range("index >= m_size");
    }
    return arr[index];
}
void pop_back()
{
    --m_size;
}
void m_resize()
{
    T* temp = new T [m_capacity * 2];
    for(int i = 0; i < m_capacity; ++i)
    {
        temp[i] = arr[i];
    }
    delete [] arr;
    arr = temp;
    m_capacity *= 2;
}
};*/
int main()
{
    return 0;
}
