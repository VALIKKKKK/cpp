#include <iostream>
#include "util.h"
#include "algorithms.h"
#include "random.h"

int main()
{
label:
    std::cout << TEXT_MESSEGE << std::endl;
    I variant;
    std::cin >> variant;
    I this_arr[10]{0};
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
    ARRAY temp(10);
    ARRAY res(10);
    stu::copy(this_arr, this_arr + 10, temp.begin());
    auto temp1 = stu::copy_if(temp.begin(), temp.end(), res.begin(), [](int a)
    {
        return a > 0;
    });
    auto temp2 = stu::copy_if(temp.begin(), temp.end(), temp1, [](int a)
    {
        return a < 0;
    });
    stu::copy_if(temp.begin(), temp.end(), temp2, [](int a)
    {
        return a == 0;
    });
    std::cout << std::endl;
    print_contenier(res.begin(), res.end());
    return 0;
}
