#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED

namespace stu
{
template <class Iter, class Generator>
void generate(Iter first, Iter last, Generator g)
{
    for(; first != last; ++first)
    {
        *first = g();
    }
}

template<class InputIt, class UnaryFunction>
UnaryFunction for_each(InputIt first, InputIt last, UnaryFunction f)
{
    for (; first != last; ++first) {
        f(*first);
    }
    return f;
}

template<class InputIt, class OutputIt>
OutputIt copy(InputIt first, InputIt last,
              OutputIt d_first)
{
    while (first != last) {
        *d_first++ = *first++;
    }
    return d_first;
}

template<class InputIt, class OutputIt, class UnaryPredicate>
OutputIt copy_if(InputIt first, InputIt last,
                 OutputIt d_first, UnaryPredicate pred)
{
    while (first != last) {
        if (pred(*first))
            *d_first++ = *first;
        first++;
    }
    return d_first;
}

}

#endif // ALGORITHMS_H_INCLUDED
