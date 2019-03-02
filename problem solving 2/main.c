#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[15]={-10,25,36,45,78,26,96,142,32,1,13,14,79,-100,14,};
    int max=arr[0];
    int max_ind=0;
    for (int i=0;i<15;++i)
    {
        if(max<arr[i])
        {
            max=arr[i];
            max_ind=i;
        }
    }
    printf("%d %d\n",max,max_ind);
    return 0;
}
