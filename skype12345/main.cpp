#include <iostream>
#include <cstdio>
using namespace std;
using IntegerBinaryOperation = int(*)(int, int );
using DoubleBinaryOperation = double(*)(double, double );

int main()
{
    IntegerBinaryOperation operations [4];
    operations[0] = [] (int a, int b)
    {
        return a+b;
    };
     operations[1] = [] (int a, int b)
    {
        return a-b;
    };
     operations[2] = [] (int a, int b)
    {
        return a*b;
    };
     operations[3] = [] (int a, int b)
    {
        return a/b;
    };
    DoubleBinaryOperation operations1 [4];
      operations1[0] = [] (double a, double b)
    {
        return a+b;
    };
     operations1[1] = [] (double a, double b)
    {
        return a-b;
    };
     operations1[2] = [] (double a, double b)
    {
        return a*b;
    };
     operations1[3] = [] (double a, double b)
    {
        return a/b;
    };
    double a = 0.2 + 0.2;
    std::printf("%f",operations1[3](11,5));
    return 0;
}
