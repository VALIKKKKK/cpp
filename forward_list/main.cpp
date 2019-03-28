#include <iostream>
#include "f_list.h"

int main()
{
    stu::forward_list<int> l{101,2,5,6,7,56,4};
    stu::forward_list<int> a{1};
    a.swap(l);
    //l.clear();
    //l.push_front(111);
    //l.pop_front();
    for(auto i = l.begin(); i != l.end(); ++i)
    {
        std::cout << *i << std::endl;
    }

    return 0;
}
