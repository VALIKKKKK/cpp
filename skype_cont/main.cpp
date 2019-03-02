#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "pair.h"
using namespace std;


int main()
{

    Pair<int,int> a(4,6);
    Pair<int,int> b;
    // a.first = 4;
    // a.second = 5;
    /*std::srand(std::time(nullptr));
    vector<int> timoha_sucker = {1,2,3,1,23,12,31};
    timoha_sucker.push_back(15);
    vector<int> timoxa_ovosh;
    for (int i = 0;i < timoha_sucker.size(); ++i)
    {
        timoha_sucker[i]=1+rand()%10000;
        cout << timoha_sucker[i] << endl;
    }
     */
    cout << a.first << " " << a.second << endl;
    return 0;
}
