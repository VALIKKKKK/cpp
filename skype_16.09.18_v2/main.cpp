#include <iostream>
#include <cmath>
#include "my_math.h"
#include "test_my_math.h"
using namespace std;
using BinaryOperation = double (*)(double, double);
double problem1(double x, double k)
{
    double res=0;
    return res=(pow(-1,k) * pow(x,2*k+1) / (factorial(k) * ( 2 * k + 1)));
}
double problem2(double x, double k)
{
    return k*x;
}
double equal1(double x, double first, double last, BinaryOperation prob)
{
    double res1 = 0;
    for (; first < last; ++first)
    {
        res1 += prob(x, first);
    }
    return res1;
}
bool is_decreasing_sequence(int* first, int* last)
{

    for ( ++first; first < last ; ++first)
    {
        if(*(first - 1) < *first )
        {
            return false;
        }

    }
    return true;
}
int is_power_of_five(int a)
{
    for (;a%5==0;)
    {
        a=a/5;
    }
    return a;
}
int main()
{
    int arr[10]= {7,6,5,4,3,2,1,1,9,8};
    double res1 = equal1(5,1,5,problem1);
    double res2 = equal1(10,1,100,problem2);
    //run_all_tests();
    //cout << res1 << " " << res2 << " " << is_decreasing_sequence(arr,arr+10)
    cout << is_sorted1(arr,arr+10) << " " << is_power_of_five(625)
    << endl;
    return 0;
}
