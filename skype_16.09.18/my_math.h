#ifndef MY_MATH_H_INCLUDED
#define MY_MATH_H_INCLUDED
double factorial(double a)
{
    double res1 = 1;
    for (int i = 2; i < a; ++i)
    {
        res1 *= i;
    }
    return res1;
}


#endif // MY_MATH_H_INCLUDED
