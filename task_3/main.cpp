#include <iostream>
#include "algorithms.h"
#include "util.h"
#include "random.h"



int main()
{
    label:
    std::cout << TEXT_MESSEGE << std::endl;
    int variant;
    std::cin >> variant;
    std::vector<int> res(10);
    if(variant == 1)
    {
        stu::fill_random(res.begin(), res.end(), -100, 100);
        print_contenier(res.begin(), res.end());
    }
    else
    {
        if(variant == 2)
        {
            fill_array_from_clava(res.begin(), res.end());
            print_contenier(res.begin(), res.end());
        }
        else
        {
            std::cout << "See condition asshole:" << std::endl;
            goto label;
        }
    }
    auto first_zero = stu::find(res.begin(), res.end(), 0);
    auto second_zero = stu::find(res.rbegin(), res.rend(), 0);
    std::cout << std::endl;
    if(first_zero == res.end() || second_zero == res.rend())
    {
        std::cout << 0;
    }
    else
    {
        std::cout << stu::accumulate(first_zero, second_zero.base(), 0) << std::endl;
    }
    //print_contenier(res.rbegin(), res.rend());
    return 0;
}
