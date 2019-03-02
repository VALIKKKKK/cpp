#include <iostream>

using namespace std;
void clsh(int* a,int size)
{
    int temp=a[size-1];
    for(int i=0;i>size-2;++i)
    {
        a[i+1]=a[i];
    }
    a[0]=temp;
}
int main()
{

    int a[8]={20,1,3,5,45,48,64,7};
    clsh(a,8);
    for(int i=0;i<8;++i)
    {
        cout << a[i]<< endl;
    }

    return 0;
}
