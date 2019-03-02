#include <iostream>

using namespace std;

int find_min_el(int* arr, int size)
{
    int min_el = arr[0];
    for(int i = 0; i < size; ++i)
    {
        if(min_el > arr[i])
        {
            min_el = arr[i];
        }
    }
    return min_el;
}

int main()
{

    int arr[10]{1,2,3,4,5,6,7,8,9,10};
    int res = find_min_el(arr,10);
    cout << res << endl;
    return 0;
}
