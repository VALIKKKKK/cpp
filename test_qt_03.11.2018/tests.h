#ifndef TESTS_H
#define TESTS_H
#include "my_algoritms.h"
#include <vector>
#include <iostream>
#include <assert.h>
#include "algoritm.h"
#include "tasks.h"
#include "predicates.h"
#define Containers std::vector<int> c{1,12,3,1,564,65,48,44,54,32,1,4}
void find_test()
{
    Containers;
    assert(c.begin()+1 == stu::find(c.begin(),c.end(),12));
    assert(c.end() == stu::find(c.begin(),c.end(),999));

}
void is_exist_test()
{
    Containers;
    assert(stu::is_exist(c.begin(), c.end(), 65));
    assert(!stu::is_exist(c.begin(), c.end(), 999));
}
void test_f()
{
    Containers;
    std::set<int> v = stu::get_unique_(c.begin(),c.end());
   // stu::for_each(v.begin(),v.end(),[](int a){std::cout << a << std::endl;});
}
void sum_test_array()
{
    Containers;

}
void find_el_test()
{
    Containers;
    int result = *stu::find_el(c.begin(),c.end(),stu::greater);
    std::cout << result << std::endl;
    //assert(result == 564);
}
void run_all_test()
{
    find_test();
    is_exist_test();
    test_f();
    find_el_test();
}
#endif // TESTS_H
