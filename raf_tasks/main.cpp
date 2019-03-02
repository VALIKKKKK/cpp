#include <iostream>
#include <vector>
#include <algorithm>
#include "tasks.h"
struct Pair
{
    int m_first = 0;
    int m_second = 0;
    Pair(int first, int second)
    {
         m_first = first;
        m_second = second;
    }

};
std::ostream& operator<< (std::ostream& out, const Pair& p)
{
    return out << " first: " << p.m_first << " second: " << p.m_second;
}
bool is_exist(int value, std::vector<Pair> a)
{
    return find_if(a.begin(), a.end(),[value](Pair temp){return temp.m_first == value;}) != a.end();
}
template<class Iterator>
void f(Iterator first, Iterator last)
{
    std::vector<Pair> res;
    for(; first != last; ++first)
    {
        if(!is_exist(*first, res))
        {
            res.push_back(Pair(*first, 1));
        }
        else
        {
            int value = *first;
            auto temp = find_if(res.begin(), res.end(),[value](Pair temp){return temp.m_first == value;});
            temp->m_second++;
        }
    }
    for(auto i = res.begin(); i < res.end(); ++i)
    {
        std::cout << *i << std::endl;
    }
}

int main()
{
    std::vector<int> arr{625,125,25,5,1,8,4,25,5,7};
    int s=counter(25.0090999990, 9);
    int a=5;
    int b=10;
    int c=15;
    f(arr.begin(), arr.end());
//    bool res = is_exist(9, arr);
    increase(a,b,c);
//    std::cout << res;
    return 0;
}
