#ifndef ALGORITHM_H_INCLUDED
#define ALGORITHM_H_INCLUDED
struct Count_digit{
int* d;
Count_digit()
{
    d = new int[10]{0};
}
operator()(int v)
{
    for(; v ; v /= 10)
    {
        ++d[v%10];
    }

}

~Count_digit()
{
    delete d;
}


};


#endif // ALGORITHM_H_INCLUDED
