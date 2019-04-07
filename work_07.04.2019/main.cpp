#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include "test_sort_with_chrono.h"
#include <chrono>
#include <ctime>
#include "random.h"
#include "chrono_test.h"

template<class Iter>
void f(Iter first, Iter last)
{
    auto t1 = std::chrono::high_resolution_clock::now();
    bubble_sort(first, last);
    auto t2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> ms = t2 - t1;
    std::cout << ms.count()<< "ms" << std::endl;
}


template<class Iter>
void f1(Iter first, Iter last)
{
    auto t1 = std::chrono::high_resolution_clock::now();
    comb_sort(first, last);
    auto t2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> ms = t2 - t1;
    std::cout << ms.count()<< "ms" << std::endl;
}

template<class Iter>
void f2(Iter first, Iter last)
{
    auto t1 = std::chrono::high_resolution_clock::now();
    std::sort(first, last);
    auto t2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> ms = t2 - t1;
    std::cout << ms.count()<< "ms" << std::endl;
}

int main()
{
    std::vector<int> a(10000);
    std::vector<int> b(10000);
    std::vector<int> c(10000);
    std::generate(a.begin(), a.end(), GetRandom(0,10000));
    c = b = a;
    f(a.begin(), a.end());
    f1(b.begin(),b.end());
    f2(c.begin(),c.end());
    //std::for_each(a.begin(), a.end(), [](int v){std::cout << v << " ";});
    std::cout << std::endl;
    //std::for_each(b.begin(), b.end(), [](int v){std::cout << v << " " ;});
    std::cout << std::endl;

    std::cout << std::endl;

    return 0;
}
