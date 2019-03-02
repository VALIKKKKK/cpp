#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]= {25,20,49,91,41};
    int min=arr[0];
    int min_ind=0;
    for(int i=1; i<5; ++i)
    {
        if(min>arr[i])
        {
            min_ind=i;
            min=arr[i];
        }
    }
    printf("%d index:%d\n",min,min_ind);
    return 0;
}
