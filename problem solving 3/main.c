#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]={2,5,6,8,9};
    int sum=0;
    for(int i=0;i<5;++i)
    {
        sum=sum+arr[i];
    }
    printf("%d\n",sum);
    return 0;
}
