#include <iostream>
#include "my.h"

using namespace std;


int main()
{

    int a[5]={12,35,80,15,-1};
    int g=min(a,0,5);
    int b=max(a,0,5);
    int f=accumulate(a,b,g);
    cout << g << endl;
    return 0;
}
