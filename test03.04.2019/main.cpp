#include <iostream>
#include <vector>
#include <type_traits>

template<class T>
struct remove_reference
{
    using type = T;
};

template<class T>
struct remove_reference<T&>
{
    using type = T;
};

template<class T>
struct remove_reference<T&&>
{
    using type = T;
};

template<class>
struct is_array
{
    static constexpr bool value = false;
};

template<class T>
struct is_array<T[]>
{
    static constexpr bool value = true;
};

template<class T, std::size_t size>
struct is_array<T[size]>
{
    static constexpr bool value = false;
};

template<class Iter>
auto accumulate(Iter first, Iter last)
{
    using value_type = typename std::remove_reference<decltype(*first)>::type;
    value_type init = 0;
    for(;first != last; ++first)
    {
        init += *first;
    }
    return init;
}

int main()
{
    std::vector<int> a{1,2,3,4,5};
//    std::cout <<  << std::endl;
    return 0;
}
