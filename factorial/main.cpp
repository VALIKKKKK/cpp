#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;
int factorial(int a)
{
    int result = 1;
    if(a < 0)
    {
        throw std::runtime_error("enter the positive number");
    }
    if(a!=0)
    {
        for(int i = 1; i < a+1; ++i)
        {
            result *= i;
        }

    }
    else
    {
        return 1;
    }
    return result;
}
int main()
{
    cout << factorial(-25) << endl;
    return 0;
}
