#include <iostream>

using namespace std;
void fib(int* arr,int size){
arr[0] = 0;
arr[1] = 1;
for(int i=2;i<size;++i)
{
    arr[i]=arr[i-1]+arr[i-2];}
    }
void print_array(int* arr,int size){
for(int i=0;i<size;++i)
{
    cout<<arr[i]<<" ";
}
}
void sort(int* arr,int size){
for(int i = 0;)
}
int main()
{   int arr[50]{0};
    fib(arr,50);
    print_array(arr,50);
    return 0;
}
