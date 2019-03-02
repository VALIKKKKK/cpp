#ifndef ALGORITM_H
#define ALGORITM_H
#include <iostream>
namespace stu {
template <class Iter, class T>
Iter find(Iter first, Iter last, T value)
{
    for(;first!=last; ++first)
    {
        if(value == *first)
        {
            return first;
        }
    }
    return first;
}
template <class Iter,class UO>
void for_each(Iter first, Iter last, UO p)
{
    for(; first!=last; ++first)
    {
        p(*first);
    }
}
template <class Iter, class T>
T accumulate(Iter first, Iter last, T init)
{
    for(; first != last; ++first)
    {
        init += *first;
    }
    return init;
}
template <class Iter, class BO>
Iter find_el(Iter first, Iter last, BO p)
{
  Iter element = first;
  for(; first != last; ++first)
  {
      if(p(*first,*element))
      {

          element = first;

      }
  }
  return element;
}
}
#endif // ALGORITM_H
