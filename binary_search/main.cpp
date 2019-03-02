#include <iostream>
#include <algorithm>
void insertion_sort(int* arr, int size)
{
    for(int i = 1; i < size; ++i)
    {
        int temp = arr[i];

        for(int j = i - 1; j >= 0; --j)
        {
            if(temp > arr[j])
            {
                break;
            }
            arr[j+1] = arr[j];
            arr[j] = temp;
        }

    }
}

/*void shell_sort(int* arr, int size)
{
    for()
    for(int i = 1; i < size; ++i)
    {
        int temp = arr[i];

        for(int j = i - 1; j >= 0; --j)
        {
            if(temp > arr[j])
            {
                break;
            }
            arr[j+1] = arr[j];
            arr[j] = temp;
        }

    }
}
*/
int my_binary_search(int* arr, int left,int right, int key)
{
    int midl;
    while(left<=right)
    {
        midl = (left + right) / 2;
        if(key < arr[midl])
        {
            right = midl - 1;
        }
        if(key > arr[midl])
        {
            left = midl + 1;
        }
        if(key == arr[midl])
        {
            return midl;
        }
    }
    return -1;

}



int main()
{
    int arr[5] {100,25,34,46,58};
    insertion_sort(arr,5);
    std::cout << arr[4] <<" "<< my_binary_search(arr,1,5,100) << std::endl;
    return 0;
}
