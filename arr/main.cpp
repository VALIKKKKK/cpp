#include <iostream>
#include <vector>
using namespace std;

int main()
{
    std::vector<int> a{1,23,45,6,-5,2,-25} ;
    std::vector<int> b{};
    std::vector<int> c{};
    for(int i = 0;i< a.size() ;++i)
    {
        if(a[i]<0)
        {
            b.push_back(a[i]);
        }
        else
        {
            c.push_back(a[i]);
        }
    }
      for(int i = 0;i< b.size() ;++i)
    {
        cout << b[i] << " ";
    }
    cout << ""<< endl;
    for(int i = 0;i< c.size() ;++i)
    {
       cout << c[i] << " ";
    }
    return 0;
}
