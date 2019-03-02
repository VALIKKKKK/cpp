#include <iostream>
#include <cmath>
using namespace std;
void print_x(double a,double b,double n);
double get_step(double first,double last);
long long int factorial(int value)
{
    long long int result=1;
    for(int i=2;i<=value;++i)
    {
        result=result*i;
    }
    return result;
}
double s(double x,double n)
{
    double a=(n*n+1)/factorial(n);
    double b=pow(x/2,n);
    return a*b;
}
void print_x(double a,double b,double n)
{
    double step=get_step(a,b);
    for(int i=0;i<n;++i)
    {
        for(double j=a;j<b;j+=step)
        {
            cout << s(j,i);
        }
        cout << endl;
    }
}
double get_step(double first,double last)
{
    return (last-first)/10.0;
}
int main()
{
    print_x(0.1,1,10);
    long long int a=factorial(20);
    return 0;
}
