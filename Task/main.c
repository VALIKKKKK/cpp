#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=10;i<10000;i=i*10)
    {
        for(int j=1;j<4;++j)
        {
            printf("%d ",i*j);
        }
        printf("\n");
    }






    return 0;
}
