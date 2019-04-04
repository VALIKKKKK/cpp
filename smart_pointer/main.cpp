#include <iostream>

struct Test
{
    int value;
    int value1;

    Test():value(0){std::cout << "Test()" << std::endl;}
    Test(int v):value(v){std::cout << "Test(int v)" << std::endl;}
    Test(int v, int v1):value(10), value1(10){std::cout << "Test(int v, int v1)" << std::endl;}
    Test(const Test& that):value(that.value),value1(that.value1){std::cout << "Test(const Test& that)" << std::endl;}
    ~Test(){std::cout << "~Test()" << std::endl;}
};

template<class T>
struct Auto_ptr
{
    using value_type = T;
    value_type* m_ptr;

    Auto_ptr(T* v = nullptr):m_ptr(v){}

    ~Auto_ptr(){delete m_ptr;}

    value_type& operator*()
    {
        return *m_ptr;
    }

    value_type* operator->()
    {
        return m_ptr;
    }

    void reset(value_type* ptr)
    {
        if(m_ptr != ptr)
        {
            delete m_ptr;
            m_ptr = ptr;
        }
    }

    value_type* release()
    {
        value_type* temp = m_ptr;
        m_ptr = nullptr;
        return temp;
    }

};

int main()
{
    Test a;
    return 0;
}
