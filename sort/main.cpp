#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    std::vector<int> k{1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 10 ; ++i)
    {
        cout << k[i] << " " << endl;
    }
    for (int i = 0; i < 10 ; ++i)
    {
       if(i%2!=0)
       {
           k.push_back(k[i]);
       }

    }
    for (int i = 0; i < 10 ; ++i)
    {
        cout << k[i] << " ";
    }
    return 0;
}
