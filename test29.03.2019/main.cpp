#include <iostream>

void a(int *pa)
{
    pa = new int(3);
}

int main()
{
    int s(5);
    int *ps = &s;
    a(ps);
    std::cout << *ps << std::endl;
        return 0;
}
