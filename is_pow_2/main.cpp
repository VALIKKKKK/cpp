#include <iostream>

using namespace std;
bool f(double a)
{
    double temp = a;
   for(int i = 0; i < a; ++i,temp /= 2)
   {
       if(temp==2)
       {
           return true;
       }
   }
    return false;
}
int main()
{
    cout << f(5) << endl;
    return 0;
}
