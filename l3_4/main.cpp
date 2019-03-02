#include <iostream>

using namespace std;
bool is_even(int value)
{
    return value%2==0;
}
int abs(int value)
{
    if(value>0)
    {
        return value;
    }
    else
    {
        return -value;
    }
}
int f(int first,int last)
{
    int temp=0;

    for(int i=first;i<=last;++i)
    {
        if(!is_even(i))
        temp+=abs(i);
    }
    return temp;
}
int main()
{
     int a=f(-99,0);
    cout << a << endl;
    return 0;
}
