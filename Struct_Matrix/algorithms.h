#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED
#include <stdexcept>

namespace stu{

void check_consistency(int it, int that)
{
    if(it != that)
    {
        throw std::invalid_argument("don't consistency");
    }
}

int pow(int a, int times)
{
    int b = a;
    for(int i = 0; i < times + 1; i++)
    {
        a *= b;
    }
    return a;
}

}
#endif // ALGORITHMS_H_INCLUDED
