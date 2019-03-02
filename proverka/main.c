#include <stdio.h>
#include <stdlib.h>

int pow(int v,int p)
{
    int result=1;
    for(int i=0; i<p; ++i)
    {
        result=result*v;
    }
    return result;
}
int main()
{
    int r=pow(10,3);
    printf("%d\n",r);
    return 0;
}
