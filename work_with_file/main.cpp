#include <iostream>
#include <fstream>


int main()
{
    std::fstream s("test.txt", s.in | s.out | s.trunc);
    if(!s.is_open())
    {
        std::cout << "error";
    }
    else
    {
        s<<"Hell net";
    }

    return 0;
}
