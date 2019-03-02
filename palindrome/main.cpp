#include <iostream>

using namespace std;
bool f(int *arr,int first,int last)
{
    for(int i=first,j=last-1;i<j;++i,--j)
    {
       if (arr[i]!= arr[j])
       {
           return false
       }
    }
    return true;
}
int main()
{

    return 0;
}
