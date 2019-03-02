#ifndef MY_H_INCLUDED
#define MY_H_INCLUDED
int min(int a[],int start, int end)
{
    int min_el=a[0];
    int min_ind=0;
    for(int i=start;i<end;++i)
    {
        if(a[i]<min_el)
           {
               min_el=a[i];
               min_ind=i;
           }
    }
    return min_ind;
}
int max(int a[],int begin,int last)
{
    int max_el=a[0];
   int max_ind=0;
    for(int j=begin;j<last;++j)
    {
        if(a[j]>max_el)
           {
               max_el=a[j];
               max_ind=j;
           }
    }
    return max_ind;
}
int accumulate(int a[],int first,int end)
{

    int sum=0;
    for(int i=first;i<end;++i)
    {
            sum=sum+a[i];

    }
    return sum;
}


#endif // MY_H_INCLUDED
