#ifndef MY_MATH_H_INCLUDED
#define MY_MATH_H_INCLUDED
double factorial(double a)
{
    double res1 = 1;
    for (int i = 2; i <= a; ++i)
    {
        res1 *= i;
    }
    return res1;
}
int is_sorted1(int* first, int* last)
{

    int temp=1;
    int temp1 = 1;
    for ( ++first; first != last ; ++first)
    {
        if(*(first - 1) < *first )
        {

            if (temp > temp1)
            {
                temp1 = temp;
            }
            temp=1;
        }
        ++temp;
    }
    return temp > temp1 ? temp : temp1;
}
#endif // MY_MATH_H_INCLUDED
