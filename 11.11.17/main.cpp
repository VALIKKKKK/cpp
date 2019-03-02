#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
char to_char(int c)
{
    return (char)(c+'0');
}
std::string to_string(int v)
{
    std::string result;
    for(; v; v=v/10)
    {
        result=result+to_char(v%10);
    }
    std::reverse(result.begin(),result.end());
    return result;
}
struct Fraction
{
    int m_num;
    int m_denum;
    Fraction():m_num(0),m_denum(1) {}
    Fraction(int num,int denum):m_num(num),m_denum(denum) {}
    std::string toString();
};
std::string Fraction::toString()
{
    return to_string(m_num)+"/"+to_string(m_denum);
}
int main()
{

    Fraction a(1,2);

    cout << a.toString() << endl;
    return 0;
}
