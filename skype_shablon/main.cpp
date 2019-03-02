#include <iostream>

using namespace std;
using Operation = bool(*)(int);
template<typename T>
T sum(T a,T b)
{
    return a+b;
}
bool all_of(int* first,int* last,Operation operation)
{
    for( ;first!=last;++first)
    {
       if(!operation(*first))
       {
           return false;
       }
    }
    return true;
}
bool is_even(int a)
{
    return a>0;
}
int main()
{
    int arr[10]{-10,3,2,2,2,2,22,2,2,2};
    //cout << all_of(arr,arr+10,is_even) << endl;
    cout << "Timoha fuck off bitch" << endl;
    return 0;
}
