#include <iostream>

using namespace std;
void print_even(int first,int last)
{
    if(first%2!=0)
    {
        ++first;
    }
    for(int i=first;i<=last;i+=2)
    {
        if(i%5==0)
        {
            cout << i << endl;
        }
    }
}
int main()

{
    print_even(2,100);

    return 0;
}
