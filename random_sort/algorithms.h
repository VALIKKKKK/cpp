#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED
#include "sorts.h"

void print_arr(int* arr, int size)
{
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << std::endl;
    }
}

bool f(int* arr, int size)
{
    for(int i = 0; i < size-1; ++i)
    {
        if(arr[i] > arr[i+1])
        {
            return false;
        }
    }
    return true;
}

void copy_arr(int* arr, int size, int* arr1)
{
    for(int i = 0; i < size; ++i)
    {
        arr1[i]=arr[i];
    }
}

void random_filling(int* arr, int size)
{
    long long unsigned int temp;
    for(int i = 0; i < size; ++i)
    {
        temp = rand();
        arr[i] = temp;
    }
}

#endif // ALGORITHMS_H_INCLUDED
