#include <iostream>

using namespace std;

int main()
{
    int arr[10]{5,12,132,1,1,321,32,2,1,2};
    for (int* i = arr;i<arr+10;++i)
    {
        cout << i << endl;
    }
     for (int i = 0; i < 10 ; ++i)
     {
         cout << *(i+arr) << endl;
     }
    return 0;
}
