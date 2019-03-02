#ifndef ALGORITM_H_INCLUDED

#define ALGORITM_H_INCLUDED
#include <iostream>
bool all_of(int arr[],int start,int end,bool(*predicate)(int))
{
    for(int i=start;i<end;++i)
    {
        if(!predicate(arr[i]))
           {
               return false;
           }
    }
    return true;
}
int count_if(int arr[],int start,int end,bool(*predicate)(int))
{
    int temp=0;
    for(int i=start;i<end;++i)
    {
        if(predicate(arr[i]))
        ++temp;
    }
    return temp;
}
int find_if(int arr[],int start,int end,bool(*predicate)(int))
{
    for(int i=start;i<end;++i)
    {
        if(predicate(arr[i]))
        {
         return i;
        }
    }
    return -1;
}
void for_each(int arr[],int start,int end,void(*f)(int))
{
    for(int i=start;i<end;++i)
    {
      f(arr[i])  ;
    }
}
void print(int value)
{
    std::cout << value << std::endl;
}
void print_even(int value)
{
    if(value%2==0)
    {
       std::cout << value << std::endl;
    }
}
int accumulate(int arr[],int start,int end,int init,int(*binary_opiration)(int,int))
{
    for(int i=start;i<end;++i)
    {
        init=binary_opiration(init,arr[i]);
    }
    return init;
}
int sum(int a,int b)
{
    return a+b;
}
int mul(int a,int b)
{
    return a*b;
}


#endif // ALGORITM_H_INCLUDED
