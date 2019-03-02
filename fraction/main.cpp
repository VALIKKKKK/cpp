#include <iostream>
#include "fraction.h"
#include "algorithm"
using namespace std;

int main()
{
    Fraction a(1,10);
    Fraction b(1,4);
    Fraction c;
    c = a-b;
    std::cout << c.m_num << "/" << c.m_denum << std::endl;
    return 0;
}
