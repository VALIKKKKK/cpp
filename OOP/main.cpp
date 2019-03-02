#include <iostream>
struct Print
{
    void operator<<(int a)
    {
        std::cout << "hello world";
    }
}Mycout;
int sum(int& a, int& b)
{
    return a+b;

}
using namespace std;

int main()
{
    int a;
    int b;
    int res = sum(a,b);
    cout << res << endl;
    return 0;
}
