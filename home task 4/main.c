#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r1=3;
    int r2=2;
    int s1=0;
    int s2=0;
    int s3=0;
    int pi=3.14;
    if(r1<r2)
    {
        printf("error\n");
    }

    else
    {
        s1=pi*(r1*r1);
        s2=pi*(r2*r2);
        s3=s1-s2;
        printf("%d\n",s1);
        printf("%d\n",s2);
        printf("%d\n",s3);
    }
    return 0;
}
