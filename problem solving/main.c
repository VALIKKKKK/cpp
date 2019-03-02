#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[5]={3,5,7,-25,4};
    int min=arr[0];
    int min_ind=0;
    for(int i=0;i<5;++i)
    {
        if(min>arr[i])
        {
          min=arr[i];
          min_ind=i;
        }

    }
    printf("%d\n",min);
    printf("%d\n",min_ind);
    return 0;
}
