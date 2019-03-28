#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED

double fuckToReal(double a)
{
    if(a == 0)
    {
        return 1;
    }
    double res = 1;
    for(double i = 1; i <= a; ++i)
    {
        res *= i;
    }
    return res;
}

#endif // ALGORITHMS_H_INCLUDED
