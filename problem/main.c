#include <stdio.h>
#include <stdlib.h>
int accumulate(int* a,int begin, int end, int start)
{
    for(int i=begin;i<end;++i)
    {

     start=start+a[i];


    }
    return start;
}
int main()
{   int a[5]={1,2,3,4,5};
    int sume=accumulate(a,1,4,0);
    printf("%d",sume);
    return 0;
}
