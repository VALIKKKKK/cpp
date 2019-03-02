#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[6]="hello";
    char c='a'-32;
    for(int i=0;i<5;++i)
    {
        arr[i]=arr[i]-32;
        printf("%c",arr[i]);

    }

    return 0;
}
