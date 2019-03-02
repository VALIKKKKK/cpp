#include <iostream>
#include <stdexcept>
using namespace std;
namespace stu
{
    template<typename T>
class vector
{
public:
    using size_type = unsigned int;
    using pointer = int*;
    pointer arr;
    size_type m_capacity = 10;
    size_type m_size = 0;
    vector()
    {
        arr = new T[m_capacity];
    }
    void push_back(T value)
    {
        if (m_size == m_capacity)
        {
            m_resize();
        }
        arr[m_size++]  = value;

    }
    void print_array()

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
    T& at(size_type index)
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
};
};

int main()
{

    stu::vector<int> v;
    v.push_back(5);
    v.push_back(4);
    v.print_array();
    //v.print_array();
    /*v.push_back(99);
    v.push_back(5);
    //v.pop_back();
    v.push_back(10);
    cout << v[1]  << endl;
    v.print_array();






    //int* a = new int [4] {132,123,123,546};
    //int b[4] {1,2,3,4};
    // for (int i  = 0; i < 4; ++i)
    //{
    //    cout << *(b+i)  << endl;
    // }
*/
    return 0;
}
