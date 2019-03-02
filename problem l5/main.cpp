#include <iostream>
#include <iomanip>
using namespace std;
int accumulate(int a[],int first,int last,int init)
{
    for(int i=first; i<last; ++i)
    {
        init+=a[i];
    }
    return init;
}
int average(int a[],int first,int last)
{
    int temp=accumulate(a,first,last,0);
    return temp/(last-first);
}
int main()
{

    int arr[15]= {15,23,59,48,12,14,75,94,1,2,3,15,14,12,34};
    int dest[15];
    int aver=average(arr,0,15);

     for(int i=0;i<15;++i)
     {
         dest[i]=arr[i]-aver;

         cout << dest[i] << setw(5) ;
     }

    cout << aver << endl;
    return 0;
}
