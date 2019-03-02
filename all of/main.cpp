#include <iostream>

using namespace std;
bool all_of(int *arr,int first, int last)
{
    for(int i=first;i<last;++i)
    {
        if(arr[i]<0)
        {
            return false;
        }
    }
    return true;
}
int min_element(int* arr,int i,int last)
{
    int temp=arr[i];
    int min_index=i;
    for(;i<last;++i)
    {
        if(temp<arr[i])
        {
            temp=arr[i];
            min_index=i;
        }
    }
    return min_index;
}
int accumulate(int* arr,int first,int last,int temp)
{
    for(;first<last;++first)
    {
        temp=temp+arr[first];
    }
    return temp;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
