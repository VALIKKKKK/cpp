#include <iostream>
#include <ctime>
#include <random>
#include <algorithm>
#include <vector>
#include <cmath>

int main()
{
    std::mt19937 gen;
    gen.seed(time(0));
    std::vector<int> v(10000);
    std::generate(v.begin(), v.end(), [&gen](){return std::abs(gen()% 667);});
    std::for_each(v.begin(), v.end(), [](int a){std::cout << a << " ";});
   // std::cout << gen();
    return 0;
}
