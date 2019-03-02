#include <iostream>

using namespace std;
int delete_elements(int* arr, int size)
{
    int j = 0;
    int* temp = new int[size];
    for(int i = 0; i < size; ++i)
    {
       if(arr[i]!=0)
        {
            temp[j]=arr[i];
            std::cout <<"temp = "<<arr[i] << std::endl;
            ++j;
        }
    }
    delete[] arr;
    arr = temp;
    return j;
}
void print_array(int* arr, int size)
{
    for(int i = 0; i<size;++i)
    {
        std::cout << arr[i] << " ";
    }
}
int main()
{
    int* arr = new int[10]{654,231,321,0,0,0,0,7,6,4};
 int result = delete_elements(arr,10);
    print_array(arr,result);
    return 0;
}
