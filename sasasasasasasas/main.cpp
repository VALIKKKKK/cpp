#include <iostream>

void f(int a)
{
    if(a==0)
        return;

    std::cout << "Hello world" << std::endl;
    f(a-1);

};

template<int a>
struct f1
{
    f1()
    {      std::cout << a;
         f1<a-1>();
    }


};

template<>
struct f1<0>
{


};

int main()
{
    f(10);
    f1<5> a;
    return 0;
}
