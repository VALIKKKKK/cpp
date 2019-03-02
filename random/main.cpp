#include <iostream>
#include <time.h>
#include <cmath>
using namespace std;

int main()
{


    int get_random(int diget)

    srand(time(0));
    int a=rand();
    return a%(int)pow(10,diget);
}

int main()
{

    for(int i=0;i<5;++i)
    cout << rand()%10 << endl;
    return 0;

}
