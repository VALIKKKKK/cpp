#include <iostream>
#include <typeinfo>
#include <initializer_list>
template <class InputIt>
InputIt min_el(InputIt first, InputIt last)
{
    InputIt temp = first;
    for(; first != last; ++first)
    {
        if(*temp > *first)
        {
            temp = first;
        }
    }
    return temp;
}
int min(std::initializer_list<int> l)
{
    return *min_el(l.begin(), l.end());
}
int main()
{
    auto var1 = 4;
    auto var2 = 4.0;
    auto var3 = 5LL;
    auto var4 = 6U;

    auto var6 = {-1000,2,3,4,5};
    auto var5 = min(var6);
    std::initializer_list<int> var7;
    std::cout << var5  << std::endl;
    return 0;
}
