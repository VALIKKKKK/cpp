#include <iostream>

using namespace std;
double to_inch(double centimetrs)
{
return centimetrs/2.54;
}
double to_centimetr(double inch)
{
    return inch*2.54;
}
void print_centimetrs(int begin,int end,int step)
{
    for(int i=begin;i<end;i=i+step)
    {
        cout << i << " "<< to_centimetr(i) << endl;
    }
}
int main()
{
    print_centimetrs(0,10,2);

    return 0;
}
