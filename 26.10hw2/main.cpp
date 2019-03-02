#include <iostream>

using namespace std;
using Operation=int (*)(int [],int ,int ,int );
using BinaryOpiration=int (*)(int,int);
int accumulate(int a[],int start,int end,int init,BinaryOpiration op)
{
    for(int i=start;i<end;++i)
    {
        if(a[i]<0)
        {
            init=op(a[i],init);
        }

    }
    return init;
}
int sum()
int main()
{
    int a[10]={20,25,45,689,4,1561,5,-61,91,-5};
    auto my_acc=accumulate;
    int (*p)(int[],int,int,int)=accumulate;
    Operation p1=accumulate;
    cout << p1(a,0,10,0) << endl;
    return 0;
}
