#include <iostream>

using namespace std;
bool predicate(int i)
{
    return ((i/100)%2==0) && (i/100!=0);
}
void hundreds(int first,int last)
{
    for(int i=first;i<=last;++i)
    {
        if(predicate(i))
        {
            cout << i << endl;
        }
    }
}
int main()
{
    hundreds(-400,400);
    return 0;
}
