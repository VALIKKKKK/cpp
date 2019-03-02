#include <iostream>
#include "algoritm.h"
using namespace std;
bool is_sorted(int arr[],int start,int end,bool(*comparatar)(int a,int b))
{
    for(int i=start;i<end-1;++i)
    {
        if(!comparatar(arr[i],arr[i+1]))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[6]={4,3,6,8,2,10};
    for_each(arr,0,6,print_even);
    int a=accumulate(arr,0,6,0,sum);
    int b=accumulate(arr,0,6,1,[](int a,int b){return a*b;});
    cout << a << endl;
    cout << b << endl;
    return 0;
}
