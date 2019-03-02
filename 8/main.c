#include <stdio.h>
#include <stdlib.h>
int sum(int a,int b,int c)
{
    int result=a+b+c;
    return result;
}
int main()
{
    int a2=8;
    int a1=sum(a2,4,5);
    printf("%d\n",a1);
    return 0;
}
