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
    std::vector<int> v(100000);
    //std::generate(v.begin(), v.end(), [&gen](){return std::abs(gen()% 667);});
    std::uniform_int_distribution<int> uid(0,1000);
    std::generate(v.begin(), v.end(), [&uid, &gen](){return uid(gen);});
    std::for_each(v.begin(), v.end(), [](int a){std::cout << a << " ";});
    //std::cout << gen();
    return 0;
}
