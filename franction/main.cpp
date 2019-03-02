#include <iostream>

using namespace std;
class Fraction
{
public:
    int m_num = 0;
    int m_denum = 0;
    Fraction()
    {
        cout << "Fraction()" << endl;
    }
    Fraction(int num,int denum): m_num(num),m_denum(denum)
    {
        cout << "Fraction(int num, int denum)" << endl;
        // m_num = num;
        //m_denum = denum;
    }
    Fraction operator/ (Fraction b)
    {
        Fraction result;
        result.m_num = this->m_num * b.m_denum;
        result.m_denum = this->m_denum * b.m_denum;
        cout << "operator/" << endl;
        return result;
    }
    Fraction operator=(Fraction b)
    {
        m_num = b.m_num;
        m_num = b.m_num;
        cout << "operator=" << endl;
        return *this;
    }
    Fraction operator==(Fraction b)
    {
        m_num == b.m_num;
        m_num == b.m_num;
        cout << "operator==" << endl;
        return *this;
    }
};
Fraction operator* (Fraction a, Fraction b)
{
    Fraction result;
    result.m_num = a.m_num * b.m_num;
    result.m_denum = a.m_denum * b.m_denum;
    cout << "operator*" << endl;
    return result;
}

int main()
{
    Fraction x(1,2);
    Fraction y(2,2);
    Fraction z(1,3);
    x = y;
    x = z;
    cout << x.m_num << endl;
    int a1(2);
    int b1{4};
    //Fraction a;
    Fraction a(1,2);
    Fraction b(3,6);
    int c1 = a1 * b1;
    operator*(a,b);
    a.operator/(b);

//    Fraction result = a * b;
    return 0;
}
