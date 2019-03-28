#include <iostream>
#include <string>
#include <algorithm>

std::string to_camel_case(std::string text)
{
    auto i = std::count_if(text.begin(), text.end(), [](int a)
    {
        return a == '_';
    });
    while(i)
    {
        auto k = std::find(text.begin(), text.end(), '_');
        text.erase(k);
        *k = *k - 32;
        --i;
    }

    auto t = std::count_if(text.begin(), text.end(), [](int a)
    {
        return a == '-';
    });
    if(!i && !t)
    {
        return std::string("another value");
    }
    while(t)
    {
        auto k = std::find(text.begin(), text.end(), '-');
        text.erase(k);
        *k = *k - 32;
        --t;
    }
    return text;
}
int main()
{
    std::string a{"the stealt hwarrior"};
    std::cout <<to_camel_case(a);
    //std::cout << (char)('a' - 32);
    return 0;
}
