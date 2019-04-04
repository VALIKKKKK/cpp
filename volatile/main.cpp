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
    for(T i = 1; i <= 1000; i += 1)
    {
        *res = *res * 0;
    }
}


struct functor
{
    functor()= default;
    void operator()(){std::cout << "wanna die";}
};

int main()
{


    std::vector<double> a(10);
    /*
    fuckToReal<double>(1000,&a[0]);
    fuckToReal<double>(1000,&a[1]);
    fuckToReal<double>(1000,&a[2]);
    fuckToReal<double>(1000,&a[3]);
    fuckToReal<double>(1000,&a[4]);
    fuckToReal<double>(1000,&a[5]);
    fuckToReal<double>(1000,&a[6]);
    fuckToReal<double>(1000,&a[7]);
    fuckToReal<double>(1000,&a[8]);
    fuckToReal<double>(1000,&a[9]);
    */
    std::thread f(functor{});
    f.join();

    return 0;
}
