#include <iostream>

using namespace std;

int main()
{
    int a[14]= {12,15,31,25,1,12,17,85,34,14,25,75,2,1};
    for(int i=0; i<7; ++i)
    {
        for(int j=0; j<7-i-1; ++j)
        {
            if(a[j]<a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }
    for(int i=7;i<14-1;++i)
    {
       for(int j=6;j<14;++j)
       {
           if(a[j]>a[j+1])
           {
               int temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
    }
    for(int i=0; i<15; ++i)
    {
        cout << a[i] << endl;

    }
    return 0;
}
