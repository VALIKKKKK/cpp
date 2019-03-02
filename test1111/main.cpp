#include <iostream>

template<class Iter>
bool is_polindrome(Iter first, Iter last)
{
    --last;
    while(first != last)
    {
         std::cout << *first << " " << *last << std::endl;
        if(first != last)
        {
            //return false;
        }
        ++first;
        --last;
    }
   return true;
}

int main()
{
    int arr[6]{1,2,3,3,2,1};
    std::cout << is_polindrome(arr,arr+6) << std::endl;
    return 0;
}
