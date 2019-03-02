#include <iostream>

using namespace std;
int b;
void f(int a)//2686704
{
    int b;
    cout << (int)&b << endl;
    cout << a << endl;
}

int main()
{

    int a=10;//2686732
    f(a);
    cout << (int)&b  << endl;
    cout << a << endl;
    return 0;
}
