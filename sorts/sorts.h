#ifndef SORTS_H_INCLUDED
#define SORTS_H_INCLUDED
#include "algorithm.h"
template<class Iter, class Bp>
int bubble_sort(Iter first, Iter last, Bp p)
{
    int init = 0;
    bool is_sorted;
    int size = last - first;
    for(int i = 0; i < size; ++i)
    {
        is_sorted = true;
        for(Iter j = first; j < last - i - 1; ++j)
        {
            if(p(*j, *(j + 1)))
            {
                ++init;
                is_sorted = false;
                iter_swap(j, j + 1);

            }

        }
        if(is_sorted)
        {
            return init;

        }
    }
    return init;
}
int find_min(int* first, int* last)
{
    int* temp = first;
    int* min_index = first;
    for(;first != last - 1; ++first)
    {
        if(*first > *(min_index))
        {
            min_index = first;
        }
    }
    return min_index - temp;
}
void selection_sort1(int* arr, int size)
{
    int min_index;
    for(int i = 0; i < size - 1; ++i)
    {
        min_index = find_min(arr + i + 1, arr + size);
       std::cout << min_index;
        iter_swap(arr + i + 1, arr + min_index);
    }
}


#endif // SORTS_H_INCLUDED
