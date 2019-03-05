#include <iostream>

struct Fraction
{
    int m_num;
    int m_denum;
    Fraction():m_num(0), m_denum(1){}
    Fraction(int num, int denum):m_num(num), m_denum(denum){}
    operator bool()
    {
        std::cout << "operator bool" << std::endl;
        return m_num != 0;
    }
};


int main()
{
    Fraction a(1,2);
    Fraction b;
    if(b)
    {
        std::cout << "Heloo";
    }
    bool result = (bool)a;
    return 0;
}
