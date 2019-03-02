#ifndef TEST_MY_MATH_H_INCLUDED
#define TEST_MY_MATH_H_INCLUDED
#include "my_math.h"
#include <stdexcept>
void test_factorial()
{
    if(factorial(5) != 120)
    {
        throw std::runtime_error("test_factorial");
    }
}
void run_all_tests()
{
   test_factorial();
}
#endif // TEST_MY_MATH_H_INCLUDED
