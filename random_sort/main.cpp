#include <iostream>
#include <numeric>
#include <algorithm>
#include <random>
#include <ctime>
#include "sorts.h"
#include <chrono>


int main()
{
    std::srand(std::time(nullptr));
    int arr[10] {0};

    random_filling(arr, 10);

    std::cout << std::endl;
    print_arr(arr, 10);
    std::cout << std::endl;
    auto t1 = std::chrono::high_resolution_clock::now();
    rand_sort(arr, 10);
    auto t2 = std::chrono::high_resolution_clock::now();
     std::chrono::duration<double, std::milli> ms = t2 - t1;
     std::cout << std::endl;
     std::cout << ms.count()<< "ms" << std::endl;
    return 0;
}
