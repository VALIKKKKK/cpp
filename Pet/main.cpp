#include <iostream>
#include <stdexcept>
#include "MyPet.h"
using namespace std;



int main()
{

    Gray b;
    b.say();
    cout << b.get_health() << endl;
    Pet a;
    //a.set_health(4);
    cout << a.get_health()<< endl;
    Pet arr[4]= {Pet(),Pet(1),Pet(1,2),Pet(1,2,3)};
    cout << arr[3].get_happiness() << " " << arr[0].get_health() << endl;
    return 0;
}
