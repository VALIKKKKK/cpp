#include <stdio.h>
#include <stdlib.h>
/**struct Fraction
{
    int m_num;
    int m_denum;
    Fraction() = default;
    Fraction(int num, int denum):m_num(num),m_denum(denum){}
    Fraction operator* (const Fraction& that)
    {
        Fraction result;
        result.m_num = (*this).m_num * that.m_num;
        result.m_denum = this->m_denum * that.m_denum;
        return result;
    }
};**/
struct Fraction
{
    int m_num;
    int m_denum;

};
struct Fraction operator_plus(struct Fraction* this, struct Fraction that)
{
        struct Fraction result;
        result.m_num = (*this).m_num * that.m_num;
        result.m_denum = (*this).m_denum * that.m_denum;
        printf("%d/%d",result.m_num, result.m_denum );
        return result;

};
int main()
{
    struct Fraction a;
    a.m_num = 1;
    a.m_denum = 2;
    struct Fraction b;
    b.m_num = 1;
    b.m_denum = 2;
    operator_plus(&a,b);
    return 0;
}
