#include <iostream>

using namespace std;
   long swap(long a)
{
   long sum = 0;
   while(a)
   {
       sum = sum*10 + a%10;
       a /= 10;
   }
   return sum;
}
int main()
{
    long a=0;
    cin >> a;
    long f=0;
    f=swap(a);
    cout << f << endl;
    a=a+f;
    cout << a << endl;
    return 0;
}
