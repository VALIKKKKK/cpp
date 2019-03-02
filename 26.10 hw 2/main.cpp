#include <iostream>

using namespace std;
using BinaryOpiration=int (*)(int ,int );
using BinaryComporator=bool (*)(int ,int );
int sum(int a,int b)
{
    return a+b;
}
void print(int a[],int size)
{
    for(int i=0;i<size;++i)
    {
        cout << a[i];
    }

}
bool _less(int a,int b)
{
    return a<b;
}
int main()
{

    BinaryOpiration psum1=sum;
    void (*pprint) (int [],int)=print;
    BinaryComporator pless1=_less;
    pless=_less;
    cout << psum(8,5) << endl;
    cout << pprint << endl;
    cout << pless(8,51)<< endl;
    return 0;
}
