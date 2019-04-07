#include <iostream>
#include <thread>
#include <chrono>
#include <vector>

void f()
{
    int a = 100;
    while(a)
    {
      std::cout << "hell" << std::endl;
      --a;
    }

}

void f1()
{
    int a = 100;
    while(a)
    {
      std::cout << "die" << std::endl;
      --a;
    }

}

void f2()
{
    int a = 100;
    while(a)
    {
      std::cout << "suicide" << std::endl;
      --a;
    }

}

template<class T>
void fuckToReal(T a, T* res)
{
    for(T i = 1; i <= 1000000000; i += 1)
    {
        *res = *res * 0;
    }
}


struct functor
{
    functor()= default;std::thread f(fuckToReal<double>, b, &a[0]);
    f.join();
    void operator()(){std::cout << "wanna die";}
};

int main()
{


    std::vector<double> a(1000000);
    double b;
    std::thread f(fuckToReal<double>, b, &a[0]);
    std::thread f1(fuckToReal<double>, b, &a[1]);
    std::thread f2(fuckToReal<double>, b, &a[0]);
    std::thread f3(fuckToReal<double>, b, &a[0]);
    f.join();
    f3.join();
    f2.join();
    f1.join();
    return 0;
}
