#include <stdio.h>
#include <stdlib.h>
#define POWER 4
int main()
{
    int value=2;
    int result=1;
    for(int i=0;i<POWER;++i)
    {
        result=result*value;
    }
    printf("%d\n",result);
    return 0;
}
