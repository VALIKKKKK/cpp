#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
    Vector<int> a;
    a.push_back(4);
    for(int i = 0; i < a.size; ++i)
    {
        cout << a.m_arr[i] << endl;

    }
    return 0;
}
