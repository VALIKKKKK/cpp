#include "my_algoritms.h"
#include <vector>
#include <iostream>
#include "tests.h"
#include <set>
using namespace std;

int main()
{
     run_all_test();
    std::cout << std::endl;
    std::set<int> c;
    c.insert(1);
    c.insert(1);
    c.insert(1);
    c.insert(2);
    c.insert(2);
    c.insert(2);
    for(auto i = c.begin(); i != c.end(); ++i)
    {
        std::cout << *i << std::endl;
    }
    return 0;
}
