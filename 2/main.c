#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main()

{
    int arr[SIZE]= {10,50,20,5,30};
    int counter=0;
    for(int i=0; i<SIZE; i=++i)

        if(arr[i]%2==0)
        {
            counter=++counter;
        }


    printf("%d\n",counter);
    return 0;
}
