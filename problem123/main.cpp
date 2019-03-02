#include <iostream>
#include <cmath>
#define Pi 3.14
using namespace std;

double f(double a)
{
    return 2*pow((3*Pi-2*a),2)*
    pow((5*Pi+2*a),2);

}
int main()
{
    double result=f(5);
    cout << result << endl;
    return 0;
}
