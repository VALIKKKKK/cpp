#ifndef SEARCHES_H_INCLUDED
#define SEARCHES_H_INCLUDED

template<class Iter>
Iter binary_search(Iter first, Iter last, int key)
{
    Iter midl;
    Iter low = first;
    Iter high = last;
    while(low <= high)
    {
        midl = low + (std::distance(low, high)/2);
        if(*midl == key)
        {
            return midl;
        }
        else
        {
            if(*midl > key)
            {
                high = midl - 1;
            }
            else
            {
                low = midl + 1;
            }
        }
    }
    return last;
}


#endif // SEARCHES_H_INCLUDED
