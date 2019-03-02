#include <iostream>
#include "my_lib.h"
using namespace std;

int main()
{

    int arr[9]= {2,2,1,2,2,1,1,3,4};
    int c=rfind(arr,0,9,1);
    int d=find(arr,0,9,1);

    int a=composition_even(arr,0,9,1);
    cout << d << " " << c << " " << a <<endl;
    return 0;
}
