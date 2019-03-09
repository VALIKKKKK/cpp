#include <iostream>
#include "util.h"
#include "algorithms.h"
#include "random.h"

template<class Iter1, class Iter2, class Ternary_pred>
Iter1 ternary_find_if(Iter1 first, Iter1 last, Iter2 n, Ternary_pred p)
{
    ++first;
    for(;first != last; ++first)
    {
        if(p(*(first-1), *first, *n))
        {
            return first;
        }
    }
    return last;
}
template<class Iter1, class Iter2>
std::ptrdiff_t task_function(Iter1 first, Iter1 last, Iter2 n)
{
    auto res = ternary_find_if(first, last, n, [](int a, int b, int c){return (a<b) && (b<c);});
    if(res == last)
    {
        return 0;
    }
    return res-first;
}

int main()
{
    label:
    std::cout << TEXT_MESSEGE << std::endl;
    int variant;
    std::cin >> variant;
    int this_arr[10]{0};
    if(variant == 1)
    {
        stu::fill_random(this_arr, this_arr+10, -100, 100);
        print_contenier(this_arr, this_arr + 10);
    }
    else
    {
        if(variant == 2)
        {
            fill_array_from_clava(this_arr, this_arr+10);
            print_contenier(this_arr, this_arr + 10);
        }
        else
        {
            std::cout << "See condition asshole:" << std::endl;
            goto label;
        }
    }
    std::cout << "Input n" << std::endl;
    int n;
    std::cin >> n;
    std::cout << std::endl;
    std::cout << task_function(this_arr, this_arr+10, &n);
    return 0;
}
