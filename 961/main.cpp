#include <iostream>

using namespace std;
long perevert(long a)
{
long y = 0;
while(a)
{
   y = y*10 + a%10;
   a /= 10;
}
return y;
}
int main()
{
    long x=0;
    cin >> x;
    long f=0;
    f=perevert(x);
    cout << f << endl;
    return 0;
}
