#ifndef PAIR_H_INCLUDED
#define PAIR_H_INCLUDED
template <typename T1,typename T2>
class Pair
{
    public:
    T1 first;
    T2 second;
    Pair ()
    {

    }
    Pair(T1 f, T2 s)
    {
        first = f;
        second = s;

    }
};



#endif // PAIR_H_INCLUDED
