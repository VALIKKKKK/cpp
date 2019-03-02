#ifndef ALGORITHM_H_INCLUDED
#define ALGORITHM_H_INCLUDED
template<class T>
void swap(T& a, T& b)
{
   T temp = a;
   a = b ;
   b = temp;
}
template<class Iter1, class Iter2>
void iter_swap(Iter1 a, Iter2 b)
{
    swap(*a, *b);
}
void print_array(int* arr, int size)
{
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << std::endl;
    }
}
int gcd(int a, int b)
{
    int temp;
    while(temp = a % b)
    {
        a = b;
        b = temp;
    }
    return b;
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a,b);

}
#endif // ALGORITHM_H_INCLUDED
