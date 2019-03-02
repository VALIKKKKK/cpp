#include <iostream>

using namespace std;
bool f(int a, int b, int c)
{
    if(a==b && b==c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
   cout << f(1,2,1);

    return 0;
}
