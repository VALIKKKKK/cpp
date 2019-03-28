#include <iostream>
#include <cmath>
#include "algorithms.h"
#include <iomanip>


int main()
{
    double a, b, h, k, x, y, s, p;
    int i, n;
    std::cout << "push a, b and n" << std::endl;
    std::cin >> a >> b >> n;
    x = a;
    h = (b - a)/10;
    k = 1;
    while(x <= b + h / 2);
    {
        p = s = x;
        for(i = 1; i <= n; ++i)
        {
            p *= pow(2 * x, i)/ fuckToReal(i);
            s += p;
        }
        y = sin(x);
        std::cout << std::setw(15) << x << std::setw(15) << y << std::setw(15) << s << std::setw(15) << y - s << std::endl;
        x += h;
        std::cout << std::endl;
    }
        return 0;
}
