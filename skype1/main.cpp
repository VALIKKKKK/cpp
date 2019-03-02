#include <iostream>

using namespace std;
bool is_not_even(int a)
{
    return !(a%2==0);
}
bool f(int a,int b)
{
    return is_not_even(a)^is_not_even(b);
}
bool f(int a,int b)
{
    return !(a%2==0)^!(b%2==0);
}
int main()
{
    bool a=0;
    bool b=0;
    cout << (a^b) << endl;
    return 0;
}
