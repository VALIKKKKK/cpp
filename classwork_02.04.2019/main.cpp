#include <iostream>
#include <vector>

template<class Iterator>
void f(Iterator first, Iterator last)
{
    using value_type = typename std::remove_reference<decltype(*first)>::type;
    std::vector<value_type> a;
}


int main()
{
    int a = 40;
    int* p = &a;
    using value = std::remove_reference<decltype(*p)>::type;
    value c(a);
    c = 100;
    std::cout << c << " " << a;
    return 0;
}
