#include <iostream>
#include <string>

void move_zero(int* first, int* last)
{
    int size = *lasr - *first;
    int arr[size];
    for(int i = 0;first != last; ++first, ++i)
    {
        if(*first == 0)
        {
            arr[i] = *first;
        }
    }
}

int main()
{
    int arr[5]{1,2,3,0,4};

    return 0;
}
