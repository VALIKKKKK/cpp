#include <iostream>

using namespace std;
void iter_swap (int* a,int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 4;
    int b = 5;
    swap(a,b);
    cout << b << endl;
    return 0;
}
