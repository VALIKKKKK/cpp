#ifndef RANDOM_H_INCLUDED
#define RANDOM_H_INCLUDED

#include <algorithm>
#include <random>
#include <ctime>
#include "algorithms.h"

namespace stu
{
template <class Iter>
void fill_random(Iter first, Iter last, int min_el, int max_el)
{
    //std::this_thread::sleep_for(std::chrono::seconds(8));
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<long int> uid(min_el, max_el);
    stu::generate(first, last, [&uid, &gen]()
    {
        return uid(gen);
    });

}
}

#endif // RANDOM_H_INCLUDED
