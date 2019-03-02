#include <iostream>
#include <cmath>
 sum(int* cal, int size)
{
    int temp;
    for(int i = 0; i < size; ++i)
    {
      temp = cal[0];
        cal[i] = temp + 2;

    }
    return temp;
}
using namespace std;

int main()
{
    int a=5;
    int c=3;
    int d=2;
    int b=4;
    double cal[5]{0};
    int sum=5;
    for(int i = 0; i < 5; ++i)
    {
        int temp = cal[0];
        cal[i] = temp + 2;
    }
    if (cal==sum)
    {
        cout << a << endl;            }
    else
    {
        cout << "no" << endl;
    }
    unsigned char x = -1;

    cout << (int)x;
    cal=pow(2,20);
    x=((pow(a,sqrt(c)))*pow(d,c))/(pow(b,2));
    cout << cal << endl;
    cout << sizeof(double) << endl;
    return 0;
}
