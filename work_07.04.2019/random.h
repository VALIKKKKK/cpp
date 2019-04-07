#ifndef RANDOM_H_INCLUDED
#define RANDOM_H_INCLUDED
#include <random>
#include <ctime>

struct GetRandom
{
    std::mt19937 gen;
    std::uniform_int_distribution<> uid;
    GetRandom():gen(time(0)), uid(0, 1000){}
    GetRandom(int s, int e):gen(time(0)), uid(s, e){}
    int operator()()
    {
        return uid(gen);
    }
};

#endif // RANDOM_H_INCLUDED
