#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]= {10,52,20,5,30};
    int sum=0;
    for(int i=0; i<5; i=i+2)
    {
        sum=sum+arr[i];
    }
    printf("%d\n",sum);
    return 0;
}
