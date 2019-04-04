#include <iostream>

#define DISABLE_COPY(class)\
class(const class &) = delete;\
class & operator=(const class &) = delete;

struct Test
{
    DISABLE_COPY(Test)
};

int main()
{

    return 0;
}
