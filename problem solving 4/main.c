#include <stdio.h>
#include <stdlib.h>
int find_index(int* a[],int begin, int end,int v)
{
    for(int i=begin; i<end; ++i)
    {
        if(a[i]==v)
        {
            return i;
        }

    }
    return -1;
}
int main()
{
    int distance=0;
    int a[15]= {100,2,3,4,5,6,7,0,80,25,14,46,89,0,100};
    int begin=find_index(a,0,15,0);
    int end=find_index(a,begin+1,15,0);
    distance=end-begin-1;
    printf("%d\n",distance);
    return 0;
}
