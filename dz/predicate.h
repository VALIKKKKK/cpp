#ifndef PREDICATE_H_INCLUDED
#define PREDICATE_H_INCLUDED
struct Pair{
    int first;
    int second;
};
int density(Pair a)
{
    return a.first/a.second;
}
bool task5_pr(Pair a, Pair b)
{
    return density(a)>density(b);
}
bool task12_pr(int a, int b)
{
    if(a<0)
    {
        return false;
    }
    return a<b;
}
bool task13_pr(int a, int b)
{
    if(a<0)
    {
        return false;
    }
    return a<b;
}

#endif // PREDICATE_H_INCLUDED
