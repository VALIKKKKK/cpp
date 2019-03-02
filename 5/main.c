#include <stdio.h>
#include <stdlib.h>

int main()
{
    int src[5]= {10,50,20,5,30};
  int dest[5];
  for(int i=0,j=4;i<5;++i,--j)
  {
      dest[i]=src[j];
  }


    for(int i=0;i<5;++i)
    {
     printf("dest %d\n",dest[i]);
    }
    return 0;
}
