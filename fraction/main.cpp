#include <iostream>
#include "fraction.h"
#include "algorithm"
using namespace std;

int main()
{
    Fraction a(3,8);
    Fraction b(4,8);
    Fraction c;
    c = a+b;
    std::cout << c.m_num << "/" << c.m_denum << std::endl;
    return 0;
}
