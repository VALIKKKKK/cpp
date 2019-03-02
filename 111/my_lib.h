#ifndef MY_LIB_H_INCLUDED
#define MY_LIB_H_INCLUDED

int composition_even(int arr[],int first,int last,int composition)
{
    for(int i=first; i<last; i=i+2)
    {


        composition=composition*arr[i];


    }
    return composition;
}
int find(int arr[],int start,int end,int f)
{
    for(int i=start; i<end; ++i)
    {
        if(arr[i]==f)
            return i;
    }
    return -1;
}
int rfind(int arr[],int start,int end,int fl)
{
    for(int i=end-1; i>=start; --i)
    {
        if(arr[i]==fl)
            return i;
    }
    return -1;
}

#endif // MY_LIB_H_INCLUDED
